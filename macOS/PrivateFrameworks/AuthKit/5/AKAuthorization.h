//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface AKAuthorization : NSObject <NSSecureCoding>
{
    id <AKCredentialRequestProtocol> _authorizedRequest;
    id <AKCredential> _credential;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) id <AKCredential> credential; // @synthesize credential=_credential;
@property(retain, nonatomic) id <AKCredentialRequestProtocol> authorizedRequest; // @synthesize authorizedRequest=_authorizedRequest;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

