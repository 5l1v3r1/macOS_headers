//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSArray, UIPageViewController;

@protocol UIPageViewControllerDelegate <NSObject>

@optional
- (long long)pageViewControllerPreferredInterfaceOrientationForPresentation:(UIPageViewController *)arg1;
- (unsigned long long)pageViewControllerSupportedInterfaceOrientations:(UIPageViewController *)arg1;
- (long long)pageViewController:(UIPageViewController *)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)pageViewController:(UIPageViewController *)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(NSArray *)arg3 transitionCompleted:(BOOL)arg4;
- (void)pageViewController:(UIPageViewController *)arg1 willTransitionToViewControllers:(NSArray *)arg2;
@end

