//
//  detailTableViewCell.h
//  RhmB Wt
//
//  Created by rimi on 16/7/12.
//  Copyright © 2016年 HA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface detailTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *topImageView2;

@property (strong, nonatomic) IBOutlet UILabel *label;

@property (strong, nonatomic) IBOutlet UILabel *label2;

@property (strong, nonatomic) IBOutlet UILabel *label3;

@property (weak, nonatomic)NSString *imageNamed;

@end
