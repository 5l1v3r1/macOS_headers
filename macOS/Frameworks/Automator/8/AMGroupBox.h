//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBox.h"

@class NSColor;

@interface AMGroupBox : NSBox
{
    BOOL _showBorder;
    NSColor *_borderColor;
}

@property(copy) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property BOOL showBorder; // @synthesize showBorder=_showBorder;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)inTesting;
- (BOOL)hasTesting;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

