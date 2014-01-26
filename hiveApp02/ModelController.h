//
//  ModelController.h
//  hiveApp02
//
//  Created by Morten Bøe on 1/26/14.
//  Copyright (c) 2014 Morten Bøe. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
