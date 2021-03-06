//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSACommandGatheringVisitor.h"

#import "KNModelVisitor-Protocol.h"

@class NSString;

@interface KNReapplyVisitor : TSACommandGatheringVisitor <KNModelVisitor>
{
}

- (void)p_propagateChangeToInfo:(id)arg1 forProperty:(int)arg2 prototypeInfo:(id)arg3 propagationBlock:(CDUnknownBlockType)arg4;
- (id)masterPlaceholderForInstanceInfo:(id)arg1;
- (void)visitKNSlideNumberPlaceholderInfo:(id)arg1;
- (void)visitKNBodyPlaceholderInfo:(id)arg1;
- (void)visitKNTitlePlaceholderInfo:(id)arg1;
- (void)visitKNMasterSlide:(id)arg1;
- (void)visitKNSlide:(id)arg1;
- (void)visitKNPlaceholderInfo:(id)arg1;
- (void)visitTSWPStorage:(id)arg1;
- (void)visitTSDMovieInfo:(id)arg1;
- (void)visitTSDImageInfo:(id)arg1;
- (void)visitTSWPShapeInfo:(id)arg1;
- (void)visitTSDShapeInfo:(id)arg1;
- (void)visitTSDStyledInfo:(id)arg1;
- (void)visitTSDDrawableInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

