//
//  DetailViewController.m
//  CustomCell
//
//  Created by rimi on 16/7/11.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController () <UITableViewDelegate,UITableViewDataSource>

@end

@implementation DetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (NSInteger) tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 3;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"Ze"];
    return cell;
}

//处理cell的选中事件
#pragma mark - UITableViewDelegate
- (void) tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    //弹出警告框
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"+1s" message:@"你做了一点微小的工作" preferredStyle:1];
    UIAlertAction *action = [UIAlertAction actionWithTitle:@"续" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        
    }];
    UIAlertAction *actionC = [UIAlertAction actionWithTitle:@"另请高明" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        
    }];
    
    //关联alert和antion
    [alert addAction:action];
    [alert addAction:actionC];
    [self presentViewController:alert animated:YES completion:nil];}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
