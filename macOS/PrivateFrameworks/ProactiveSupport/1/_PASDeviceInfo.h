//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASDeviceInfo : NSObject
{
    int _batterySaverModeToken;
}

+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isBetaBuild;
+ (BOOL)isInternalBuild;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isBatterySaverEnabled;
+ (BOOL)isLowEndHardware;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;

@end

