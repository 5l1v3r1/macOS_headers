//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

@class NSTimer;

@interface KHLongClickGestureRecognizer : NSGestureRecognizer
{
    NSTimer *_clickTimer;
    struct CGPoint _initialMouseLocation;
    double _minimumPressDuration;
    double _allowableMovement;
}

@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
- (void).cxx_destruct;
- (void)_minimumDurationElapsed:(id)arg1;
- (void)_stopTimer;
- (void)_startTimer;
- (void)reset;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

