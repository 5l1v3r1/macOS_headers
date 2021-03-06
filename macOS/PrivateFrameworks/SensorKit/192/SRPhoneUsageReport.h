//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SRSampleExporting.h"
#import "SRSampling.h"

@class NSString;

@interface SRPhoneUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>
{
    double _duration;
    long long _totalOutgoingCalls;
    long long _totalIncomingCalls;
    long long _totalUniqueContacts;
    double _totalPhoneCallDuration;
    double _startTime;
}

+ (id)usageReportWithInterval:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property double startTime; // @synthesize startTime=_startTime;
@property double totalPhoneCallDuration; // @synthesize totalPhoneCallDuration=_totalPhoneCallDuration;
@property long long totalUniqueContacts; // @synthesize totalUniqueContacts=_totalUniqueContacts;
@property long long totalIncomingCalls; // @synthesize totalIncomingCalls=_totalIncomingCalls;
@property long long totalOutgoingCalls; // @synthesize totalOutgoingCalls=_totalOutgoingCalls;
@property double duration; // @synthesize duration=_duration;
- (id)sr_dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

