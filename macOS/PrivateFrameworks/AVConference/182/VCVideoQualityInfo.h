//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoQualityInfo : VCObject
{
    BOOL _videoIsExpected;
    BOOL _isVideoQualityDegraded;
    double _lastGoodVideoQualityTime;
    double _lastBadVideoQualityTime;
    double _lastVideoQualityDegradedSwitchTime;
    double _firstDegradedMeasure;
    double _videoDegradedThreshold;
}

@property(nonatomic) BOOL videoIsExpected; // @synthesize videoIsExpected=_videoIsExpected;
@property(readonly, nonatomic) BOOL isVideoQualityDegraded; // @synthesize isVideoQualityDegraded=_isVideoQualityDegraded;
- (BOOL)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 time:(double)arg3;
- (void)resetLastGoodVideoQualityTime:(double)arg1;
- (void)dealloc;
- (id)init;

@end

