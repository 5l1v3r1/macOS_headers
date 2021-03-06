//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBTEAMMembersDeactivateArg.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBTEAMUserSelectorArg, NSNumber, NSString;

@interface DBTEAMMembersRemoveArg : DBTEAMMembersDeactivateArg <DBSerializable, NSCopying>
{
    DBTEAMUserSelectorArg *_transferDestId;
    DBTEAMUserSelectorArg *_transferAdminId;
    NSNumber *_keepAccount;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *keepAccount; // @synthesize keepAccount=_keepAccount;
@property(readonly, nonatomic) DBTEAMUserSelectorArg *transferAdminId; // @synthesize transferAdminId=_transferAdminId;
@property(readonly, nonatomic) DBTEAMUserSelectorArg *transferDestId; // @synthesize transferDestId=_transferDestId;
- (void).cxx_destruct;
- (BOOL)isEqualToMembersRemoveArg:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 wipeData:(id)arg2 transferDestId:(id)arg3 transferAdminId:(id)arg4 keepAccount:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

