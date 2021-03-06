//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSUUID, WPAdvertisingRequest;

@protocol WPDObjectDiscoveryAdvertiser <NSObject>
- (void)removeAdvertisingRequestsForClient:(NSUUID *)arg1;
- (NSError *)removeAdvertisingRequest:(WPAdvertisingRequest *)arg1 forClient:(NSUUID *)arg2;
- (NSError *)addAdvertisingRequest:(WPAdvertisingRequest *)arg1 forClient:(NSUUID *)arg2;
@end

