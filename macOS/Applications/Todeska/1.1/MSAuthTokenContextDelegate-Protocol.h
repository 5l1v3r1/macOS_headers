//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAuthTokenContext, NSString;

@protocol MSAuthTokenContextDelegate <NSObject>

@optional
- (void)authTokenContext:(MSAuthTokenContext *)arg1 refreshAuthTokenForAccountId:(NSString *)arg2;
- (void)authTokenContext:(MSAuthTokenContext *)arg1 didUpdateAccountId:(NSString *)arg2;
- (void)authTokenContext:(MSAuthTokenContext *)arg1 didUpdateAuthToken:(NSString *)arg2;
@end

