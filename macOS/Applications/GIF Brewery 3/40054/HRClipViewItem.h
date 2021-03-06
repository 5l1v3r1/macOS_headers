//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionViewItem.h"

@class AVAssetImageGenerator, CALayer, FBKVOController, HRVideoClip;

@interface HRClipViewItem : NSCollectionViewItem
{
    HRVideoClip *_clip;
    AVAssetImageGenerator *_generator;
    id <HRClipViewItemDelegate> _delegate;
    FBKVOController *_kvo;
}

@property(retain, nonatomic) FBKVOController *kvo; // @synthesize kvo=_kvo;
@property(nonatomic) __weak id <HRClipViewItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVAssetImageGenerator *generator; // @synthesize generator=_generator;
@property(nonatomic) __weak HRVideoClip *clip; // @synthesize clip=_clip;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)update;
- (void)prepareForReuse;
@property(readonly, nonatomic) CALayer *mainLayer;
- (void)viewDidLoad;
- (void)dealloc;

@end

