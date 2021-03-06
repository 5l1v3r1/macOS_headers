//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICCollaborationController : NSObject
{
}

+ (void)acceptShareWithMetadata:(id)arg1 andFetchObjectWithCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)acceptShareWithMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)didStopSharing:(id)arg1;
+ (id)objectForShare:(id)arg1 context:(id)arg2;
+ (void)saveServerShare:(id)arg1;
+ (void)didSaveShare:(id)arg1;
+ (void)fetchShareIfNecessaryForObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)saveShare:(id)arg1 withRootRecord:(id)arg2 object:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)saveShare:(id)arg1 forObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)prepareShare:(id)arg1 forObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)existingShareForObject:(id)arg1;
+ (id)shareThumbnailData;
+ (void)populateShare:(id)arg1 withObject:(id)arg2;
+ (id)newShareForObject:(id)arg1;
+ (id)rootRecordForObject:(id)arg1;
+ (void)registerShareForObject:(id)arg1 itemProvider:(id)arg2;

@end

