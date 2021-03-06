//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@protocol ICNFMCMailbox <NSCopying, NSObject>
@property(readonly) BOOL unseenCountIsKnown;
@property(readonly) unsigned long long unseenCount;
@property(readonly, copy, nonatomic) NSString *URLString;
@property(readonly, copy, nonatomic) NSString *extendedDisplayName;
@property(readonly, copy, nonatomic) NSString *displayNameWithoutPII;
@property(readonly, copy, nonatomic) NSString *displayName;
- (void)setUserInfoObject:(id)arg1 forKey:(NSString *)arg2;
- (id)userInfoObjectForKey:(NSString *)arg1;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(NSString *)arg2;
- (BOOL)userInfoBoolForKey:(NSString *)arg1;
@end

