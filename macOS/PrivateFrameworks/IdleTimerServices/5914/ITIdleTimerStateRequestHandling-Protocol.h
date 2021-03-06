//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITIdleTimerConfiguration, NSString;

@protocol ITIdleTimerStateRequestHandling <NSObject>
- (void)removeIdleTimerConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2;
- (void)addIdleTimerConfiguration:(ITIdleTimerConfiguration *)arg1 forReason:(NSString *)arg2;
- (BOOL)isIdleTimerServiceAvailable;
@end

