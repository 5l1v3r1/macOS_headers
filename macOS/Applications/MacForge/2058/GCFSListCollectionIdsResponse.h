//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GCFSListCollectionIdsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *collectionIdsArray; // @dynamic collectionIdsArray;
@property(readonly, nonatomic) unsigned long long collectionIdsArray_Count; // @dynamic collectionIdsArray_Count;
@property(copy, nonatomic) NSString *nextPageToken; // @dynamic nextPageToken;

@end

