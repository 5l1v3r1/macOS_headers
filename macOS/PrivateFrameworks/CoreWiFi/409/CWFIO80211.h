//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface CWFIO80211 : NSObject
{
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct IONotificationPort *_portRef;
    unsigned int _publishIO80211Interface;
    unsigned int _terminatedIO80211Interface;
    unsigned int _publishIO80211VirtualInterface;
    unsigned int _terminatedIO80211VirtualInterface;
    unsigned int _publishIO80211SkywalkInterface;
    unsigned int _terminatedIO80211SkywalkInterface;
    BOOL _isMonitoringEvents;
    CDUnknownBlockType _eventHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (id)IO80211SkywalkInterfaceInfo:(id)arg1 error:(id *)arg2;
- (id)IO80211InterfaceInfo:(id)arg1 error:(id *)arg2;
- (id)IO80211VirtualInterfaceInfo:(id)arg1 error:(id *)arg2;
- (id)IO80211ControllerInfo:(id)arg1 error:(id *)arg2;
- (id)__IO80211InfoConformingToService:(id)arg1 interfaceName:(id)arg2;
- (id)__IO80211InfoMatchingService:(id)arg1 interfaceName:(id)arg2;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (void)dealloc;
- (id)init;

@end

