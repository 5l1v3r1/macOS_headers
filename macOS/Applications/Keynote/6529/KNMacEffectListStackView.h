//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSStackView.h"

@class KNMacEffectListItemButton, NSArray, NSMutableString, NSObject<KNMacEffectListStackViewDelegate>, NSTrackingArea;

@interface KNMacEffectListStackView : NSStackView
{
    NSTrackingArea *_trackingArea;
    KNMacEffectListItemButton *_keyboardFocusedButton;
    NSMutableString *_typingBuffer;
    NSObject<KNMacEffectListStackViewDelegate> *_highlightAndScrollDelegate;
}

@property(nonatomic) __weak NSObject<KNMacEffectListStackViewDelegate> *highlightAndScrollDelegate; // @synthesize highlightAndScrollDelegate=_highlightAndScrollDelegate;
- (void).cxx_destruct;
- (void)clearAllHighlights;
- (void)scrollView:(id)arg1 didScrollFromAutoscrollBox:(BOOL)arg2 mouseLocationInWindow:(struct CGPoint)arg3;
- (void)updateMouseIsOverForMousePoint:(struct CGPoint)arg1;
- (id)p_hitSectionViewForHitView:(id)arg1;
- (void)p_clearKeyboardFocusedForAllSectionViews;
- (void)p_clearMouseIsOverForAllSectionViewsExcept:(id)arg1;
- (void)p_clearMouseIsOverForAllSectionViews;
- (void)p_updateMouseIsOverForEvent:(id)arg1;
- (void)p_popoverDidShowNotification:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)p_flattenedButtonViews;
- (void)p_scrollKeyboardFocusedViewToVisible;
- (void)p_chooseLastKeyboardFocusedButton;
- (void)p_selectAndScrollToButtonView:(id)arg1;
- (void)p_deselectButtonView:(id)arg1;
- (void)p_chooseNextKeyboardFocusedButton:(BOOL)arg1;
- (void)p_chooseNextKeyboardFocusedButton;
- (void)p_choosePreviousKeyboardFocusedButton;
- (void)p_chooseFirstKeyboardFocusedButton;
- (void)p_clearKeyboardFocusedButtonIfNotInCurrentEffectList;
- (void)p_chooseInitialKeyboadFocusedButton;
- (void)cancelOperation:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)p_clearTypingBuffer;
- (long long)p_fuzzyMatchScoreForMenuItemName:(id)arg1;
- (id)p_buttonFuzzyMatchingTypingBuffer;
- (id)p_buttonMatchingTypingBuffer;
- (void)p_cancelPerformClearTypingBuffer;
- (void)insertText:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isFlipped;
@property(readonly, nonatomic) NSArray *sectionViews;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)p_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

