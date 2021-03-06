//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPHeaderRep.h"

@class TPPaginatedPageInfo;

@interface TPHeaderRep : TSWPHeaderRep
{
    BOOL _hideKnobs;
}

@property(nonatomic) BOOL hideKnobs; // @synthesize hideKnobs=_hideKnobs;
- (BOOL)p_isMiddleFooterRep;
- (BOOL)p_isMiddleHeaderRep;
- (BOOL)p_shouldCreateArrowKnobs;
- (BOOL)p_isInDocumentSetup;
- (id)colorBehindLayer:(id)arg1;
- (BOOL)doesNeedDisplayOnEditingDidEnd;
- (void)editingDidEndWithTextEditor:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (struct CGRect)boundsForStandardKnobs;
- (id)newTrackerForKnob:(id)arg1;
- (void)addKnobsToArray:(id)arg1;
- (BOOL)shouldCreateKnobs;
- (void)didBeginEditingWithTextEditor:(id)arg1;
- (void)beginEditing;
- (Class)wpEditorClass;
- (BOOL)canEditWithEditor:(id)arg1;
- (BOOL)shouldBeginEditingWithGesture:(id)arg1;
- (BOOL)directlyManagesVisibilityOfKnob:(id)arg1;
@property(readonly, nonatomic) TPPaginatedPageInfo *pageInfo;
- (id)pageLayout;

@end

