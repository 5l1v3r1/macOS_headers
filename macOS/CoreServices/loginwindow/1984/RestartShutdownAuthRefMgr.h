//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RestartShutdownAuthRefMgr : NSObject
{
    struct AuthorizationOpaqueRef *mAuthRef;
    BOOL mHideSwitchUser;
    long long mNumberOfConsoleUsers;
    long long mNumberOfFileSharingConnections;
    long long mMinimunNumberOfUsers;
}

+ (id)sharedRestartShutdownAuthRefMgr;
- (void)askForRestartRights:(long long)arg1 FileSharingConnectionCount:(long long)arg2 atLoginwindow:(BOOL)arg3 hideSwitchUser:(BOOL)arg4;
- (void)askForShutDownRights:(long long)arg1 FileSharingConnectionCount:(long long)arg2 atLoginwindow:(BOOL)arg3 hideSwitchUser:(BOOL)arg4;
- (void)askForRestartAuthOnThread:(id)arg1;
- (void)askForShutdownAuthOnThread:(id)arg1;
- (int)alertUserOfConectedFileSharingUsers:(long long)arg1;
- (int)askForShutDownRights;
- (int)askForRestartRights;
- (void)dealloc;
- (id)init;

@end

