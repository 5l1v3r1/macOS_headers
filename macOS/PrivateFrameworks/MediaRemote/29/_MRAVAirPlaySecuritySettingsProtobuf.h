//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying>
{
    NSString *_password;
    int _securityType;
    struct {
        unsigned int securityType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSecurityType:(id)arg1;
- (id)securityTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSecurityType;
@property(nonatomic) int securityType; // @synthesize securityType=_securityType;
@property(readonly, nonatomic) BOOL hasPassword;

@end

