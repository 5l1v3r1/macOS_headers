//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NCListNotificationViewController;

@interface _NCListBackgroundView : NSView
{
    _Bool _fixedConstraint;
    NCListNotificationViewController *_owner;
}

@property __weak NCListNotificationViewController *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateConstraints;

@end

