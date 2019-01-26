//
//  UIBarButtonItem+XYItem.m
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/10.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import "UIBarButtonItem+XYItem.h"

@implementation UIBarButtonItem (XYItem)

+ (instancetype) itemWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action
{
    // 创建UIButton
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    [button setBackgroundImage:[UIImage imageNamed:image] forState:UIControlStateNormal];
    [button setBackgroundImage:[UIImage imageNamed:highImage] forState:UIControlStateHighlighted];
    [button sizeToFit];
    
    // 把UIButton包装成UIBarButtonItem 有会按钮点击范围过大的问题
    // 解决这个问题
    UIView *containView = [[UIView alloc] initWithFrame:button.bounds];
    [containView addSubview:button];
    
    // 监听
    [button addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    
    // 返回
    return [[self alloc] initWithCustomView:containView];
}

+(instancetype) itemWithTitle:(NSString *)titleStr target:(id)target action:(SEL)action
{
    // 创建UIButton
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    [button setTitle:titleStr?:@"" forState:normal];
    [button sizeToFit];
    // 把UIButton包装成UIBarButtonItem 有会按钮点击范围过大的问题
    // 解决这个问题
    UIView *containView = [[UIView alloc] initWithFrame:button.bounds];
    [containView addSubview:button];
    // 监听
    [button addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    // 返回
    return [[self alloc] initWithCustomView:containView];
}

@end
