//
//  BaseViewController.m
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/9.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import "BaseViewController.h"
#import <SafariServices/SafariServices.h>


@interface BaseViewController ()

@end

@implementation BaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    [self setBackButtonItemText:NSLocalizedString(@"Back", nil)];
}

#pragma mark - 设置下一页的返回按钮样式

- (void)setBackButtonItemText:(NSString *)text {
    UIBarButtonItem *backButton = [[UIBarButtonItem alloc] init];
    [backButton setTitle:text];
    self.navigationItem.backBarButtonItem = backButton;
}

#pragma mark - 将控制器从导航堆栈中移除
- (void)removeFromNavigationStack {
    NSMutableArray *arrM = [NSMutableArray arrayWithArray:self.navigationController.viewControllers];
    [arrM removeObject:self];
    self.navigationController.viewControllers = arrM;
}

#pragma mark - 打开一个网页
- (void)pushWebViewController:(NSString *)url {
    SFSafariViewController *safariController = [[SFSafariViewController alloc] initWithURL:[NSURL URLWithString:url]];
    [self presentViewController:safariController animated:YES completion:nil];
}

#pragma mark - 导航栏下面的那条线消失

-(void)delNavLine
{
    if ([self.navigationController.navigationBar respondsToSelector:@selector( setBackgroundImage:forBarMetrics:)])
    {
        NSArray *list=self.navigationController.navigationBar.subviews;
        for (id obj in list)
        {
            if ([UIDevice currentDevice].systemVersion.floatValue >= 10.0)
            {//10.0的系统字段不一样
                UIView *view = (UIView*)obj;
                for (id obj2 in view.subviews) {
                    if ([obj2 isKindOfClass:[UIImageView class]])
                    {
                        UIImageView *image =  (UIImageView*)obj2;
                        image.hidden = YES;
                    }
                }
            }
        }
    }
}



@end
