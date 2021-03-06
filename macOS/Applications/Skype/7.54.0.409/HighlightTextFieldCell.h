//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSArray, NSDictionary;

@interface HighlightTextFieldCell : NSTextFieldCell
{
    NSArray *_highlightRanges;
    NSDictionary *_highlightAttributes;
}

@property(copy, nonatomic) NSDictionary *highlightAttributes; // @synthesize highlightAttributes=_highlightAttributes;
@property(copy, nonatomic) NSArray *highlightRanges; // @synthesize highlightRanges=_highlightRanges;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

