//
//  UIViewController+XYNav.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/10.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define BarTextColor [UIColor blackColor]
#define BarBgColor   [UIColor whiteColor]

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (XYNav)
/**
 控制屏幕方向
 */
@property(nonatomic,assign)UIInterfaceOrientationMask  y_screenOrientation;

/**
 上级控制器 可设置
 手势返回和pop的时候生效
 */
@property (nonatomic) UIViewController *y_popController;

/**
 是否启用大标题模式 仅支持iOS11 默认为NO 。
 */
@property(nonatomic,assign)BOOL       y_largeTitleMode;

/**
 隐藏nav横线
 */
@property(nonatomic,assign)BOOL     y_navLineHidden;

/**
 nav横线
 */
@property(nonatomic,strong)UIView     *y_navLine;


/**
 字体颜色 默认为[UIColor blackColor]
 */
@property (nonatomic , strong) UIColor *y_navBarTextColor;


/**
 背景颜色 默认为[UIColor whiteColor]
 */
@property (nonatomic , strong) UIColor *y_navBarBgColor;

/**
 背景图 如果设置了背景图  背景色无效
 */
@property (nonatomic , strong) UIImage *y_navBarBgImg;

/**
 设置对应的y_navBarAlpha透明度
 */
@property (nonatomic , assign) CGFloat y_navBarAlpha;

/**
 navagationbar是否隐藏 默认为不隐藏navagationbar
 */
@property (nonatomic , assign) BOOL y_navBarHidden;

@end

NS_ASSUME_NONNULL_END
