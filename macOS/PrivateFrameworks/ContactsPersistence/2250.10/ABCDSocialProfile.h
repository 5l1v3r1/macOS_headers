//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsPersistence/ABCDOwnedObject.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface ABCDSocialProfile : ABCDOwnedObject
{
}

+ (id)keyPathsForValuesAffectingDisplayValue;
+ (BOOL)isStandardServiceName:(id)arg1;
+ (id)privateKeysForPublicKeys;
+ (id)keyPathsForValuesAffectingCustomValues;
+ (id)keyPathsForValuesAffectingBundleIdentifiers;
+ (id)keyPathsForValuesAffectingUrl;
+ (id)builtInSocialProfileServices;
@property(copy) NSString *displayValue;
- (BOOL)abHasAddressBookRelatedContent;
- (id)dictionaryRepresentation;
- (void)applyDictionaryRepresentation:(id)arg1;
@property(copy) NSDictionary *customValues;
@property(copy) NSArray *bundleIdentifiers;
- (void)clearURL;
- (BOOL)_synthesizeURLFromUserIdentifier;
- (BOOL)_synthesizeURLFromUserName;
- (void)_synthesizeURL;
@property(copy) NSURL *url;
- (void)willSave;
- (void)_normalizeValues;
- (void)_makeSureItsLabeled;
- (void)_sanitizeServiceName;
- (void)_sanitizeUsername;

// Remaining properties
@property(copy) NSString *bundleIdentifiersString; // @dynamic bundleIdentifiersString;
@property(copy) NSData *customValuesData; // @dynamic customValuesData;
@property(copy) NSString *displayname; // @dynamic displayname;
@property(copy) NSString *serviceName; // @dynamic serviceName;
@property(copy) NSString *teamIdentifier; // @dynamic teamIdentifier;
@property(copy) NSString *urlString; // @dynamic urlString;
@property(copy) NSString *userIdentifier; // @dynamic userIdentifier;
@property(copy) NSString *username; // @dynamic username;

@end

