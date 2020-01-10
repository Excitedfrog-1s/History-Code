//
//  mainTableViewCell.m
//  RhmB Wt
//
//  Created by rimi on 16/7/13.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "mainTableViewCell.h"

@implementation mainTableViewCell

- (void)layoutSubviews {
    self.image3.image = [UIImage imageNamed:self.imageNamed];
}

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
