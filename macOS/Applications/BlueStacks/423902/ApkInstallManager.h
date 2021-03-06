//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSWindow;
@protocol OS_dispatch_queue;

@interface ApkInstallManager : NSObject
{
    NSWindow *_frontendWindow;
    BOOL _installing;
    BOOL _installingWarningShown;
    NSObject<OS_dispatch_queue> *_earlyDispatchQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_windowControllerSet;
}

+ (id)sharedInstallManager;
@property(retain) NSMutableSet *windowControllerSet; // @synthesize windowControllerSet=_windowControllerSet;
@property BOOL installingWarningShown; // @synthesize installingWarningShown=_installingWarningShown;
@property BOOL installing; // @synthesize installing=_installing;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) NSObject<OS_dispatch_queue> *earlyDispatchQueue; // @synthesize earlyDispatchQueue=_earlyDispatchQueue;
- (void).cxx_destruct;
- (void)installApkInBackground:(id)arg1 windowController:(id)arg2;
- (void)showInstallingWarning;
- (id)appNameForPath:(id)arg1;
- (void)enqueueApkAtPath:(id)arg1;
- (void)setProductInstalling;
- (void)start;
- (void)setFrontendWindow:(id)arg1;
- (id)init;

@end

