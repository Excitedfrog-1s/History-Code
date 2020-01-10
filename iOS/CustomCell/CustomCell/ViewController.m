//
//  ViewController.m
//  CustomCell
//
//  Created by rimi on 16/7/11.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "ViewController.h"
#import "CustomTableViewCell.h"

@interface ViewController () <UITableViewDataSource,UITableViewDelegate>

@property (copy, nonatomic)NSArray *imageNameList;
@property (copy, nonatomic)NSArray *titles;
@property (copy, nonatomic)NSArray *timeList;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.imageNameList = @[@"1.JPG",@"2.png",@"3.JPG"];
    self.titles = @[@"KLM",@"Scenery",@"Excited"];
    self.timeList = @[@"2016-07-11",@"2016-07-10",@"2016-07-09"];
    
}

#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.imageNameList.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    CustomTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"Jiang"];
    //cell.topImageView = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"1.JPG"]];
    cell.imageNamed = self.imageNameList[indexPath.row];
    cell.Label1.text = self.titles[indexPath.row];
    cell.Label2.text = self.timeList[indexPath.row];
    return cell;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
