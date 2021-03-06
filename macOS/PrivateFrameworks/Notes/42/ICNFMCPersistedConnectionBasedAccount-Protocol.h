//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICNFMCPersistedAccount.h"

@class ACAccount, NSData, NSString;

@protocol ICNFMCPersistedConnectionBasedAccount <ICNFMCPersistedAccount>
@property(readonly, nonatomic) ACAccount *acAccount;
@property(copy, nonatomic) NSString *authenticationSchemeName;
@property(copy, nonatomic) NSData *tlsCertificate;
@property(nonatomic) long long securityLayerType;
@property(nonatomic) long long port;
@property(copy, nonatomic) NSString *hostname;
@end

