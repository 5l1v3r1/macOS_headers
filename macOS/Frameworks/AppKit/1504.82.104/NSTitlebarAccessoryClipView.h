//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

@class NSTitlebarAccessoryViewController;

__attribute__((visibility("hidden")))
@interface NSTitlebarAccessoryClipView : NSClipView
{
    NSTitlebarAccessoryViewController *_accessoryViewController;
}

+ (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
@property NSTitlebarAccessoryViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
- (BOOL)_isKeyLoopGroup;
- (BOOL)_shouldFixupChildAutoresizingMaskOnResizeSubviewsOverride;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;

@end

