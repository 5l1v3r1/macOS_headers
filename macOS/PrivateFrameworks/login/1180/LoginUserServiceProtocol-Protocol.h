//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol LoginUserServiceProtocol
- (void)userHasAuthAuthority:(unsigned int)arg1 onNode:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)authAuthorityContainsShadowHash:(unsigned int)arg1 onNode:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)authAuthorityContainsDisabled:(unsigned int)arg1 onNode:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)authAuthorityContainsBasic:(unsigned int)arg1 onNode:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
@end

