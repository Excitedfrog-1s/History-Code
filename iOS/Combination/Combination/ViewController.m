//
//  ViewController.m
//  Combination
//
//  Created by rimi on 16/7/8.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "ViewController.h"

@interface ViewController () <UITableViewDataSource,UITableViewDelegate>
@property (nonatomic,copy) NSArray *dataSource;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

//点击cell时会触发此方法
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    [super viewDidLoad];
    [super viewDidLoad];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"Hey yo what's up" message:@"Constructed" preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *action = [UIAlertAction actionWithTitle:@"Submit" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
    }];
    [alert addAction:action];
    [self presentViewController:alert animated:true completion:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

//需要告诉需要显示多少个分组
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 26;
}

//需要告诉tableView你要显示多少行数据
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.dataSource.count;
}

//配置每一行的信息
- (UITableViewCell*)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    //获得单行视图
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell"];
    //获得字典
    NSDictionary *dic = self.dataSource[indexPath.row];
    //设置图片
    cell.imageView.image = [UIImage imageNamed:dic[@"image"]];
    //设置标题
    cell.textLabel.text = dic[@"title"];
    //设置副标题
    cell.detailTextLabel.text = dic[@"detail"];
    return cell;
}

- (NSArray *)dataSource{
    if (!_dataSource){
        //1.找到文件路径
        NSString *path = [[NSBundle mainBundle]
                          pathForAuxiliaryExecutable:@"Main.plist"];
        //通过文件生成数组
        _dataSource = [NSArray arrayWithContentsOfFile:path];
    }
    return _dataSource;
}
@end