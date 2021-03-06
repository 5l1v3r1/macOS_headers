//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSCache, NSMutableDictionary, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PXPhotoKitAssetsDataSource : PXAssetsDataSource
{
    NSMutableDictionary *_layoutItemByAssetCache;
    NSCache *_fetchedKeyAssetByAssetCollectionLocalIdentifierCache;
    PXPhotosDataSource *_photosDataSource;
    PXPhotosDataSourceChange *_change;
}

+ (id)dataSourceWithAsset:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXPhotosDataSourceChange *change; // @synthesize change=_change;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (id)selectionSnapshotForAsset:(id)arg1 assetCollection:(id)arg2;
- (id)inputForItem:(id)arg1;
- (void)prefetchSections:(id)arg1;
- (void)prefetchIndexPaths:(id)arg1 level:(unsigned long long)arg2;
- (void)prefetchIndexPaths:(id)arg1;
- (BOOL)areAllSectionsConsideredAccurate;
- (BOOL)couldObjectReferenceAppear:(id)arg1;
- (BOOL)containsMultipleItems;
- (BOOL)containsAnyItems;
- (id)startingAssetReference;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)arg2;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1;
- (id)lastAssetCollection;
- (id)firstAssetCollection;
- (id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetCollectionReferenceNearestToObjectReference:(id)arg1;
- (id)objectReferenceNearestToObjectReference:(id)arg1;
- (id)_fastKeyCuratedAssetForAssetCollection:(id)arg1;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1;
- (BOOL)hasCurationForAssetCollection:(id)arg1;
- (long long)numberOfCuratedItemsInAssetCollection:(id)arg1;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)arg1;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)keyAssetsForAssetCollection:(id)arg1;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (unsigned long long)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)description;
- (unsigned long long)identifier;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2;

@end

