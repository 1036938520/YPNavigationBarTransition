//
//  YPDemoContainerViewController.h
//  YPNavigationBarTransition-Example
//
//  Created by Guoyin Lee on 25/12/2017.
//  Copyright © 2017 yiplee. All rights reserved.
//

#import <UIKit/UIKit.h>
@import YPNavigationBarTransition;

@interface YPDemoContainerViewController : UIViewController<YPNavigationBarConfigureStyle>

@property (nonatomic, assign) YPNavigationBarConfigurations configurations;
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, strong) UIImage *backgroundImage;
@property (nonatomic, copy)  NSString *backgroundImageName;

@end
