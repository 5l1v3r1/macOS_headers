//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLAssetContainerList.h"
#import "PLMomentListData.h"

@class NSArray, NSDate, NSObject<NSCopying>, NSSet, NSString;

@interface PLMomentList : PLManagedObject <PLAssetContainerList, PLMomentListData>
{
}

+ (id)descriptionForGranularityLevel:(short)arg1;
+ (id)_findMomentListForGranularity:(short)arg1 sortIndex:(int)arg2 inManagedObjectContext:(id)arg3;
+ (id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2 inManagedObjectContext:(id)arg3;
+ (id)yearMomentListForYear:(long long)arg1 inManagedObjectContext:(id)arg2;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3 returnsObjectsAsFaults:(BOOL)arg4;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(BOOL)arg3;
+ (id)entityName;
- (id)_batchedMomentsPredicate;
@property(readonly, retain, nonatomic) NSArray *batchedMoments;
@property(readonly, retain, nonatomic) NSString *momentListDebugDescription;
- (void)_performMutation:(unsigned long long)arg1 withMoments:(id)arg2 forMomentListLevel:(short)arg3;
- (void)removeMoments:(id)arg1;
- (void)addMoments:(id)arg1;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
- (void)_updateStartAndEndDate;
- (void)removeMomentForYear:(id)arg1;
- (void)insertMomentForYear:(id)arg1;
- (void)removeMomentForMegaMoment:(id)arg1;
- (void)insertMomentForMegaMoment:(id)arg1;
- (void)_performMomentChangesForKey:(id)arg1 mutation:(unsigned long long)arg2 primitiveMoments:(id)arg3 changedMoments:(id)arg4;
- (void)_performMomentChangesForKey:(id)arg1 mutation:(unsigned long long)arg2 primitiveMoments:(id)arg3 changedMoment:(id)arg4;
- (void)didTurnIntoFault;
- (id)pl_debugDescription;
- (id)diagnosticInformation;
- (BOOL)supportsDiagnosticInformation;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSArray *sortedMoments;
@property(readonly, nonatomic) NSSet *moments;
- (id)_typeDescription;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
- (void)dealloc;
- (void)delete;
- (void)awakeFromInsert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *endDate; // @dynamic endDate;
@property(nonatomic) short granularityLevel; // @dynamic granularityLevel;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *momentsForMegaMoment; // @dynamic momentsForMegaMoment;
@property(retain, nonatomic) NSSet *momentsForYear; // @dynamic momentsForYear;
@property(retain, nonatomic) NSDate *representativeDate; // @dynamic representativeDate;
@property(nonatomic) int sortIndex; // @dynamic sortIndex;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

