//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSString;

@protocol ABPrimitiveUserDefaults <NSObject>
- (void)setupAutosync;
- (BOOL)synchronize;
- (void)primitiveRemoveObjectForKey:(NSString *)arg1;
- (BOOL)primitiveBoolValueForKey:(NSString *)arg1 keyExists:(char *)arg2;
- (long long)primitiveIntegerValueForKey:(NSString *)arg1 keyExists:(char *)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(NSString *)arg2;
- (id)primitiveObjectForKey:(NSString *)arg1;
@end

