//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, NSObject<OS_dispatch_semaphore>;

__attribute__((visibility("hidden")))
@interface AVMutableMovieTrackInternal : NSObject
{
    struct OpaqueFigMutableMovie *figMutableMovie;
    int trackID;
    struct OpaqueFigAssetTrack *figAssetTrack;
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
    AVWeakReference *figAssetTrackNotificationListenerWeakReference;
    struct OpaqueFigAssetTrack *figAssetTrackNotificationSource;
}

- (void).cxx_destruct;

@end

