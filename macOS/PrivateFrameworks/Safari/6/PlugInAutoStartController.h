//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WBSCoalescedAsynchronousWriter;

__attribute__((visibility("hidden")))
@interface PlugInAutoStartController : NSObject
{
    WBSCoalescedAsynchronousWriter *_savePlugInAutoStartOriginHashesToDiskWriter;
}

+ (void)removeAllOriginsAddedAfterDate:(id)arg1;
+ (void)removeAllOrigins;
+ (id)sharedPlugInAutoStartController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)initializeContext:(struct Context *)arg1;
- (void)removeItems:(id)arg1;
- (id)plugInAutoStartDictionary;
- (void)savePendingChangesBeforeTermination;
- (void)plugInAutoStartOriginHashesChanged;

@end

