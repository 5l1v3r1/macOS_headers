//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"

@class ICPAgentServiceManager, NSString;

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    ICPAgentServiceManager *_serviceManager;
}

@property(retain) ICPAgentServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
- (void).cxx_destruct;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)setupSleepWakeNotifications;
- (void)receiveWakeNotification:(id)arg1;
- (void)receiveSleepNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

