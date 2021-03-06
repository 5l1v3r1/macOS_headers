//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBTEAMAdminTier, DBTEAMTeamMemberProfile, NSString;

@interface DBTEAMTeamMemberInfo : NSObject <DBSerializable, NSCopying>
{
    DBTEAMTeamMemberProfile *_profile;
    DBTEAMAdminTier *_role;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBTEAMAdminTier *role; // @synthesize role=_role;
@property(readonly, nonatomic) DBTEAMTeamMemberProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (BOOL)isEqualToTeamMemberInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithProfile:(id)arg1 role:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

