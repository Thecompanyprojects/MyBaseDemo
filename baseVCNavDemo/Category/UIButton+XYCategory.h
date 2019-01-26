//
//  UIButton+XYCategory.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/15.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ButtonActionCallBack)(UIButton *button);
@interface UIButton (XYCategory)

-(void)addCallBackAction:(ButtonActionCallBack)action
        forControlEvents:(UIControlEvents)controlEvents;

-(void)addCallBackAction:(ButtonActionCallBack)action;

@end

@interface UIButton (EnlargeTouchArea)

/**
 *  扩大 UIButton 的點擊範圍
 *  控制上下左右的延長範圍
 *
 *  @param top    <#top description#>
 *  @param right  <#right description#>
 *  @param bottom <#bottom description#>
 *  @param left   <#left description#>
 */
- (void)setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;

@end


NS_ASSUME_NONNULL_END
