//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADOptInStatusClient : NSObject
{
}

+ (id)sharedInstance;
- (id)advertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (void)advertisingIdentifierChanged:(CDUnknownBlockType)arg1;
- (void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshOptInStatus;
- (void)setOptInStatus:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

