//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import <MapKit/MKMultilineText-Protocol.h>

@class NSAttributedString, NSString;

@interface _MKUILabel : NSTextField <MKMultilineText>
{
    double _cachedBaselineOffsetFromBottom;
    BOOL _haveCachedBaselineOffsetFromBottom;
    BOOL _collapsesWhenEmpty;
    CDUnknownBlockType __mapkit_themeColorProvider;
}

+ (id)keyPathsForValuesAffectingAlignment;
+ (id)keyPathsForValuesAffectingAttributedText;
+ (id)keyPathsForValuesAffectingText;
@property(copy, nonatomic) CDUnknownBlockType _mapkit_themeColorProvider; // @synthesize _mapkit_themeColorProvider=__mapkit_themeColorProvider;
@property(nonatomic) BOOL collapsesWhenEmpty; // @synthesize collapsesWhenEmpty=_collapsesWhenEmpty;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) long long textAlignment;
- (double)baselineOffsetFromBottom;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(nonatomic) long long numberOfLines;
@property(copy, nonatomic) NSString *text;
- (void)infoCardThemeChanged;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(nonatomic) double preferredMaxLayoutWidth;
@property(readonly) Class superclass;

@end

