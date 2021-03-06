//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MUIWebDocumentViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class ComposeDraft, MUIAddressField, MUIWebDocumentView, NSArray, NSButton, NSPopUpButton, NSStackView, NSString, NSTextField;

@interface ComposeViewController : NSViewController <MUIWebDocumentViewDelegate, NSTextFieldDelegate>
{
    long long _toState;
    long long _ccState;
    long long _bccState;
    long long _replyToState;
    long long _subjectState;
    long long _fromState;
    long long _deliveryAccountState;
    long long _deliveryPriorityState;
    BOOL _isPerformingUICustomization;
    NSArray *_fromAddresses;
    NSArray *_deliveryAccounts;
    NSStackView *_headerStackView;
    MUIWebDocumentView *_webDocumentView;
    NSStackView *_toStackView;
    NSStackView *_ccStackView;
    NSStackView *_bccStackView;
    NSStackView *_replyToStackView;
    NSStackView *_subjectStackView;
    NSStackView *_fromStackView;
    NSStackView *_customizationStackView;
    NSButton *_toCheckBox;
    NSButton *_ccCheckBox;
    NSButton *_bccCheckBox;
    NSButton *_replyToCheckBox;
    NSButton *_subjectCheckBox;
    NSButton *_fromCheckBox;
    NSButton *_deliveryAccountCheckBox;
    NSButton *_deliveryPriorityCheckBox;
    NSTextField *_toLabel;
    NSTextField *_ccLabel;
    NSTextField *_bccLabel;
    NSTextField *_replyToLabel;
    NSTextField *_subjectLabel;
    NSTextField *_fromLabel;
    MUIAddressField *_toAddressField;
    MUIAddressField *_ccAddressField;
    MUIAddressField *_bccAddressField;
    MUIAddressField *_replyToAddressField;
    NSTextField *_subjectTextField;
    NSPopUpButton *_fromAddressPopUpButton;
    NSPopUpButton *_deliveryAccountPopUpButton;
    NSPopUpButton *_deliveryPriorityPopUpButton;
}

@property(nonatomic) BOOL isPerformingUICustomization; // @synthesize isPerformingUICustomization=_isPerformingUICustomization;
@property(retain, nonatomic) NSPopUpButton *deliveryPriorityPopUpButton; // @synthesize deliveryPriorityPopUpButton=_deliveryPriorityPopUpButton;
@property(retain, nonatomic) NSPopUpButton *deliveryAccountPopUpButton; // @synthesize deliveryAccountPopUpButton=_deliveryAccountPopUpButton;
@property(retain, nonatomic) NSPopUpButton *fromAddressPopUpButton; // @synthesize fromAddressPopUpButton=_fromAddressPopUpButton;
@property(retain, nonatomic) NSTextField *subjectTextField; // @synthesize subjectTextField=_subjectTextField;
@property(retain, nonatomic) MUIAddressField *replyToAddressField; // @synthesize replyToAddressField=_replyToAddressField;
@property(retain, nonatomic) MUIAddressField *bccAddressField; // @synthesize bccAddressField=_bccAddressField;
@property(retain, nonatomic) MUIAddressField *ccAddressField; // @synthesize ccAddressField=_ccAddressField;
@property(retain, nonatomic) MUIAddressField *toAddressField; // @synthesize toAddressField=_toAddressField;
@property(retain, nonatomic) NSTextField *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(retain, nonatomic) NSTextField *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(retain, nonatomic) NSTextField *replyToLabel; // @synthesize replyToLabel=_replyToLabel;
@property(retain, nonatomic) NSTextField *bccLabel; // @synthesize bccLabel=_bccLabel;
@property(retain, nonatomic) NSTextField *ccLabel; // @synthesize ccLabel=_ccLabel;
@property(retain, nonatomic) NSTextField *toLabel; // @synthesize toLabel=_toLabel;
@property(retain, nonatomic) NSButton *deliveryPriorityCheckBox; // @synthesize deliveryPriorityCheckBox=_deliveryPriorityCheckBox;
@property(retain, nonatomic) NSButton *deliveryAccountCheckBox; // @synthesize deliveryAccountCheckBox=_deliveryAccountCheckBox;
@property(retain, nonatomic) NSButton *fromCheckBox; // @synthesize fromCheckBox=_fromCheckBox;
@property(retain, nonatomic) NSButton *subjectCheckBox; // @synthesize subjectCheckBox=_subjectCheckBox;
@property(retain, nonatomic) NSButton *replyToCheckBox; // @synthesize replyToCheckBox=_replyToCheckBox;
@property(retain, nonatomic) NSButton *bccCheckBox; // @synthesize bccCheckBox=_bccCheckBox;
@property(retain, nonatomic) NSButton *ccCheckBox; // @synthesize ccCheckBox=_ccCheckBox;
@property(retain, nonatomic) NSButton *toCheckBox; // @synthesize toCheckBox=_toCheckBox;
@property(retain, nonatomic) NSStackView *customizationStackView; // @synthesize customizationStackView=_customizationStackView;
@property(retain, nonatomic) NSStackView *fromStackView; // @synthesize fromStackView=_fromStackView;
@property(retain, nonatomic) NSStackView *subjectStackView; // @synthesize subjectStackView=_subjectStackView;
@property(retain, nonatomic) NSStackView *replyToStackView; // @synthesize replyToStackView=_replyToStackView;
@property(retain, nonatomic) NSStackView *bccStackView; // @synthesize bccStackView=_bccStackView;
@property(retain, nonatomic) NSStackView *ccStackView; // @synthesize ccStackView=_ccStackView;
@property(retain, nonatomic) NSStackView *toStackView; // @synthesize toStackView=_toStackView;
@property(retain, nonatomic) MUIWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) NSStackView *headerStackView; // @synthesize headerStackView=_headerStackView;
@property(copy, nonatomic) NSArray *deliveryAccounts; // @synthesize deliveryAccounts=_deliveryAccounts;
@property(copy, nonatomic) NSArray *fromAddresses; // @synthesize fromAddresses=_fromAddresses;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)finishUICustomization:(id)arg1;
- (void)beginUICustomization:(id)arg1;
- (double)_customizationAnimationDuration;
- (void)_configureUIElements;
- (void)_alignUILabels;
- (void)_updateDeliveryAccountsMenu:(id)arg1;
- (void)_synchronizeDeliveryAccount;
- (void)_updateDeliveryAccounts:(id)arg1;
- (void)_updateFromAddressesMenu:(id)arg1;
- (void)_synchronizeFromAddress;
- (void)_updateFromAddresses:(id)arg1;
- (void)_updateDisplayNameWithSubject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_controlForIdentifer:(long long)arg1;
- (id)_checkBoxForIdentifier:(long long)arg1;
- (id)_labelForIdentifier:(long long)arg1;
- (id)_stackViewForIdentifier:(long long)arg1;
- (long long)_stateForIdentifier:(long long)arg1;
@property(nonatomic) long long deliveryPriorityState;
@property(nonatomic) long long deliveryAccountState;
@property(nonatomic) long long fromState;
@property(nonatomic) long long subjectState;
@property(nonatomic) long long replyToState;
@property(nonatomic) long long bccState;
@property(nonatomic) long long ccState;
@property(nonatomic) long long toState;
@property(retain) ComposeDraft *representedObject;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_newComposeViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

