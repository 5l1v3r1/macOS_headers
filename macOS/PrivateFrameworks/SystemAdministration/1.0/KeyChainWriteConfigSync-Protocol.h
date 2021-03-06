//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSData, NSString, NSURL;

@protocol KeyChainWriteConfigSync

@optional
- (oneway void)storeSystemKeychainPassword:(NSString *)arg1 account:(NSString *)arg2 service:(NSString *)arg3 authorization:(NSData *)arg4 result:(void (^)(BOOL))arg5;
- (oneway void)storeKeyInSystemKeychain:(NSString *)arg1 forUser:(NSString *)arg2 serverURL:(NSURL *)arg3 description:(NSString *)arg4 authorization:(NSData *)arg5 result:(void (^)(int))arg6;
@end

