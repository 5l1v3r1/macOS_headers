//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserNotificationCenterDelegate-Protocol.h"
#import "TRNotificationManager-Protocol.h"

@class NSString;
@protocol TRNotificationDelegate;

@interface TRUserNotificationManager : NSObject <TRNotificationManager, NSUserNotificationCenterDelegate>
{
    id <TRNotificationDelegate> delegate;
}

- (void).cxx_destruct;
- (void)pushNotificationWithTitle:(id)arg1 withText:(id)arg2 withLink:(id)arg3 withSound:(id)arg4;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)initializeNotifications:(id)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

