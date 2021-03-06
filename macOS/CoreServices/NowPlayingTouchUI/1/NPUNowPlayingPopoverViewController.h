//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NPUNowPlayingAppControlsViewControllerDelegate-Protocol.h"

@class NSArray, NSMapTable, NSStackView, NSString;

@interface NPUNowPlayingPopoverViewController : NSViewController <NPUNowPlayingAppControlsViewControllerDelegate>
{
    NSMapTable *_nowPlayingControllersAndViewControllers;
    NSStackView *_stackView;
    long long _currentExpandCollapseAnimationNumber;
}

- (void).cxx_destruct;
- (void)_expandControlsViewIfNecessary;
- (void)_reloadAppsVisibility;
- (id)_makeAppControlsViewControllerForNowPlayingController:(id)arg1;
- (void)_expandAppControlsViewController:(id)arg1 animated:(BOOL)arg2;
- (id)_expandedNowPlayingAppControlsViewController;
- (id)_nowPlayingAppControlsViewControllers;
- (void)_nowPlayingControllerNowPlayingInfoDidChangeNotification:(id)arg1;
- (void)_nowPlayingControllerPlaybackStateDidChangeNotification:(id)arg1;
- (void)nowPlayingAppControlsViewControllerShouldPresentApp:(id)arg1;
- (void)nowPlayingAppControlsViewControllerShouldExpand:(id)arg1;
- (void)loadView;
- (void)removeNowPlayingController:(id)arg1;
- (void)addNowPlayingController:(id)arg1;
@property(readonly) NSArray *nowPlayingViewControllers;
@property(readonly) NSArray *nowPlayingControllers;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

