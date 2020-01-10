//
//  ViewController.m
//  RhmB Wt
//
//  Created by rimi on 16/7/11.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "ViewController.h"
#import "mainTableViewCell.h"

@interface ViewController ()

@property (copy, nonatomic)NSArray *imageNameList;
@property (copy, nonatomic)NSArray *titles;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.automaticallyAdjustsScrollViewInsets = NO;
    //系统单例（用户偏好）
    NSArray *goodsName = @[];
    [[NSUserDefaults standardUserDefaults] setObject:goodsName forKey:@"goodsName"];
    self.imageNameList = @[@"home_pic1",@"home_pic2",@"home_pic3",@"home_pic4",@"home_pic5"];
    self.titles = @[@"包的清洁",@"鞋的清洁",@"衣服的清洁",@"皮衣的清洁",@"配件的清洁"];
}

#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.imageNameList.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    mainTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"main"];
    cell.imageNamed = self.imageNameList[indexPath.row];
    cell.label5.text = self.titles[indexPath.row];
    return cell;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
