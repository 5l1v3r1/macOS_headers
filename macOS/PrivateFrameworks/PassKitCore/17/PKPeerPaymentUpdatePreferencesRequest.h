//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest
{
    PKPeerPaymentPreferences *_peerPaymentPreferences;
}

@property(retain, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences; // @synthesize peerPaymentPreferences=_peerPaymentPreferences;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPeerPaymentPreferences:(id)arg1;

@end

