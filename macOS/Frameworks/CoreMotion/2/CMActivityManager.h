//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CMActivityManager : NSObject
{
    id _internal;
}

- (long long)simulateMotionState:(BOOL)arg1 withState:(long long)arg2;
- (long long)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2;
@property(readonly, nonatomic, getter=isActivityAvailable) BOOL activityAvailable;
@property(copy) CDUnknownBlockType activityHandler;
- (void)dealloc;
- (id)init;

@end

