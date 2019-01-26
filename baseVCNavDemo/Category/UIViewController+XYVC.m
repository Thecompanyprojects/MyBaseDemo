//
//  UIViewController+XYVC.m
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/11.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import "UIViewController+XYVC.h"

@implementation UIViewController (XYVC)

//获取手机当前显示的ViewController

+ (UIViewController*)currentViewController{
    
    UIViewController* vc = [UIApplication sharedApplication].keyWindow.rootViewController;
    while (1) {
        if ([vc isKindOfClass:[UITabBarController class]]) {
            vc = ((UITabBarController*)vc).selectedViewController;
        }
        if ([vc isKindOfClass:[UINavigationController class]]) {
            vc = ((UINavigationController*)vc).visibleViewController;
        }
        if (vc.presentedViewController) {
            vc = vc.presentedViewController;
        }else{
            break;
        }
    }
    return vc;
}

//iOS获取顶层的控制器

+(UIViewController *)appRootViewController

{
    
    UIViewController *RootVC = [UIApplication sharedApplication].keyWindow.rootViewController;
    
    UIViewController *topVC = RootVC;
    
    while (topVC.presentedViewController) {
        
        topVC = topVC.presentedViewController;
        
    }
    
    return topVC;
}
@end
