//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class EKEvent, EKUIAttendeesGadget, NSTrackingArea;

@interface EKUIAttendeesEditingField : NSTextField
{
    NSTrackingArea *_trackingArea;
    EKUIAttendeesGadget *_controller;
    EKEvent *_event;
}

@property __weak EKEvent *event; // @synthesize event=_event;
@property __weak EKUIAttendeesGadget *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)updateTrackingAreas;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

