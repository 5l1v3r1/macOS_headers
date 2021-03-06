//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

@class NSMenuItem;

@interface JRNSMenu : NSMenu
{
    struct JRMenu *mJRMenu;
    struct __CTFont *mFontRef;
    NSMenuItem *_currentlyHighlightedMenuItem;
}

+ (void)initialize;
@property(retain, nonatomic) NSMenuItem *currentlyHighlightedMenuItem; // @synthesize currentlyHighlightedMenuItem=_currentlyHighlightedMenuItem;
- (void)handleHighlightingOfMenuItem:(id)arg1;
- (BOOL)isCurrentlyBeingTracked;
- (struct __CTFont *)fontRef;
- (void)setFontRef:(struct __CTFont *)arg1;
- (struct JRMenu *)jrMenu;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 withJRMenu:(struct JRMenu *)arg2;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;

@end

