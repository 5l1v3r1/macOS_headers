//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;

@protocol FCAssetKeyManagerType
- (void)eraseAllKeys;
- (void)clearUnauthorizedAssetKeys;
- (void)fetchWrappingKeyWithID:(NSData *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
- (NSData *)cachedWrappingKeyWithID:(NSData *)arg1;
@end

