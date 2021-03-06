//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PUTiledLayoutGenerator.h"

@interface PUVerticalTiledLayoutGenerator : PUTiledLayoutGenerator
{
    struct CGPoint _origin;
    CDStruct_f2186b98 _enqueuedCaptionTileInfo;
    BOOL _shouldDisplayCaptionsBelowBatches;
    double _referenceWidth;
}

@property(nonatomic) BOOL shouldDisplayCaptionsBelowBatches; // @synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches;
@property(nonatomic) double referenceWidth; // @synthesize referenceWidth=_referenceWidth;
- (void)_willAddRowWithFirstTileInfo:(CDStruct_f2186b98)arg1;
- (BOOL)_addSpecialSequenceBlock:(CDStruct_f2186b98 *)arg1;
- (BOOL)_addRowWithTiles:(CDStruct_f2186b98 *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (void)_enumerateRowFramesWithContiguousTiles:(CDStruct_f2186b98 *)arg1 count:(long long)arg2 useMagneticGuidelines:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (BOOL)_addRowWithContiguousTiles:(CDStruct_f2186b98 *)arg1 count:(long long)arg2;
- (BOOL)_dequeueCaption;
- (BOOL)_hasEnqueuedCaption;
- (void)_enqueueCaptionWithTileInfo:(CDStruct_f2186b98)arg1;
- (BOOL)_isAtEndOfRow;
- (BOOL)_hasLeftSuboptimalRow;
- (BOOL)_scanTripletWithRearrangment:(CDStruct_f2186b98 *)arg1;
- (BOOL)_scanTripletWithLargeLead:(CDStruct_f2186b98 *)arg1;
- (BOOL)_scanNonPanoramaSequence:(CDStruct_f2186b98 *)arg1 count:(long long)arg2;
- (BOOL)_scanSpecialSequenceRow:(CDStruct_f2186b98 *)arg1 count:(long long *)arg2;
- (BOOL)_scanSpecialSequenceBlock:(CDStruct_f2186b98 *)arg1;
- (BOOL)_scanTileTriplet:(CDStruct_f2186b98 *)arg1;
- (BOOL)_scanTilePair:(CDStruct_f2186b98 *)arg1;
- (BOOL)_scanTileRequiringNewRow:(CDStruct_f2186b98 *)arg1;
- (BOOL)_scanTileRequiringFullWidth:(CDStruct_f2186b98 *)arg1;
- (BOOL)_parseSpecialSubsequenceWithRowRequired:(BOOL)arg1 rowParsed:(char *)arg2;
- (BOOL)_parseSpecialSequence;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseTileRequiringFullWidth;
- (BOOL)_parseTileTriplet;
- (BOOL)_parseTilePair;
- (BOOL)_parseSingleTile;
- (double)referenceDistanceForMagneticGuidelines;
- (void)didParseTiles;
- (BOOL)parseNextTiles;
- (void)willParseTiles;

@end

