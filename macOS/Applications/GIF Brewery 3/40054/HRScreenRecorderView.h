//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface HRScreenRecorderView : NSView
{
    BOOL _recording;
}

@property(nonatomic) BOOL recording; // @synthesize recording=_recording;
- (BOOL)isOpaque;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
@property(readonly, nonatomic) struct CGRect viewableRectInScreen;
@property(readonly, nonatomic) struct CGRect viewableRectInQuartzScreenCoordinates;
@property(readonly, nonatomic) struct CGRect recordableRectInLocalScreenCoordinates;
@property(readonly, nonatomic) struct CGRect viewableRect;
@property(readonly, nonatomic) struct CGRect recordingRect;
- (void)drawBorder;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

