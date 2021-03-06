//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class MTEpisode, MTPlaylist, MTPodcast, NSString;

@interface MTSyncInfo : NSManagedObject
{
}

+ (id)_insertSyncInfoForEntity:(id)arg1 type:(int)arg2 context:(id)arg3;
+ (id)insertIntoLibraryForPodcast:(id)arg1 context:(id)arg2;
+ (id)insertIntoLibraryForPlaylist:(id)arg1 context:(id)arg2;
+ (id)insertIntoLibraryForEpisode:(id)arg1 context:(id)arg2;
+ (id)predicateForIsCurrentlySyncable:(BOOL)arg1;
+ (id)predicateForHasNoInverseRelation;

// Remaining properties
@property(nonatomic) long long artworkUpdateRevision; // @dynamic artworkUpdateRevision;
@property(nonatomic) int entityType; // @dynamic entityType;
@property(nonatomic) __weak MTEpisode *episode; // @dynamic episode;
@property(nonatomic) long long insertionRevision; // @dynamic insertionRevision;
@property(nonatomic) __weak MTPlaylist *playlist; // @dynamic playlist;
@property(nonatomic) __weak MTPodcast *podcast; // @dynamic podcast;
@property(nonatomic) long long syncID; // @dynamic syncID;
@property(nonatomic) int syncability; // @dynamic syncability;
@property(nonatomic) long long updateRevision; // @dynamic updateRevision;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

