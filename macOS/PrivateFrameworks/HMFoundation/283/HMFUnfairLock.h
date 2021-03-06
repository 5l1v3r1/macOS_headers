//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFLocking.h"

@interface HMFUnfairLock : HMFObject <HMFLocking>
{
    unsigned long long _options;
}

+ (id)lockWithOptions:(unsigned long long)arg1;
+ (id)lock;
@property(readonly) unsigned long long options; // @synthesize options=_options;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;
- (void)assertNotOwner;
- (void)assertOwner;
- (void)unlock;
- (void)lock;

@end

