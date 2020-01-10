//
//  ThirdViewController.m
//  Animation
//
//  Created by rimi on 16/7/9.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "ThirdViewController.h"

@interface ThirdViewController ()
{
    BOOL isTap;
}

@end

@implementation ThirdViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIImageView *imageView = [[UIImageView alloc]initWithFrame:self.view.bounds];
    imageView.image = [UIImage imageNamed:@"knockout_00.jpg"];
    [self.view addSubview:imageView];
    imageView.tag = 101;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:
(UIEvent *)event{
    //获取需要做动画的图片
    UIImageView *imageView = [self.view viewWithTag:101];
    if(isTap)
    {
        //开始动画
        [imageView stopAnimating];
    }
    isTap =!isTap;
    //循环扫描图片名并将图片放入数组中
    NSMutableArray *imageArr = [NSMutableArray array];
    for (int i = 0; i<= 80; i++) {
        NSString *imageStr = [NSString stringWithFormat:@"knockout_%02d.jpg",i];
        UIImage *image = [UIImage imageNamed:imageStr];
        [imageArr addObject:image];
    }
    
        //动画图片数组
        imageView.animationImages = imageArr;
        //动画时长
        imageView.animationDuration = imageArr.count *0.0001;
        //重复次数
        imageView.animationRepeatCount = 10;
        //开始动画
        [imageView startAnimating];
    [self performSelector:@selector(stopAnimation) withObject:nil afterDelay:imageView.animationDuration];

}

- (void)stopAnimation{
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"+1s" message:@"+?s" preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *action = [UIAlertAction actionWithTitle:@"Submit" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
        NSLog(@"Did Selected");
    }];
    [alert addAction:action];
    [self presentViewController:alert animated:true completion:nil];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
