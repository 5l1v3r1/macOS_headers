//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"

@class TSTCellStyle, TSTFormulaPredicate, TSWPParagraphStyle;

@interface TSTConditionalStyleRule : NSObject <GSSPAutoEncodable, NSCopying>
{
    TSTFormulaPredicate *mPredicate;
    TSWPParagraphStyle *mTextStyle;
    TSTCellStyle *mCellStyle;
    int mPredicateType;
}

+ (id)conditionalStyleRuleWithRule:(id)arg1;
@property(readonly, nonatomic) int predicateType; // @synthesize predicateType=mPredicateType;
- (BOOL)containsUidReferences;
- (void)setHostCell:(const UUIDData_5fbc143e *)arg1 hostColumnUID:(const UUIDData_5fbc143e *)arg2 hostRowUID:(const UUIDData_5fbc143e *)arg3;
- (id)copyByClearingUids:(id)arg1 containingTableID:(struct __CFUUID *)arg2;
- (id)copyByRepairingBadReferences:(id)arg1;
- (id)copyToGeometricFormWithRewriteContext:(id)arg1;
- (id)copyToUidFormForTableModel:(id)arg1 inCellCoordinate:(struct TSUCellCoord)arg2 preserveHostCell:(BOOL)arg3;
- (id)copyByUpdatingHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByUpgradingToLinkedRefAtHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByRemappingOwnerUIDsWithMap:(const UUIDMap_8a451d2c *)arg1 calcEngine:(id)arg2 error:(char *)arg3;
- (id)description;
- (BOOL)evaluateFormulaAtCellID:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 withFormulaTableID:(struct __CFUUID *)arg3;
@property(readonly, nonatomic) struct TSCEFormula *formula;
@property(readonly, copy, nonatomic) TSTFormulaPredicate *predicate;
@property(readonly, copy, nonatomic) TSWPParagraphStyle *textStyle;
@property(readonly, copy, nonatomic) TSTCellStyle *cellStyle;
- (BOOL)isEqualForInspector:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 cellStyle:(id)arg2 textStyle:(id)arg3;
- (void)populateGSSPConditionalStyleRule:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

