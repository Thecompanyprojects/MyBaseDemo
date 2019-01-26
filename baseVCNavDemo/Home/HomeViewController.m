//
//  HomeViewController.m
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/10.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import "HomeViewController.h"
#import "UIViewController+XYNav.h"
#import "UIBarButtonItem+XYItem.h"
#import "UIImage+XYImg.h"

@interface HomeViewController ()
@property (nonatomic,strong) UIImageView *testImg;
@end

@implementation HomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.title = @"Home";
    self.y_navBarBgColor = [UIColor blueColor];
    self.y_navBarTextColor = [UIColor redColor];
    
    //self.navigationItem.leftBarButtonItem = [UIBarButtonItem itemWithImage:@"nav_item_game_icon" highImage:@"nav_item_game_click_icon" target:self action:@selector(clickBtn)];
    self.navigationItem.rightBarButtonItem = [UIBarButtonItem itemWithTitle:@"Right" target:self action:@selector(clickBtn)];
    
}

-(void)clickBtn
{
    
}

@end
