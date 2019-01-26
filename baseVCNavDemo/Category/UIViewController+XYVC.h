//
//  UIViewController+XYVC.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/11.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (XYVC)


/**
 获取当前的ViewController

 @return 获取当前的ViewController
 */
+ (UIViewController*)currentViewController;


/**
 获取顶端的ViewController

 @return 顶端的ViewController
 */
+(UIViewController *)appRootViewController;

@end

NS_ASSUME_NONNULL_END
