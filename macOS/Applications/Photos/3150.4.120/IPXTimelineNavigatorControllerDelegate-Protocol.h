//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXTimelineNavigatorController;

@protocol IPXTimelineNavigatorControllerDelegate <NSObject>

@optional
- (void)timelineNavigatorController:(IPXTimelineNavigatorController *)arg1 itemDoubleClickedAtSectionContainingItemsInRange:(struct _NSRange)arg2;
- (void)timelineNavigatorController:(IPXTimelineNavigatorController *)arg1 longClickEndedAtSectionContainingItemsInRange:(struct _NSRange)arg2;
- (void)timelineNavigatorController:(IPXTimelineNavigatorController *)arg1 longClickStartedAtSectionContainingItemsInRange:(struct _NSRange)arg2;
- (void)timelineNavigatorController:(IPXTimelineNavigatorController *)arg1 sectionSelectedContainingItemsInRange:(struct _NSRange)arg2;
- (void)timelineNavigatorController:(IPXTimelineNavigatorController *)arg1 itemDoubleClickedAtIndex:(unsigned long long)arg2 percentWithin:(double)arg3;
- (void)timelineNavigatorController:(IPXTimelineNavigatorController *)arg1 longClickEndedAtIndex:(unsigned long long)arg2 percentWithin:(double)arg3;
- (void)timelineNavigatorController:(IPXTimelineNavigatorController *)arg1 longClickStartedAtIndex:(unsigned long long)arg2 percentWithin:(double)arg3;
- (void)timelineNavigatorController:(IPXTimelineNavigatorController *)arg1 itemSelectedAtIndex:(unsigned long long)arg2 percentWithin:(double)arg3;
@end

