//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class SctxNameTextView2;

@interface SctxNameTextView1 : NSTableCellView
{
    int m_baseline;
    SctxNameTextView2 *m_textView2;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setBaseline:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

