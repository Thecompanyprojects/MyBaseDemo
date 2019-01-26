//
//  UIBarButtonItem+XYItem.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/10.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIBarButtonItem (XYItem)
/**
 *  快速创建一个UIBarButtonItem
 *
 *  @param image     普通状态下的图片
 *  @param highImage 高亮状态下的图片
 *  @param target    目标
 *  @param action    方法
 */
+ (instancetype) itemWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action;


/**
 快速创建一个UIBarButtonItem

 @param titleStr itme文字
 @param target 目标
 @param action 方法
 */
+(instancetype) itemWithTitle:(NSString *)titleStr target:(id)target action:(SEL)action;


@end

NS_ASSUME_NONNULL_END
