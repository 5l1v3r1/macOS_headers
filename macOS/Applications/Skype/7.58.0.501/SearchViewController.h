//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "M5WindowContentAreaViewControlling-Protocol.h"

@class GroupBar, NSArrayController, NSProgressIndicator, NSString, NSTextField;
@protocol SearchControllerObserver;

@interface SearchViewController : NSViewController <M5WindowContentAreaViewControlling>
{
    BOOL _observingProgress;
    BOOL _observingGroupsArrayController;
    BOOL _observingSearchController;
    BOOL _observingUserDefaults;
    NSArrayController *_groupsArrayController;
    GroupBar *_resultsGroupBar;
    NSViewController<SearchControllerObserver> *_selectedResultsViewController;
    BOOL _showIndexingNotice;
    BOOL _showProgressIndicator;
    NSTextField *_indexingNoticeField;
    NSProgressIndicator *_progressIndicator;
}

@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSViewController<SearchControllerObserver> *selectedResultsViewController; // @synthesize selectedResultsViewController=_selectedResultsViewController;
@property(nonatomic) __weak NSTextField *indexingNoticeField; // @synthesize indexingNoticeField=_indexingNoticeField;
@property(nonatomic, getter=shouldShowProgressIndicator) BOOL showProgressIndicator; // @synthesize showProgressIndicator=_showProgressIndicator;
@property(nonatomic, getter=shouldShowIndexingNotice) BOOL showIndexingNotice; // @synthesize showIndexingNotice=_showIndexingNotice;
@property(nonatomic) __weak NSArrayController *groupsArrayController; // @synthesize groupsArrayController=_groupsArrayController;
@property(nonatomic) __weak GroupBar *resultsGroupBar; // @synthesize resultsGroupBar=_resultsGroupBar;
- (void).cxx_destruct;
- (id)closeContentViewMenuItemTitle;
- (BOOL)canUserCloseContentView;
- (BOOL)canCloseContentView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingUserDefaults;
- (void)_startObservingUserDefaults;
- (void)_stopObservingSearchController;
- (void)_startObservingSearchController;
- (void)_stopObservingProgress;
- (void)_startObservingProgress;
- (void)_stopObservingGroupsArrayController;
- (void)_startObservingGroupsArrayController;
- (void)_removeSearchControllerObservers;
- (void)_addSearchControllerObservers;
- (void)setRepresentedObject:(id)arg1;
- (void)_updateLayout;
- (void)_setUpGroupBar;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

