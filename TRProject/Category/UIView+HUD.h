//
//  UIView+HUD.h
//  TRProject
//
//  Created by Albert on 16/2/26.
//  Copyright © 2016年 Albert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MBProgressHUD.h>

@interface UIView (HUD)
//忙提示
- (void)showBusyHUD;
//文字提示
- (void)showWarning:(NSString *)warning;
//隐藏提示
- (void)hideBusyHUD;
@end












