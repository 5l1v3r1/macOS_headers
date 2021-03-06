//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface UIAccessibilityElementTraversalOptions : NSObject
{
    BOOL _shouldReturnScannerGroups;
    BOOL _shouldOnlyIncludeElementsWithVisibleFrame;
    BOOL _shouldIncludeKeyboardObscuredElements;
    BOOL _shouldUseAllSubviews;
    BOOL _includeHiddenViews;
    BOOL _includeWindowlessViews;
    BOOL _sorted;
    BOOL _ignoreObscuresScreen;
    BOOL _includeDirectDescendantsOnly;
    BOOL _includeAncestorsOfSelfInSiblingMatch;
    BOOL _forSpeakScreen;
    BOOL _shouldIncludeStatusBarWindow;
    long long _direction;
    CDUnknownBlockType _leafNodePredicate;
    NSArray *_allowedViewsForTraversal;
}

+ (id)defaultSpeakScreenOptions;
+ (id)defaultSwitchControlOptions;
+ (id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(BOOL)arg1;
+ (id)defaultVoiceOverOptions;
+ (id)options;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldIncludeStatusBarWindow; // @synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow;
@property(nonatomic) BOOL forSpeakScreen; // @synthesize forSpeakScreen=_forSpeakScreen;
@property(retain, nonatomic) NSArray *allowedViewsForTraversal; // @synthesize allowedViewsForTraversal=_allowedViewsForTraversal;
@property(nonatomic) BOOL includeAncestorsOfSelfInSiblingMatch; // @synthesize includeAncestorsOfSelfInSiblingMatch=_includeAncestorsOfSelfInSiblingMatch;
@property(nonatomic) BOOL includeDirectDescendantsOnly; // @synthesize includeDirectDescendantsOnly=_includeDirectDescendantsOnly;
@property(nonatomic) BOOL ignoreObscuresScreen; // @synthesize ignoreObscuresScreen=_ignoreObscuresScreen;
@property(nonatomic) BOOL sorted; // @synthesize sorted=_sorted;
@property(nonatomic) BOOL includeWindowlessViews; // @synthesize includeWindowlessViews=_includeWindowlessViews;
@property(nonatomic) BOOL includeHiddenViews; // @synthesize includeHiddenViews=_includeHiddenViews;
@property(nonatomic) BOOL shouldUseAllSubviews; // @synthesize shouldUseAllSubviews=_shouldUseAllSubviews;
@property(nonatomic) BOOL shouldIncludeKeyboardObscuredElements; // @synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements;
@property(nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame; // @synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame;
@property(copy, nonatomic) CDUnknownBlockType leafNodePredicate; // @synthesize leafNodePredicate=_leafNodePredicate;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) BOOL shouldReturnScannerGroups; // @synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups;
- (id)description;
- (id)init;

@end

