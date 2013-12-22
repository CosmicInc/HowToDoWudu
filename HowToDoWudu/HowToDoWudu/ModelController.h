//
//  ModelController.h
//  HowToDoWudu
//
//  Created by Dilwoar Hussain on 22/12/2013.
//  Copyright (c) 2013 CosmicInc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
