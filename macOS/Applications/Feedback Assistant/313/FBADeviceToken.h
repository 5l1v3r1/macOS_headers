//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBADeviceToken : NSObject
{
}

+ (void)clearAllDeviceTokens;
+ (void)clearDeviceTokenForParticipantID:(id)arg1;
+ (void)setDeviceToken:(id)arg1 forParticipantID:(id)arg2;
+ (id)fetchDeviceTokenForParticipantID:(id)arg1;
+ (id)_queryForParticipantID:(id)arg1;
+ (id)_basicParameters;

@end

