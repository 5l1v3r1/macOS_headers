//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/AVTrimControlsTrackView.h>

@class AVAssetImageGenerator, AVPlayerController;

@interface AVTrimControlsVideoTrackView : AVTrimControlsTrackView
{
    AVPlayerController *_playerController;
    AVAssetImageGenerator *_imageGenerator;
    struct CGSize _mediaCompositionNaturalSize;
    struct CGSize _lastPreviewLayerBoundsSize;
}

- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)setPlayerController:(id)arg1;
- (id)playerController;
- (void)dealloc;
- (id)init;

@end

