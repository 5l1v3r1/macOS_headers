//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;

@interface IASUnifiedProgressConnection : NSObject
{
    NSXPCConnection *_connection;
    NSMutableArray *_callers;
}

+ (id)sharedConnection;
- (void)dealloc;
- (id)init;
- (void)registerCaller:(id)arg1 interruptionHandler:(CDUnknownBlockType)arg2;
- (void)releaseConnectionForCaller:(id)arg1;
- (BOOL)hasConnectionForCaller:(id)arg1;
- (id)connectionForCaller:(id)arg1;
- (void)_startReleaseTimer;
- (void)_fireReleaseTimer:(id)arg1;

@end

