//
//  bandViewController.m
//  RhmB Wt
//
//  Created by rimi on 16/7/11.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "bandViewController.h"

@interface bandViewController () <UITableViewDataSource, UITableViewDelegate>
@property (assign, nonatomic)BOOL stop;  //动画停止标识

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end

static int number = 0;

@implementation bandViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.stop = NO;

}

#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    NSArray *arr = [[NSUserDefaults standardUserDefaults]objectForKey:@"goodsName"];
    return arr.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"car"];
    NSArray *arr = [[NSUserDefaults standardUserDefaults]objectForKey:@"goodsName"];
    cell.textLabel.text = arr[indexPath.row];
    return cell;
}

- (void)viewDidAppear:(BOOL)animated{
    self.stop = NO;
    //开始翻转
    [self rotationAnimation];
    [self.tableView reloadData];
    
}

- (void)viewWillDisappear:(BOOL)animated{
    self.stop = YES;
    
}

- (void)rotationAnimation{
    //得到当前应该翻转的图片
    UIView *view = [self.view viewWithTag:100 + number];
    if(!self.stop){
        [UIView transitionWithView:view duration:2 options:UIViewAnimationOptionTransitionFlipFromLeft animations:^{
            //动画进行时要做的事情
        } completion:^(BOOL finished) {
            //动画完成后要做的事情
            number = (number + 1) % 5;
            [self rotationAnimation];
        }];
    }

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
