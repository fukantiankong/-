//
//  ZYJRecommendSecondCell.h
//  TRProject
//
//  Created by Albert on 16/7/3.
//  Copyright © 2016年 Albert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZYJRecommendViewModel.h"
@interface ZYJRecommendSecondCell : UITableViewCell

@property (nonatomic) UILabel *label;

@property (nonatomic) UIButton *btn1;

@property (nonatomic) UIButton *btn2;

@property (nonatomic) UIButton *btn3;

@property (nonatomic) ZYJRecommendViewModel *recommendVM;
@end
