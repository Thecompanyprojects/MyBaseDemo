//
//  UIView+XYAddClickedEvent.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/11.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (XYAddClickedEvent)
- (void)addClickedBlock:(void(^)(id obj))tapAction;
@end

NS_ASSUME_NONNULL_END
