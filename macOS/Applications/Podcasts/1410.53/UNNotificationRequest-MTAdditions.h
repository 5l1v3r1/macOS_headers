//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/UNNotificationRequest.h>

@interface UNNotificationRequest (MTAdditions)
+ (void)mt_accessSchedulingOptionsByRequestIdentifier:(CDUnknownBlockType)arg1;
+ (BOOL)mt_isPlayerItemRequestIdentifier:(id)arg1;
+ (id)mt_uniqueRequestIdentifierForPlayerItem:(id)arg1;
+ (BOOL)mt_isUuidRequestIdentifier:(id)arg1 matchForPodcastUuid:(id)arg2;
+ (id)mt_uniqueRequestIdentifierForPodcastUuid:(id)arg1;
@property(nonatomic, setter=mt_setSchedulingOptions:) unsigned long long mt_schedulingOptions;
@end

