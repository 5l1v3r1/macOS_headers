//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ReportViewControllerDelegate-Protocol.h"

@class ButtonDescription, DirectoryItem, Item, SummaryViewController;

@protocol SummaryViewControllerDelegate <ReportViewControllerDelegate>
- (ButtonDescription *)summaryViewControllerWantsButtonDescription:(SummaryViewController *)arg1 buttonAction:(unsigned long long)arg2 outButtonStyles:(id *)arg3;
- (DirectoryItem *)summaryViewControllerWantsCurrentDirectory:(SummaryViewController *)arg1;
- (BOOL)summaryViewControllerWantsIsDragging:(SummaryViewController *)arg1;
- (Item *)summaryViewControllerWantsSelectedItem:(SummaryViewController *)arg1;
- (Item *)summaryViewControllerWantsCurrentTitleItem:(SummaryViewController *)arg1;
- (void)summaryViewController:(SummaryViewController *)arg1 userWillRequestContextMenuOnTitle:(BOOL)arg2;
@end

