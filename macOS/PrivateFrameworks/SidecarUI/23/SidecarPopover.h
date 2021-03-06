//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopover.h>

@class NSWindow, SidecarRequest;

@interface SidecarPopover : NSPopover
{
    SidecarRequest *_request;
    unsigned int _isModal:1;
}

+ (struct CGRect)positioningRectForTextInputClient:(id)arg1;
+ (id)sidecarPopoverWithRequest:(id)arg1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stop:(id)arg1;
- (long long)runModal;
- (void)_stopRequestObserver;
- (void)_startRequestObserver;
- (void)_stopEventMonitor:(id)arg1;
- (id)_startEventMonitor;
@property(readonly) NSWindow *window;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end

