//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EFPubliclyDescribable.h"

@class EMContentRequestOptions, EMMailDropMetadata, NSArray, NSProgress, NSString;

@protocol EMContentItem <EFPubliclyDescribable>
@property(readonly, nonatomic) int exchangeEventUID;
@property(readonly, copy, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property(readonly, nonatomic) long long storageByteCount;
@property(readonly, nonatomic) long long dataTransferByteCount;
@property(readonly, copy, nonatomic) NSString *UTType;
@property(readonly, copy, nonatomic) NSString *contentID;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) BOOL isAvailableLocally;
@property(readonly, copy, nonatomic) NSArray *availableRepresentations;
- (NSProgress *)requestRepresentationWithOptions:(EMContentRequestOptions *)arg1 delegate:(id <EMContentItemRequestDelegate>)arg2 completionHandler:(void (^)(EMContentRepresentation *, NSError *))arg3;
- (NSProgress *)requestRepresentationWithOptions:(EMContentRequestOptions *)arg1 completionHandler:(void (^)(EMContentRepresentation *, NSError *))arg2;
@end

