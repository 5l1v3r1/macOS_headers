//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXView.h>

@protocol IPXViewerOverlayViewDelegate;

__attribute__((visibility("hidden")))
@interface IPXViewerOverlayView : UXView
{
    struct {
        unsigned int respondsToCursorForViewerOverlayView:1;
    } _overlayViewFlags;
    BOOL __forwardMouseEventToSiblings;
    id <IPXViewerOverlayViewDelegate> _overlayViewDelegate;
}

@property(nonatomic, setter=_setForwardMouseEventToSiblings:) BOOL _forwardMouseEventToSiblings; // @synthesize _forwardMouseEventToSiblings=__forwardMouseEventToSiblings;
@property(nonatomic) __weak id <IPXViewerOverlayViewDelegate> overlayViewDelegate; // @synthesize overlayViewDelegate=_overlayViewDelegate;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isTransparentToMouseHits;
- (id)init;

@end

