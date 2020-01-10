//  CustomTableViewCell.m
//  RhmB Wt
//
//  Created by rimi on 16/7/12.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "CustomTableViewCell.h"

@implementation CustomTableViewCell

- (void)layoutSubviews {
    self.topImageView.image = [UIImage imageNamed:self.imageNamed];
}

- (void)awakeFromNib {
    
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];
}

@end
