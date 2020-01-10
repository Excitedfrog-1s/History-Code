//
//  CustomTableViewCell.h
//  CustomCell
//
//  Created by rimi on 16/7/11.
//  Copyright © 2016年 HA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *topImageView;

@property (strong, nonatomic) IBOutlet UILabel *Label1;

@property (strong, nonatomic) IBOutlet UILabel *Label2;

//图片名字
@property (weak, nonatomic)NSString *imageNamed;

@end
