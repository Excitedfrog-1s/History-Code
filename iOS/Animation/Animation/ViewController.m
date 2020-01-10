//
//  ViewController.m
//  Animation
//
//  Created by rimi on 16/7/9.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic,strong) UIImageView *ball;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view addSubview:self.ball];
}

//当手指点击屏幕时触发方法
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    //1.获取点击的位置
    UITouch *touch = [touches anyObject]; //获取点击的手指，anyObject表示任何一个手指
    CGPoint point = [touch locationInView:self.view];
    //2.将小球移动到点击的位置(动画)
    //动画时长 延迟时间 阻尼系数(值0~1，值越小，弹簧效果越明显) 初始速度 动画选项 正在执行动画的方法体 动画完成后
    [UIView animateWithDuration:3.0 delay:0 usingSpringWithDamping:0.1 initialSpringVelocity:0 options:UIViewAnimationOptionCurveEaseIn animations:^{
        //写动画
        self.ball.center = point;
    } completion:nil];
    
}

- (UIImageView *)ball{
    if (!_ball) {
        //初始化
        _ball = [[UIImageView alloc]init];
        //设置位置
        _ball.frame = CGRectMake(30, 30, 50, 50);
        //添加图片
        _ball.image = [UIImage imageNamed:@"ball.png"];
    }
    return _ball;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
