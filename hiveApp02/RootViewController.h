//
//  RootViewController.h
//  hiveApp02
//
//  Created by Morten Bøe on 1/26/14.
//  Copyright (c) 2014 Morten Bøe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
