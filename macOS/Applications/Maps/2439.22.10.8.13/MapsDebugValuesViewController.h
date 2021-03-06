//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MapsDebugViewController-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSString, NSTableView;
@protocol MapsDebugViewControllerDelegate, MapsDebugViewControllerNavigationDelegate;

__attribute__((visibility("hidden")))
@interface MapsDebugValuesViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, MapsDebugViewController>
{
    NSTableView *_tableView;
    NSMutableArray *_sections;
    NSArray *_rows;
    NSMapTable *_rowsToCellViews;
    BOOL _isMakingViewsToFitOnly;
    id <MapsDebugViewControllerDelegate> _delegate;
    id <MapsDebugViewControllerNavigationDelegate> _navigationDelegate;
    NSString *_navigationDestinationTitle;
    CDUnknownBlockType _prepareContentBlock;
}

+ (void)_endBuiltInSheet:(id)arg1;
+ (id)navigationDestinationTitle;
@property(copy, nonatomic) CDUnknownBlockType prepareContentBlock; // @synthesize prepareContentBlock=_prepareContentBlock;
@property(copy, nonatomic) NSString *navigationDestinationTitle; // @synthesize navigationDestinationTitle=_navigationDestinationTitle;
@property(nonatomic) __weak id <MapsDebugViewControllerNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <MapsDebugViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rebuildSections;
- (void)reloadData;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)willNavigateToSubsequentController:(id)arg1;
- (void)logPathButtonDidSendAction:(id)arg1;
- (id)logPathButtonWithTitle:(id)arg1 path:(id)arg2;
- (void)segueToViewController:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)addSection:(id)arg1;
- (void)addSectionWithTitle:(id)arg1 content:(CDUnknownBlockType)arg2;
- (id)_rows;
- (void)loadContentNowIfNeeded;
- (id)_sections;
- (void)prepareContent;
- (void)loadView;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

