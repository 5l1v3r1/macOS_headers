//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLEvent.h"

@class MTLSharedEventHandle, MTLSharedEventListener;

@protocol MTLSharedEvent <MTLEvent>
@property unsigned long long signaledValue;
- (MTLSharedEventHandle *)newSharedEventHandle;
- (void)notifyListener:(MTLSharedEventListener *)arg1 atValue:(unsigned long long)arg2 block:(void (^)(id <MTLSharedEvent>, unsigned long long))arg3;
@end

