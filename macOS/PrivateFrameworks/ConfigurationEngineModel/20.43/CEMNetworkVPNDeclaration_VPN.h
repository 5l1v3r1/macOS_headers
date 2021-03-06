//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_VPN : CEMPayloadBase
{
    NSString *_payloadAuthName;
    NSString *_payloadAuthPassword;
    NSString *_payloadAuthenticationMethod;
    NSString *_payloadPayloadCertificateUUID;
    NSNumber *_payloadOnDemandEnabled;
    NSArray *_payloadOnDemandMatchDomainsAlways;
    NSArray *_payloadOnDemandMatchDomainsNever;
    NSArray *_payloadOnDemandMatchDomainsOnRetry;
    NSArray *_payloadOnDemandRules;
    NSNumber *_payloadDisconnectOnIdle;
    NSNumber *_payloadDisconnectOnIdleTimer;
    NSString *_payloadRemoteAddress;
}

+ (id)buildWithAuthName:(id)arg1 withAuthPassword:(id)arg2 withAuthenticationMethod:(id)arg3 withPayloadCertificateUUID:(id)arg4 withOnDemandEnabled:(id)arg5 withOnDemandMatchDomainsAlways:(id)arg6 withOnDemandMatchDomainsNever:(id)arg7 withOnDemandMatchDomainsOnRetry:(id)arg8 withOnDemandRules:(id)arg9 withDisconnectOnIdle:(id)arg10 withDisconnectOnIdleTimer:(id)arg11 withRemoteAddress:(id)arg12;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadRemoteAddress; // @synthesize payloadRemoteAddress=_payloadRemoteAddress;
@property(copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer; // @synthesize payloadDisconnectOnIdleTimer=_payloadDisconnectOnIdleTimer;
@property(copy, nonatomic) NSNumber *payloadDisconnectOnIdle; // @synthesize payloadDisconnectOnIdle=_payloadDisconnectOnIdle;
@property(copy, nonatomic) NSArray *payloadOnDemandRules; // @synthesize payloadOnDemandRules=_payloadOnDemandRules;
@property(copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry; // @synthesize payloadOnDemandMatchDomainsOnRetry=_payloadOnDemandMatchDomainsOnRetry;
@property(copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever; // @synthesize payloadOnDemandMatchDomainsNever=_payloadOnDemandMatchDomainsNever;
@property(copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways; // @synthesize payloadOnDemandMatchDomainsAlways=_payloadOnDemandMatchDomainsAlways;
@property(copy, nonatomic) NSNumber *payloadOnDemandEnabled; // @synthesize payloadOnDemandEnabled=_payloadOnDemandEnabled;
@property(copy, nonatomic) NSString *payloadPayloadCertificateUUID; // @synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID;
@property(copy, nonatomic) NSString *payloadAuthenticationMethod; // @synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod;
@property(copy, nonatomic) NSString *payloadAuthPassword; // @synthesize payloadAuthPassword=_payloadAuthPassword;
@property(copy, nonatomic) NSString *payloadAuthName; // @synthesize payloadAuthName=_payloadAuthName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

