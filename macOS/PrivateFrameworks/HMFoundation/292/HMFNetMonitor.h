//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFLogging.h"

@class HMFNetAddress, NSString;

@interface HMFNetMonitor : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;
    BOOL _reachable;
    id <HMFNetMonitorDelegate> _delegate;
    HMFNetAddress *_netAddress;
}

+ (id)logCategory;
@property(readonly, copy, nonatomic) HMFNetAddress *netAddress; // @synthesize netAddress=_netAddress;
@property __weak id <HMFNetMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly) unsigned long long reachabilityPath;
@property(getter=isReachable) BOOL reachable;
- (id)initWithNetService:(id)arg1;
- (id)initWithNetAddress:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

