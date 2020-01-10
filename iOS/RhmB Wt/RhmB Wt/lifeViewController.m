//
//  ViewController.m
//  CustomCell
//
//  Created by rimi on 16/7/11.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "lifeViewController.h"
#import "CustomTableViewCell.h"

@interface lifeViewController () <UITableViewDataSource,UITableViewDelegate>

@property (copy, nonatomic)NSArray *imageNameList;
@property (copy, nonatomic)NSArray *titles;
@property (copy, nonatomic)NSArray *timeList;

@end

@implementation lifeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.imageNameList = @[@"5.JPG",@"7.JPG",@"9.JPG",@"10.JPG",@"11.JPG"];
    self.titles = @[@"你问我支持不支持",@"我是支持的",@"一点微小的工作",@"我实在我也不是谦虚",@"你们给我搞的这个东西"];
    self.timeList = @[@"2016-07-12",@"2016-07-11",@"2016-07-10",@"2016-07-09",@"2016-07-08"];
    
}

#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.imageNameList.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    CustomTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"life"];
    cell.imageNamed = self.imageNameList[indexPath.row];
    cell.Label1.text = self.titles[indexPath.row];
    cell.Label2.text = self.timeList[indexPath.row];
    return cell;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
