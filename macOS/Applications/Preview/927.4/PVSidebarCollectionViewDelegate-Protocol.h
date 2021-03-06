//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSPasteboard;

@protocol PVSidebarCollectionViewDelegate <NSObject>
@property(readonly) CDUnknownBlockType thumbnailRotateDisplayBlock;
@property(readonly) CDUnknownBlockType thumbnailRotateAccumulatorBlock;
@property(readonly) CDUnknownBlockType thumbnailRotateResetBlock;
@property(readonly) CDUnknownBlockType csmThumbnailMagnifyDisplayBlock;
@property(readonly) CDUnknownBlockType csmThumbnailMagnifyAccumulatorBlock;
@property(readonly) CDUnknownBlockType csmThumbnailMagnifyResetBlock;
- (void)thumbnailRotateComplete;
- (void)thumbnailRotateSetup;
- (BOOL)isSidebarAutohidingEnabled;
- (void)mouseWasDoubleClicked;
- (void)enterButtonPressed;
- (void)deleteCurrentSelection;
- (BOOL)canDeleteCurrentSelection;
- (void)copyCurrentSelectionToPasteboard:(NSPasteboard *)arg1;
- (BOOL)hasSelection;
@end

