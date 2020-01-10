//
//  SecondViewController.m
//  Animation
//
//  Created by rimi on 16/7/9.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "SecondViewController.h"

@interface SecondViewController ()
{
    BOOL tap;
}
@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIView *redView = [[UIView alloc]initWithFrame:CGRectMake(20, 20, 80, 80)];
    redView.backgroundColor = [UIColor redColor];
    redView.tag = 100;
    [self.view addSubview:redView];
    
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    if(tap){
        return;
    }
    tap = YES;
    //根据tag值找到相应的视图
    UIView *redView = [self.view viewWithTag:100];
    CGRect frame = redView.frame;
    UITouch *touch = [touches anyObject];
    CGPoint point = [touch locationInView:self.view];
    [UIView animateWithDuration:2.0 animations:^{
        redView.center = point;
    } completion:^(BOOL finished){
        //翻转动画
        [UIView transitionWithView:redView duration:2.0 options:UIViewAnimationOptionTransitionFlipFromLeft animations:nil completion:^(BOOL finished) {
            //放大动画
            [UIView animateWithDuration:2 animations:^{
                redView.transform = CGAffineTransformMakeScale(1.5, 1.5);
            } completion:^(BOOL finished) {
                //回到原来的大小并回到原来的位置
                [UIView animateWithDuration:2.0 animations:^{
                    redView.transform = CGAffineTransformIdentity;
                    redView.frame = frame;
                } completion:^(BOOL finished) {
                    tap = NO;
                }];
            }];
        }];
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
