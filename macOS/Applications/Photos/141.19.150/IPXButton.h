//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface IPXButton : NSButton
{
    BOOL _allowsVibrancy;
    NSDictionary *_textAttributes;
    double _horizontalPadding;
    double _verticalPadding;
}

+ (id)editorialButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)borderlessButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void).cxx_destruct;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(retain, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
- (struct CGSize)intrinsicContentSize;
- (void)setEnabled:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)setAllowsVibrancy:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

