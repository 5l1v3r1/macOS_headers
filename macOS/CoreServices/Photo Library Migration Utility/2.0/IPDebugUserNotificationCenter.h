//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "NSUserNotificationCenterDelegate-Protocol.h"

@class NSString;

@interface IPDebugUserNotificationCenter : NSObject <NSUserNotificationCenterDelegate>
{
}

+ (void)showNotificationWithTitle:(id)arg1 subtitle:(id)arg2 informativeText:(id)arg3;
+ (void)initialize;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

