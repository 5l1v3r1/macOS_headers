//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, TSPluginManager, TSViewControllerTransitionManager;

@interface FRViewControllerCollectionViewCellLifecycleManager : NSObject
{
    BOOL _viewControllerAppearAnimated;
    int _viewControllerAppearState;
    TSPluginManager *_pluginManager;
    NSHashTable *_displayedViewControllers;
    TSViewControllerTransitionManager *_transitionManager;
}

@property(retain, nonatomic) TSViewControllerTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(retain, nonatomic) NSHashTable *displayedViewControllers; // @synthesize displayedViewControllers=_displayedViewControllers;
@property(nonatomic) BOOL viewControllerAppearAnimated; // @synthesize viewControllerAppearAnimated=_viewControllerAppearAnimated;
@property(nonatomic) int viewControllerAppearState; // @synthesize viewControllerAppearState=_viewControllerAppearState;
@property(retain, nonatomic) TSPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
- (void).cxx_destruct;
- (void)_updateDisplayedCells;
- (void)parentViewController:(id)arg1 viewDidDisappear:(BOOL)arg2;
- (void)parentViewController:(id)arg1 viewWillDisappear:(BOOL)arg2;
- (void)parentViewController:(id)arg1 viewDidAppear:(BOOL)arg2;
- (void)parentViewController:(id)arg1 viewWillAppear:(BOOL)arg2;
- (void)willEndDisplayingCell:(id)arg1;
- (void)willDisplayCell:(id)arg1 inParentViewController:(id)arg2;
- (void)configureCell:(id)arg1 withViewController:(id)arg2;
- (id)init;

@end

