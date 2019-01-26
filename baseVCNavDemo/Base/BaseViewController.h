//
//  BaseViewController.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/9.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseViewController : UIViewController

/**
 设置下一级的返回按钮文字
 */
- (void)setBackButtonItemText:(NSString *)text;


/**
 打开一个网页

 @param url 打开一个网页
 */
- (void)pushWebViewController:(NSString *)url;

/**
 导航栏下面的那条线消失
 */
-(void)delNavLine;

@end

NS_ASSUME_NONNULL_END
