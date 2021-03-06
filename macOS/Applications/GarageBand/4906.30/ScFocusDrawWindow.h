//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

#import "NSWindowDelegate-Protocol.h"

@class NSString, NSView, ScFocusDrawView;

@interface ScFocusDrawWindow : NSWindow <NSWindowDelegate>
{
    NSView *m_baseView;
    NSWindow *m_baseWindow;
    ScFocusDrawView *m_focusDrawView1;
    ScFocusDrawView *m_focusDrawView2;
}

- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)setFocusDraw3:(struct CGRect)arg1;
- (void)setForBottom3:(int)arg1;
- (void)dealloc;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

