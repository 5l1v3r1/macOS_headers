//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKEventMetric, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BRCEventMetric : NSObject
{
    BOOL _isCKMetric;
    NSString *_eventName;
    NSDate *_startTime;
    NSDate *_endTime;
    CKEventMetric *_associatedCKEventMetricIfAvailable;
}

@property(readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable; // @synthesize associatedCKEventMetricIfAvailable=_associatedCKEventMetricIfAvailable;
@property(nonatomic) BOOL isCKMetric; // @synthesize isCKMetric=_isCKMetric;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (void)associateWithCompletedOperation:(id)arg1;
- (id)additionalPayload;
- (id)subDescription;
- (id)description;
- (id)initWithEventName:(id)arg1;

@end

