//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUserNotificationCenter;

@interface CalUserNotificationCenterCache : NSObject
{
    NSUserNotificationCenter *_center;
    NSMutableArray *_scheduledNotifications;
    NSMutableArray *_deliveredNotifications;
    NSMutableArray *_displayedNotifications;
}

@property(retain, nonatomic) NSMutableArray *displayedNotifications; // @synthesize displayedNotifications=_displayedNotifications;
@property(retain, nonatomic) NSMutableArray *deliveredNotifications; // @synthesize deliveredNotifications=_deliveredNotifications;
@property(retain, nonatomic) NSMutableArray *scheduledNotifications; // @synthesize scheduledNotifications=_scheduledNotifications;
- (void).cxx_destruct;
- (void)removeCachedDeliveredNotificationWithID:(id)arg1;
- (void)reset;
- (id)initWithCenter:(id)arg1;

@end

