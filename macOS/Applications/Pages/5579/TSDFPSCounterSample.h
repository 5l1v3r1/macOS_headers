//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDFPSCounterSample : NSObject
{
    double _time;
    double _duration;
}

+ (id)sampleWithTime:(double)arg1 duration:(double)arg2;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
- (id)initWithTime:(double)arg1 duration:(double)arg2;

@end

