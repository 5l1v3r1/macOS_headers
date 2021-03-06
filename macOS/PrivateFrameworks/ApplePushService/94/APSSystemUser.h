//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface APSSystemUser : NSObject
{
    NSString *_userID;
    NSString *_status;
    BOOL _daemonUser;
}

+ (id)allConsoleUserIDs;
+ (id)systemUserWithUID:(unsigned int)arg1;
+ (id)systemUserWithUserID:(id)arg1;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)debugDescription;
@property(retain, nonatomic) NSString *status;
- (BOOL)isDaemonUser;
- (BOOL)isLoggedOut;
- (BOOL)isLoggedIn;
- (void)updateStatus;
@property(readonly, nonatomic) unsigned int uid;
- (id)initWithUserID:(id)arg1;

@end

