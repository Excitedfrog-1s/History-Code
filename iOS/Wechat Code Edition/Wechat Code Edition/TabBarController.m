//
//  TabBarController.m
//  Wechat Code Edition
//
//  Created by rimi on 16/7/7.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "TabBarController.h"
#import "WechatViewController.h"
#import "ContactsViewController.h"
#import "DiscoveryViewController.h"
#import "MeViewController.h"

@interface TabBarController ()
@property (nonatomic,strong) NSMutableArray *controllers;

@end

@implementation TabBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    WechatViewController *WechatVC = [[WechatViewController alloc]init];
    [self tabBarAddSubVC:WechatVC title:@"微信" imageName:@"mainframe"];
    
    ContactsViewController *ContactsVC = [[ContactsViewController alloc]init];
    [self tabBarAddSubVC:ContactsVC title:@"通讯录" imageName:@"contacts"];
    
    DiscoveryViewController *DiscoveryVC = [[DiscoveryViewController alloc]init];
    [self tabBarAddSubVC:DiscoveryVC title:@"发现" imageName:@"discover"];
    
    MeViewController *MeVC = [[MeViewController alloc]init];
    [self tabBarAddSubVC:MeVC title:@"我" imageName:@"me"];
    
    self.viewControllers = self.controllers;
    
}

//类 图片名 标题  （封装方法）
- (void)tabBarAddSubVC:(UIViewController*)VC title:(NSString*)title imageName:(NSString*)imageName
{
    //设置标题文字
    VC.title = title;
    //设置标题
    VC.tabBarItem.title = title;
    //设置文字属性
    [VC.tabBarItem setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor grayColor],NSFontAttributeName:[UIFont systemFontOfSize:14]} forState:UIControlStateNormal];
    [VC.tabBarItem setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor greenColor],NSFontAttributeName:[UIFont systemFontOfSize:14]} forState:UIControlStateSelected];
    //设置图片
    VC.tabBarItem.image = [UIImage imageNamed:[NSString stringWithFormat:@"tabbar_%@",imageName]];
    VC.tabBarItem.selectedImage =[[UIImage imageNamed:[NSString stringWithFormat:@"tabbar_%@HL",imageName]]imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal]; //原图显示
    //添加导航控制器
    UINavigationController *nav = [[UINavigationController alloc]initWithRootViewController:VC];
    [self.controllers addObject:nav];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}

//懒加载
-(NSMutableArray *)controllers{
    if(!_controllers){
        //初始化
        _controllers = [NSMutableArray array];
    }
    return _controllers;
}
@end
