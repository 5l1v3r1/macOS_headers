//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface FCFeedTransformationOnlySurfacedBy : NSObject <FCFeedTransforming>
{
    NSSet *_tagIDs;
    NSDictionary *_feedContextByFeedID;
}

+ (id)transformationWithTagIDs:(id)arg1 feedContextByFeedID:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *feedContextByFeedID; // @synthesize feedContextByFeedID=_feedContextByFeedID;
@property(copy, nonatomic) NSSet *tagIDs; // @synthesize tagIDs=_tagIDs;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

