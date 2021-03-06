//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDateInterval, NSNumber;

@interface SPCommandKeysCriteria : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_sequence;
    NSDateInterval *_dateInterval;
    NSArray *_indices;
    NSNumber *_index;
    NSNumber *_hint;
}

+ (id)driftModeledCriteria;
+ (id)matchSecondaryIndex:(unsigned long long)arg1 hint:(unsigned char)arg2;
+ (id)matchPrimaryIndices:(id)arg1;
+ (id)matchDateInterval:(id)arg1;
+ (id)matchSequence:(unsigned char)arg1 index:(unsigned int)arg2 hint:(unsigned char)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *hint; // @synthesize hint=_hint;
@property(copy, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(copy, nonatomic) NSArray *indices; // @synthesize indices=_indices;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(copy, nonatomic) NSNumber *sequence; // @synthesize sequence=_sequence;
- (id)initWithDateInterval:(id)arg1 sequence:(id)arg2 indices:(id)arg3 index:(id)arg4 hint:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

