//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVScrubber, AVTransportControlsView;

@protocol AVTransportControlsViewDelegate <NSObject>
- (void)transportControls:(AVTransportControlsView *)arg1 scrubberDidEndScrubbing:(AVScrubber *)arg2;
- (void)transportControls:(AVTransportControlsView *)arg1 scrubberDidScrub:(AVScrubber *)arg2;
- (void)transportControls:(AVTransportControlsView *)arg1 scrubberDidBeginScrubbing:(AVScrubber *)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(AVTransportControlsView *)arg1;
@end

