//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKHeaderWithUnderlineView.h>

@class GKBubbleSegmentedControl;

@interface GKBubbleSegmentedHeaderView : GKHeaderWithUnderlineView
{
    GKBubbleSegmentedControl *_segmentedControl;
}

@property(retain, nonatomic) GKBubbleSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (BOOL)drawsUnderline;
- (void)dealloc;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

