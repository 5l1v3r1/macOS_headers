//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileProviderItemDecorating.h"
#import "NSFileProviderItem_Private.h"

@class FPItem, NSArray, NSData, NSDate, NSDictionary, NSError, NSFileProviderItemVersion, NSNumber, NSPersonNameComponents, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FPXEnumeratorAlternateContentsItem : NSObject <NSFileProviderItem_Private, NSFileProviderItemDecorating>
{
    FPItem *_documentItem;
    NSDictionary *_resourceValues;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *contentModificationDate;
@property(readonly, copy, nonatomic) NSNumber *documentSize;
- (id)cloudContainerIdentifier;
- (BOOL)isContainerPristine;
- (BOOL)isContainer;
@property(readonly, copy) NSString *fp_domainIdentifier;
@property(readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property(readonly, copy) NSString *sharingPermissions;
- (id)providerID;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(readonly, copy) NSString *containerDisplayName;
@property(readonly, copy) NSNumber *hasUnresolvedConflicts;
@property(readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property(readonly, nonatomic) NSData *versionIdentifier;
@property(readonly, nonatomic, getter=isTopLevelSharedItem) BOOL topLevelSharedItem;
@property(readonly, nonatomic) NSArray *decorations;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property(readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property(readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property(readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property(readonly, nonatomic, getter=isShared) BOOL shared;
@property(readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property(readonly, copy, nonatomic) NSError *downloadingError;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
@property(readonly, copy, nonatomic) NSError *uploadingError;
@property(readonly, nonatomic, getter=isUploading) BOOL uploading;
@property(readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property(readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property(readonly, copy, nonatomic) NSNumber *favoriteRank;
@property(readonly, copy, nonatomic) NSData *tagData;
@property(readonly, copy, nonatomic) NSDate *lastUsedDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, copy, nonatomic) NSNumber *childItemCount;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) unsigned long long capabilities;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, copy, nonatomic) NSString *filename;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier;
- (id)initWithOriginalDocumentItem:(id)arg1 alternateContentsURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync;
@property(readonly, nonatomic) NSDictionary *extendedAttributes;
@property(readonly, copy) NSString *fileSystemFilename;
@property(readonly, copy) NSURL *fileURL;
@property(readonly, nonatomic) id <NSFileProviderItemFlags> flags;
@property(readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property(readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property(readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property(readonly, copy) NSString *fp_cloudContainerIdentifier;
@property(readonly) BOOL fp_isContainer;
@property(readonly) BOOL fp_isContainerPristine;
@property(readonly, copy) NSString *fp_parentDomainIdentifier;
@property(readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isHidden) BOOL hidden;
@property(readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property(readonly, nonatomic) NSString *preformattedOwnerName;
@property(readonly, copy) NSString *providerIdentifier;
@property(readonly, copy, nonatomic) NSData *quarantineBlob;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *symlinkTargetPath;
@property(getter=isSyncRoot) BOOL syncRoot;

@end

