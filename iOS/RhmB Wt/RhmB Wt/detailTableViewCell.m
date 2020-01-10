//
//  detailTableViewCell.m
//  RhmB Wt
//
//  Created by rimi on 16/7/12.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "detailTableViewCell.h"
#import "meTableViewCell.h"

@implementation detailTableViewCell

- (void)layoutSubviews {
    self.topImageView2.image = [UIImage imageNamed:self.imageNamed];
}

- (void)awakeFromNib {
    
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];
}

@end
