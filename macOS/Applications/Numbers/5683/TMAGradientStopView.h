//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKColorWell.h"

@class NSImage, TMAEditableGradientView;

@interface TMAGradientStopView : TSKColorWell
{
    NSImage *_handleImage;
    NSImage *_selectedImage;
    NSImage *_highlightedImage;
    BOOL _selectedStop;
    unsigned long long _stopIndex;
}

@property(nonatomic) BOOL selectedStop; // @synthesize selectedStop=_selectedStop;
@property(nonatomic) unsigned long long stopIndex; // @synthesize stopIndex=_stopIndex;
- (void).cxx_destruct;
- (id)imageForDraggingToDelete;
- (double)imageWidth;
@property(readonly, nonatomic) double fraction;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)stop;
@property(readonly, nonatomic) TMAEditableGradientView *gradientView;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)init;

@end

