//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>
{
    NSMutableArray *_samples;
}

+ (BOOL)supportsSecureCoding;
+ (id)makeMetric;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *samples; // @synthesize samples=_samples;
- (id)generateDataForSR:(id)arg1 dropSampleSize:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (BOOL)isEmpty;
- (unsigned long long)size;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (double)variance;
- (double)average;
- (void)addSample:(id)arg1;
- (id)init;

@end

