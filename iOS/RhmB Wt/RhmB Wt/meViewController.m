
//
//  meViewController.m
//  RhmB Wt
//
//  Created by rimi on 16/7/11.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "meViewController.h"
#import "meTableViewCell.h"

@interface meViewController () <UITableViewDelegate,UITableViewDataSource>
@property (copy, nonatomic)NSArray *titles;

@end

@implementation meViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.titles = @[@"帮助和支持",@"若有疑问请联系我们"];
}

- (NSInteger) tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 2;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    meTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"me"];
    cell.text2.text = self.titles[indexPath.row];
    return cell;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end

