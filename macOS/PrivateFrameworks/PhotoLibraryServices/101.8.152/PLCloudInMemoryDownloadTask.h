//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLResourceTransferTask, NSArray, NSMapTable, NSString;

@interface PLCloudInMemoryDownloadTask : NSObject
{
    NSMapTable *_taskIDsToCompletionHandlers;
    BOOL _completed;
    NSString *_resourceID;
    CPLResourceTransferTask *_transferTask;
}

@property(readonly, nonatomic, getter=isCompleted) BOOL completed; // @synthesize completed=_completed;
@property(retain, nonatomic) CPLResourceTransferTask *transferTask; // @synthesize transferTask=_transferTask;
@property(readonly, copy, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
- (void).cxx_destruct;
- (void)reportCompletionWithData:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) __weak NSArray *taskIDs;
- (void)cancelClientWithTaskID:(id)arg1;
- (void)addClientWithTaskID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithResourceID:(id)arg1 taskID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

