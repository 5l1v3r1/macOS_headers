//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest
{
    NSDictionary *_properties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *receiptProperties; // @synthesize receiptProperties=_properties;
- (BOOL)_wantsVPP;
- (BOOL)_wantsRevoked;
- (BOOL)_wantsExpired;
- (void)_requestCompletedWithError:(id)arg1;
- (void)_handleReply:(id)arg1;
- (void)_start;
- (id)initWithReceiptProperties:(id)arg1;

@end

