//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VCUserNotificationManager;

@protocol VCUserNotificationManagerDelegate <NSObject>
- (void)notificationManager:(VCUserNotificationManager *)arg1 didDismissTriggerWithIdentifier:(NSString *)arg2;
- (void)notificationManager:(VCUserNotificationManager *)arg1 receivedConfirmationToRunTriggerWithIdentifier:(NSString *)arg2;
@end

