//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FutureValue;

@interface PARPromise : NSObject
{
    FutureValue *_futureValue;
    // Error parsing type: AB, name: _fulfilled
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)futureValue;
- (void)fulfill:(id)arg1;
- (id)future;
- (id)init;

@end

