//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import <PhotoPrintProduct/KHPickerCellDelegate-Protocol.h>
#import <PhotoPrintProduct/UXCollectionViewDataSource-Protocol.h>
#import <PhotoPrintProduct/UXCollectionViewDelegate-Protocol.h>

@class KHFrame, KHImage, NSArray, NSObject, NSString, UXCollectionView, UXCollectionViewFlowLayout;
@protocol OS_dispatch_queue;

@interface KHPhotoEffectsPickerController : UXViewController <KHPickerCellDelegate, UXCollectionViewDataSource, UXCollectionViewDelegate>
{
    BOOL _showsArrows;
    BOOL _animating;
    KHFrame *_frame;
    UXCollectionView *_collectionView;
    UXCollectionViewFlowLayout *_flowLayout;
    unsigned long long _visibleRows;
    KHImage *_squareImage;
    NSArray *_effects;
    NSObject<OS_dispatch_queue> *_effectsQueue;
    struct CGSize _padding;
    struct CGSize _cellSize;
}

@property(readonly) NSObject<OS_dispatch_queue> *effectsQueue; // @synthesize effectsQueue=_effectsQueue;
@property(readonly) NSArray *effects; // @synthesize effects=_effects;
@property(readonly) KHImage *squareImage; // @synthesize squareImage=_squareImage;
@property BOOL animating; // @synthesize animating=_animating;
@property unsigned long long visibleRows; // @synthesize visibleRows=_visibleRows;
@property BOOL showsArrows; // @synthesize showsArrows=_showsArrows;
@property struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property struct CGSize padding; // @synthesize padding=_padding;
@property(retain) UXCollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain) UXCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) KHFrame *frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (id)imageForEffectIndex:(unsigned long long)arg1;
- (void)syncCollectionViewSelection;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

