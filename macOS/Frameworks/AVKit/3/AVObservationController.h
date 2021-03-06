//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface AVObservationController : NSObject
{
    struct os_unfair_lock_s _unfairLock;
    NSMutableDictionary *_proxyObserversByTokens;
    NSMutableDictionary *_notificationObservers;
    NSMutableDictionary *_notificationCenters;
    id _owner;
}

- (void).cxx_destruct;
- (void)_stopAllObservation;
- (void)stopAllObservation;
- (void)stopObserving:(id)arg1;
- (void)startObservingNotificationForName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(BOOL)arg3 observationHandler:(CDUnknownBlockType)arg4;
- (id)startObserving:(id)arg1 keyPath:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;
- (id)startObserving:(id)arg1 keyPath:(id)arg2 includeInitialValue:(BOOL)arg3 observationHandler:(CDUnknownBlockType)arg4;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(BOOL)arg3 includeChanges:(BOOL)arg4 observationHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end

