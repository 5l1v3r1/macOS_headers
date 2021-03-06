//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class KNDocumentRoot, KNMacShowcastInviteViewersButton, KNMacShowcastShareOptionsURLBackgroundView, KNShowcastStatusController, NSBox, NSButton, NSLayoutConstraint, NSTextField;

@interface KNMacShowcastShareOptionsWindowController : NSWindowController
{
    BOOL _showingOptions;
    BOOL _passwordRequired;
    BOOL _firstRun;
    BOOL _changingOptions;
    KNDocumentRoot *_documentRoot;
    KNMacShowcastShareOptionsURLBackgroundView *_URLBackgroundView;
    NSTextField *_URLField;
    NSTextField *_titleField;
    NSTextField *_subTitleField;
    NSButton *_moreOptionsDisclosureButton;
    NSButton *_moreOptionsButton;
    NSButton *_requirePasswordButton;
    NSButton *_setPasswordButton;
    KNMacShowcastInviteViewersButton *_shareButton;
    NSButton *_endShowcastButton;
    NSButton *_playNowButton;
    NSButton *_playLaterButton;
    NSLayoutConstraint *_moreOptionsDividersVerticalSpacingConstraint;
    NSBox *_topLineView;
    NSBox *_bottomLineView;
    long long _moreOptionsAnimationCount;
}

@property(nonatomic) long long moreOptionsAnimationCount; // @synthesize moreOptionsAnimationCount=_moreOptionsAnimationCount;
@property(nonatomic, getter=isChangingOptions) BOOL changingOptions; // @synthesize changingOptions=_changingOptions;
@property(nonatomic) BOOL firstRun; // @synthesize firstRun=_firstRun;
@property(nonatomic) BOOL passwordRequired; // @synthesize passwordRequired=_passwordRequired;
@property(nonatomic) BOOL showingOptions; // @synthesize showingOptions=_showingOptions;
@property(retain, nonatomic) NSBox *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) NSBox *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) NSLayoutConstraint *moreOptionsDividersVerticalSpacingConstraint; // @synthesize moreOptionsDividersVerticalSpacingConstraint=_moreOptionsDividersVerticalSpacingConstraint;
@property(retain, nonatomic) NSButton *playLaterButton; // @synthesize playLaterButton=_playLaterButton;
@property(retain, nonatomic) NSButton *playNowButton; // @synthesize playNowButton=_playNowButton;
@property(retain, nonatomic) NSButton *endShowcastButton; // @synthesize endShowcastButton=_endShowcastButton;
@property(retain, nonatomic) KNMacShowcastInviteViewersButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSButton *setPasswordButton; // @synthesize setPasswordButton=_setPasswordButton;
@property(retain, nonatomic) NSButton *requirePasswordButton; // @synthesize requirePasswordButton=_requirePasswordButton;
@property(retain, nonatomic) NSButton *moreOptionsButton; // @synthesize moreOptionsButton=_moreOptionsButton;
@property(retain, nonatomic) NSButton *moreOptionsDisclosureButton; // @synthesize moreOptionsDisclosureButton=_moreOptionsDisclosureButton;
@property(retain, nonatomic) NSTextField *subTitleField; // @synthesize subTitleField=_subTitleField;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) NSTextField *URLField; // @synthesize URLField=_URLField;
@property(retain, nonatomic) KNMacShowcastShareOptionsURLBackgroundView *URLBackgroundView; // @synthesize URLBackgroundView=_URLBackgroundView;
@property(retain, nonatomic) KNDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void).cxx_destruct;
- (void)p_displayAlertForError:(id)arg1;
- (void)togglePasswordEnabled:(id)arg1;
- (void)linkCopy:(id)arg1;
- (void)changePassword:(id)arg1;
- (void)showShareMenu:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)toggleMoreOptions:(id)arg1;
- (void)p_closeWindowWithReturnCode:(long long)arg1;
- (void)closeWindow:(id)arg1;
- (void)playNow:(id)arg1;
- (void)endShowcasting:(id)arg1;
@property(readonly, nonatomic) KNShowcastStatusController *showcastStatusController;
- (BOOL)p_canPlayShowcast;
- (void)p_updatePasswordButtons;
- (void)p_stopChangingOptions;
- (void)p_startChangingOptions;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithCoder:(id)arg1;
- (id)initAsFirstRun:(BOOL)arg1 documentRoot:(id)arg2;

@end

