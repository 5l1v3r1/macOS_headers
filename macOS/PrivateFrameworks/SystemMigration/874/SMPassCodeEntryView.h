//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSButton, NSString;

@interface SMPassCodeEntryView : NSTextView
{
    NSButton *continueButton;
    unsigned long long passCodeLength;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (BOOL)drawsBackground;
- (BOOL)shouldDrawInsertionPoint;
- (BOOL)isOpaque;
- (void)insertText:(id)arg1;
- (BOOL)acceptsFirstResponder;
@property(readonly) NSString *stringValue;
- (void)clear;
@property unsigned long long passCodeLength;
- (id)initWithFrame:(struct CGRect)arg1;

@end

