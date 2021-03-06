//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDPIdentifier, NSString;
@protocol CKDProtocolTranslatorIdentityDelegate;

@interface CKDProtocolTranslator : NSObject
{
    BOOL _dontCreateValidatingParentReferences;
    NSString *_bundleIdentifier;
    long long _databaseScope;
    id <CKDProtocolTranslatorIdentityDelegate> _identityDelegate;
    NSString *_containerScopedUserID;
    NSString *_overriddenContainerScopedUserID;
}

+ (id)translatorIgnoringUserIDsWithDatabaseScope:(long long)arg1;
@property(copy, nonatomic) NSString *overriddenContainerScopedUserID; // @synthesize overriddenContainerScopedUserID=_overriddenContainerScopedUserID;
@property(copy, nonatomic) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(nonatomic) __weak id <CKDProtocolTranslatorIdentityDelegate> identityDelegate; // @synthesize identityDelegate=_identityDelegate;
@property(readonly, nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) BOOL dontCreateValidatingParentReferences; // @synthesize dontCreateValidatingParentReferences=_dontCreateValidatingParentReferences;
- (void).cxx_destruct;
- (id)ancestorFromPAncestor:(id)arg1 error:(id *)arg2;
- (id)identityFromPUser:(id)arg1;
- (id)pAliasWithUserRecordID:(id)arg1;
- (id)pAliasWithHashedStringID:(id)arg1 type:(int)arg2;
- (id)pAliasWithPhoneNumber:(id)arg1;
- (id)pAliasWithEmailAddress:(id)arg1;
- (id)pAliasWithIdentityLookupInfo:(id)arg1;
- (id)notificationFromPPushMessage:(id)arg1;
- (id)pParticipantFromShareParticipant:(id)arg1 forCache:(BOOL)arg2;
- (id)shareParticipantFromPParticipant:(id)arg1 error:(id *)arg2;
- (id)pShareFromShare:(id)arg1 forCache:(BOOL)arg2;
- (id)shareFromPShare:(id)arg1 error:(id *)arg2;
- (id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1;
- (unsigned long long)capabilitiesFromPZoneCapabilities:(id)arg1;
- (id)pRecordZoneFromRecordZone:(id)arg1;
- (id)recordZoneFromPRecordZone:(id)arg1 error:(id *)arg2;
- (id)pSubscriptionFromSubscription:(id)arg1 error:(id *)arg2;
- (id)subscriptionFromPSubscription:(id)arg1 error:(id *)arg2;
- (id)pQueryFromQuery:(id)arg1 error:(id *)arg2;
- (id)pPackageFromPackage:(id)arg1;
- (id)packageFromPPackage:(id)arg1 error:(id *)arg2;
- (id)pAssetFromAsset:(id)arg1;
- (id)assetFromPAsset:(id)arg1 error:(id *)arg2;
- (id)deltaPRecordFromRecord:(id)arg1 withAllFields:(BOOL)arg2 outDeletedMergeFields:(id *)arg3 outKeysToSend:(id *)arg4;
- (id)pRecordFromRecord:(id)arg1;
- (id)pRecordFromRecord:(id)arg1 forCache:(BOOL)arg2;
- (id)_pRecordFromRecordSansValues:(id)arg1 forCache:(BOOL)arg2;
- (BOOL)_valueTypeIsAnEncryptedBytesTypeForField:(id)arg1;
- (id)recordFromPRecord:(id)arg1 error:(id *)arg2;
- (id)pReferenceFromReference:(id)arg1 error:(id *)arg2;
- (id)referenceFromPReference:(id)arg1 error:(id *)arg2;
- (id)recordIDFromPShareIdentifier:(id)arg1 error:(id *)arg2;
- (id)pShareIdentifierFromRecordID:(id)arg1;
- (id)pContainerScopedRecordZoneIdentifierFromFromPRecordZoneIdentifier:(id)arg1;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id *)arg2;
- (id)pContainerScopedRecordIdentifierWithPRecordIdentifier:(id)arg1;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)recordIDFromPRecordIdentifier:(id)arg1 error:(id *)arg2;
- (id)userNameFromPIdentifier:(id)arg1 error:(id *)arg2;
- (id)pRecordIdentifierFromUserRecordName:(id)arg1;
- (id)pContainerScopedUserIdentifierFromPUserIdentifier:(id)arg1;
- (id)pUserIdentifierFromUserRecordName:(id)arg1;
- (id)pIdentifierFromUserRecordID:(id)arg1;
- (id)recordIDFromPUserName:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) CKDPIdentifier *pUserID;
- (BOOL)_isDefaultUserNameFromClient:(id)arg1;
- (BOOL)_isDefaultUserNameFromServer:(id)arg1;
- (id)initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2 databaseScope:(long long)arg3;
- (id)_initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2 databaseScope:(long long)arg3;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)encryptedObjectRepresentationFromFieldValue:(id)arg1;
- (id)fieldValueListOfType:(int)arg1 withList:(id)arg2;
- (id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)encryptedFieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)fieldValueFromObject:(id)arg1;
- (BOOL)objectIsAnEncryptedType:(id)arg1;
- (int)fieldValueTypeFromObject:(id)arg1;
- (int)fieldValueTypeFromEncryptedDataObject:(id)arg1 isInList:(BOOL)arg2;

@end

