//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSFont, NSString, NSTextField;

@interface NSBox : NSView
{
    id _contentView;
    struct CGSize _offsets;
    struct CGRect _borderRect;
    id _unused;
    id _titleCell;
    struct CGRect _titleRect;
    struct __bFlags {
        unsigned int borderType:2;
        unsigned int titlePosition:3;
        unsigned int backgroundTransparent:1;
        unsigned int orientation:2;
        unsigned int needsTile:1;
        unsigned int transparent:1;
        unsigned int boxType:3;
        unsigned int useSuperAddSubview:1;
        unsigned int _RESERVED:18;
    } _bFlags;
}

+ (id)defaultAnimationForKey:(id)arg1;
+ (Class)_classToCheckForRequiresConstraintBasedLayout;
+ (void)initialize;
- (void)setTitleWithMnemonic:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
@property(copy) NSColor *fillColor;
@property(copy) NSColor *borderColor;
@property double cornerRadius;
@property(readonly) double _effectiveBorderWidth;
@property double borderWidth;
@property(retain, setter=_setTitleTextField:) NSTextField *_titleTextField;
@property(retain, setter=_setBackgroundView:) NSView *_backgroundView;
- (void)_removeTitleTextField;
- (void)_updateTitleTextField;
- (struct CGRect)_titleTextFieldFrame;
- (BOOL)_needsTitleTextField;
- (BOOL)_needsBackgroundView;
- (void)_removeBackgroundView;
- (void)_updateCustomBackgroundView;
- (void)_updateSeparatorBackgroundView;
- (void)_updateOldStyleBackgroundView;
- (void)_updateThemeBoxBackgroundView;
- (void)_updateBackgroundView;
- (struct CGRect)_backgroundViewFrame;
- (void)_invalidateSubviewsForStateChange;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (void)viewWillDraw;
- (Class)_classToCheckForWantsUpdateLayer;
- (BOOL)_wantsBoxSubviews;
- (void)_updateSubviews;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (BOOL)_separatorBoxIsHorizontal;
- (void)_tile:(BOOL)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)intrinsicContentSize;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)layout;
- (void)updateConstraints;
- (void)setFrameFromContentFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)_isOldStyleBordered;
- (BOOL)_justDrawsAGrooveOnOneSide;
- (void)_directlyAddSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)willRemoveSubview:(id)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)addSubview:(id)arg1;
@property(retain) NSView *contentView;
@property(getter=isTransparent) BOOL transparent;
@property struct CGSize contentViewMargins;
@property(readonly) id titleCell;
@property(readonly) struct CGRect titleRect;
@property(readonly) struct CGRect borderRect;
@property(retain) NSFont *titleFont;
@property(copy) NSString *title;
@property(readonly) unsigned long long _effectiveTitlePosition;
@property unsigned long long titlePosition;
- (unsigned long long)borderType;
- (void)setBorderType:(unsigned long long)arg1;
@property unsigned long long boxType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupAuxiliaryStorage;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsTitleUIElementAttributeSettable;
- (id)accessibilityTitleUIElementAttribute;
- (BOOL)accessibilityIsContentsAttributeSettable;
- (id)accessibilityContentsAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)ns_widgetType;

@end

