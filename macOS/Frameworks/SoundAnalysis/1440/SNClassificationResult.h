//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SNResult.h"
#import "SNTimeRangeProvidingWritable.h"

@class NSArray, NSString;

@interface SNClassificationResult : NSObject <SNTimeRangeProvidingWritable, SNResult>
{
    NSArray *_classifications;
    CDStruct_e83c9415 _timeRange;
}

+ (id)new;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(copy, nonatomic) NSArray *classifications; // @synthesize classifications=_classifications;
- (void).cxx_destruct;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

