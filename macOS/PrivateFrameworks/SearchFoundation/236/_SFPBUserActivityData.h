//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBUserActivityData.h"

@class NSArray, NSData, NSString;

@interface _SFPBUserActivityData : PBCodable <_SFPBUserActivityData, NSSecureCoding>
{
    NSString *_activityType;
    NSArray *_userInfos;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *userInfos; // @synthesize userInfos=_userInfos;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)userInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfoCount;
- (void)addUserInfo:(id)arg1;
- (void)clearUserInfo;
- (void)setUserInfo:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

