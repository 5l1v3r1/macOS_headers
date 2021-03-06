//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXCollection_deprecated-Protocol.h"
#import "IPXCollectionsViewContentObject-Protocol.h"

@class NSString, RDAlbum;

@interface IPXPrintProject : NSObject <IPXCollection_deprecated, IPXCollectionsViewContentObject>
{
    RDAlbum *_album;
    double _thumbnailScale;
    double _aspectRatio;
}

+ (id)urlForContentObject:(id)arg1;
+ (void)setName:(id)arg1 forAlbum:(id)arg2;
+ (id)productTypeStringForAlbum:(id)arg1;
+ (double)aspectRatioForAlbum:(id)arg1;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly) RDAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (struct NSEdgeInsets)selectionNormalizedEdgeInsets;
- (id)contentObjectThumbnailImageProvidingOperationForResolution:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (struct PFIntSize_st)contentObjectThumbnailSize;
- (id)contentObjectCreationDate;
- (id)contentObjectDisplayName;
- (unsigned long long)contentObjectType;
- (BOOL)isEqual:(id)arg1;
- (void)deleteProject;
- (void)duplicate;
- (id)collectionContentAllowingCreation:(BOOL)arg1;
- (id)collectionContent;
- (id)collectionPosterImageWithSize:(struct CGSize)arg1;
- (id)collectionCreationDate;
@property(readonly) NSString *collectionName;
@property(readonly) NSString *collectionId;
@property(copy, nonatomic) NSString *name;
@property(readonly) NSString *productTypeString;
@property(readonly) long long projectType;
@property(readonly) double thumbnailScale; // @synthesize thumbnailScale=_thumbnailScale;
@property(readonly) NSString *projectUuid;
- (id)projectBundle;
- (id)project;
- (id)initWithRKAlbum:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long collectionContentCount;
@property(retain) id collectionPosterItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

