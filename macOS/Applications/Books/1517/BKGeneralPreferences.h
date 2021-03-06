//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BKPreferencesModule.h"

@class NSButton, NSMatrix, NSTextField;

@interface BKGeneralPreferences : BKPreferencesModule
{
    NSMatrix *_justificationMatrix;
    NSButton *_autoHyphenateButton;
    NSButton *_syncBookmarksButton;
    NSTextField *_syncBookmarksLabel;
    NSButton *_preventScreenDimmingButton;
    NSButton *_syncCollectionsButton;
}

@property __weak NSButton *syncCollectionsButton; // @synthesize syncCollectionsButton=_syncCollectionsButton;
- (void).cxx_destruct;
- (void)willBeDisplayed;
- (void)internetReachabilityChanged:(id)arg1;
- (void)accountChangedNotification:(id)arg1;
- (void)updateControls;
- (void)preventScreenDimmingAction:(id)arg1;
- (void)resetDialogWarningsAction:(id)arg1;
- (void)syncCollectionsAction:(id)arg1;
- (void)syncBookmarksAction:(id)arg1;
- (void)autoHyphenateAction:(id)arg1;
- (void)justificationAction:(id)arg1;
- (BOOL)isResizable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;

@end

