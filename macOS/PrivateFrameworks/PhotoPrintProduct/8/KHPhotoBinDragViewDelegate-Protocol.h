//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHPhotoBinDragView, NSString;

@protocol KHPhotoBinDragViewDelegate <NSObject>

@optional
- (struct CGSize)photoBinDragView:(KHPhotoBinDragView *)arg1 itemSizeForAspectRatio:(double)arg2;
- (void)draggingExitedPhotoView:(KHPhotoBinDragView *)arg1;
- (void)draggingEnteredPhotoView:(KHPhotoBinDragView *)arg1;
- (void)photoId:(NSString *)arg1 droppedOnPhotoView:(KHPhotoBinDragView *)arg2;
@end

