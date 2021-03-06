//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDateInterval;

@interface RTFetchFingerprintsOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSDateInterval *_dateInterval;
    unsigned long long _settledState;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long settledState; // @synthesize settledState=_settledState;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDateInterval:(id)arg1 settledState:(unsigned long long)arg2;
- (id)init;

@end

