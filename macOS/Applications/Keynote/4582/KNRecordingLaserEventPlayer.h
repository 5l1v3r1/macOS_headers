//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNRecordingEventPlayer.h"

@class NSObject;
@protocol KNLaserOverlayController;

@interface KNRecordingLaserEventPlayer : KNRecordingEventPlayer
{
    NSObject<KNLaserOverlayController> *mLaserOverlayController;
}

- (void)cancelAllPlayback;
- (void)playEvent:(id)arg1;
- (void)dealloc;
- (id)initWithTimebase:(id)arg1 eventTrack:(id)arg2;
- (id)initWithTimebase:(id)arg1 eventTrack:(id)arg2 laserOverlayController:(id)arg3;

@end

