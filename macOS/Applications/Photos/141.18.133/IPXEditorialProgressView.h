//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface IPXEditorialProgressView : NSView
{
    NSColor *_backgroundColor;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressStatusLabel;
    NSLayoutConstraint *_progressIndicatorVerticalConstraint;
    NSLayoutConstraint *_progressStatusLabelVerticalConstraint;
}

+ (double)preferredCornerRadius;
- (void).cxx_destruct;
@property(readonly) NSLayoutConstraint *progressStatusLabelVerticalConstraint; // @synthesize progressStatusLabelVerticalConstraint=_progressStatusLabelVerticalConstraint;
@property(readonly) NSLayoutConstraint *progressIndicatorVerticalConstraint; // @synthesize progressIndicatorVerticalConstraint=_progressIndicatorVerticalConstraint;
@property(readonly) NSTextField *progressStatusLabel; // @synthesize progressStatusLabel=_progressStatusLabel;
@property(readonly) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)viewWillMoveToWindow:(id)arg1;
@property(copy, nonatomic) NSString *statusText;
@property(nonatomic, getter=isProgressIndicatorHidden) BOOL progressIndicatorHidden;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

