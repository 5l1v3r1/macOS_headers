//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDMediaRep.h"

#import "TSDPlayableMediaRep-Protocol.h"
#import "TSKMediaPlayerControllerDelegate-Protocol.h"

@class AVAsset, CALayer, CAShapeLayer, NSObject, NSString, TSDMovieInfo, TSKAVPlayerController, TSKMediaPlayerTimeController;
@protocol TSKMediaPlayerController;

@interface TSDAudioRep : TSDMediaRep <TSKMediaPlayerControllerDelegate, TSDPlayableMediaRep>
{
    TSKAVPlayerController *mPlayerController;
    TSKMediaPlayerTimeController *mTimeController;
    BOOL mDidCheckPlayability;
    BOOL mIsPlayable;
    AVAsset *mAssetForPlayabilityCheck;
    CALayer *mSpinnerLayer;
    CALayer *mPlayPauseLayer;
    BOOL mHighlighted;
    CAShapeLayer *mProgressTrackLayer;
    CAShapeLayer *mProgressLayer;
    float mDynamicVolume;
    BOOL mIsChangingDynamicVolume;
    unsigned long long mPlaybackState;
    CALayer *mAudioImageLayer;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
@property(readonly, nonatomic, getter=isPlayable) BOOL playable; // @synthesize playable=mIsPlayable;
@property(readonly, nonatomic) CALayer *audioImageLayer; // @synthesize audioImageLayer=mAudioImageLayer;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_updateDownloadSpinnerState;
- (void)p_listenForDataChangesIfAppropriate;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
@property(readonly, nonatomic) NSObject<TSKMediaPlayerController> *playerController;
- (void)p_teardownPlayerController;
- (void)p_setupPlayerControllerIfNecessary;
- (BOOL)p_shouldPlayerControllerExistThroughoutSelection;
- (void)dynamicVolumeChangeDidEnd;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (void)dynamicVolumeChangeDidBegin;
@property(readonly, nonatomic) float volume;
- (void)p_setupSpinnerAnimationIfNeeded;
- (void)p_updatePlayPauseButton;
- (void)i_setButtonHighlighted:(BOOL)arg1;
- (BOOL)canDrawDownloadProgressPlaceholderImage;
- (id)downloadProgressPlaceholderImage;
- (BOOL)isDataCurrentlyDownloading;
- (BOOL)shouldShowDownloadProgressIndicator;
- (BOOL)containsPoint:(struct CGPoint)arg1 withPrecision:(BOOL)arg2;
- (void)didEndZooming;
- (void)willBeginZooming;
- (BOOL)exclusivelyProvidesGuidesWhileAligning;
- (BOOL)providesGuidesWhileAligning;
- (struct CGRect)p_scaledLayerFrameInRoot;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (BOOL)shouldShowKnobs;
- (struct CGAffineTransform)transformForCollaboratorCursorLayer;
- (void)updateSelectionHighlightLayer:(id)arg1;
- (id)makeSelectionHighlightLayer;
- (struct CGColor *)selectionHighlightColor;
- (BOOL)p_isEditingAnimations;
- (BOOL)intersectsUnscaledRect:(struct CGRect)arg1;
- (struct CGRect)targetRectForEditMenu;
- (struct CGRect)frameInUnscaledCanvas;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (BOOL)shouldShowSizesInRulers;
- (BOOL)shouldShowDragHUD;
- (BOOL)shouldCreateSelectionKnobs;
- (void)i_togglePlayback;
- (id)newMouseEventHandlerAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) BOOL shouldBecomeSelectedWhenPlaying;
- (void)p_updateEndTime;
- (void)p_updateStartTime;
- (void)p_updateVolume;
- (void)p_updateRepeatMode;
- (void)processChangedProperty:(int)arg1;
- (BOOL)p_isPlaying;
- (void)p_cancelPlayabilityCheck;
- (void)p_updatePlayabilityIfNecessary;
- (id)p_unpauseButtonImage;
- (id)p_pauseButtonImage;
- (id)p_playButtonImage;
- (id)p_backgroundColor;
- (BOOL)shouldAllowReplacementFromDrop;
- (BOOL)shouldAllowReplacementFromPaste;
- (void)i_willShowEditingUI;
- (void)willBeginReadMode;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)willUpdateLayer:(id)arg1;
- (BOOL)p_shouldShowDownloadSpinner;
- (id)unscaledPathToIncludeForDragPreviewOutline;
- (BOOL)shouldShowMediaReplaceUI;
- (Class)layerClass;
- (BOOL)directlyManagesLayerContent;
- (id)textureWithDescription:(id)arg1;
- (struct CGRect)boundsForStandardKnobs;
- (void)willBeRemoved;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGRect)clipRect;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(BOOL)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

