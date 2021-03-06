//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseParticipantsViewController.h"

@class BackgroundView, LayoutManager, NSButton, NSScrollView, NSScroller, NSView;

@interface ShelfViewController : BaseParticipantsViewController
{
    LayoutManager *shelfLayoutManager;
    NSButton *_dynamicModeButton;
    unsigned long long controlSize;
    BOOL showOverlayControls;
    BOOL alignRight;
    BOOL conversationHasActiveVoicemail;
    double scrollPosition;
    BackgroundView *_shelfBackground;
    NSView *_scrollableArea;
    NSScrollView *_scrollView;
    NSScroller *_scroller;
    BackgroundView *_leftShadow;
    BackgroundView *_rightShadow;
}

+ (id)keyPathsForValuesAffectingRightShadowAlpha;
+ (id)keyPathsForValuesAffectingLeftShadowAlpha;
+ (id)keyPathsForValuesAffectingHasContent;
+ (double)smallShelfHeight;
+ (double)shelfHeight;
@property(nonatomic) __weak BackgroundView *rightShadow; // @synthesize rightShadow=_rightShadow;
@property(nonatomic) __weak BackgroundView *leftShadow; // @synthesize leftShadow=_leftShadow;
@property(nonatomic) __weak NSScroller *scroller; // @synthesize scroller=_scroller;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSView *scrollableArea; // @synthesize scrollableArea=_scrollableArea;
@property(nonatomic) __weak BackgroundView *shelfBackground; // @synthesize shelfBackground=_shelfBackground;
@property(nonatomic) BOOL conversationHasActiveVoicemail; // @synthesize conversationHasActiveVoicemail;
@property(nonatomic) BOOL alignRight; // @synthesize alignRight;
@property(nonatomic) unsigned long long controlSize; // @synthesize controlSize;
@property(nonatomic) double scrollPosition; // @synthesize scrollPosition;
@property(nonatomic) BOOL showOverlayControls; // @synthesize showOverlayControls;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)clickParticipantAction:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)sizeViewToFit;
- (void)updateSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeConversationObservers;
- (void)addConversationObservers;
- (void)removeViewObservers;
- (void)addViewObservers;
- (void)dynamicModeButtonPressed:(id)arg1;
- (void)updateDynamicModeButton;
- (void)handleIsRecordingVoicemailChanged;
- (void)willRemoveParticipantViewController:(id)arg1;
- (void)didAddParticipantViewController:(id)arg1;
- (double)rightShadowAlpha;
- (double)leftShadowAlpha;
@property(readonly, nonatomic) BOOL hasContent;
- (void)preferredScrollerStyleDidChange:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)handleNeedsLayout:(id)arg1;
- (void)viewFrameChanged:(id)arg1;
- (void)loadView;
- (void)teardownBindings;
- (void)setupBindings;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setRepresentedObject:(id)arg1;
@property(readonly, nonatomic) NSButton *dynamicModeButton;
- (id)backgroundColor;

@end

