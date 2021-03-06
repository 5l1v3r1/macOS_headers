//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextFieldDelegate.h"

@class BJAButton, NSMutableDictionary, NSString, NSTextField, NSView;

@interface RegistrationController : NSObject <NSTextFieldDelegate>
{
    NSView *_view;
    NSMutableDictionary *_keys;
    NSTextField *_serialField;
    NSTextField *_emailField;
    NSTextField *_labelField;
    BJAButton *_enterButton;
    BJAButton *_escapeButton;
    BJAButton *_cancelButton;
    BJAButton *_saveButton;
    BJAButton *_recoverButton;
}

+ (id)sharedReg;
@property(retain, nonatomic) BJAButton *recoverButton; // @synthesize recoverButton=_recoverButton;
@property(retain, nonatomic) BJAButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) BJAButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) BJAButton *escapeButton; // @synthesize escapeButton=_escapeButton;
@property(retain, nonatomic) BJAButton *enterButton; // @synthesize enterButton=_enterButton;
@property(retain, nonatomic) NSTextField *labelField; // @synthesize labelField=_labelField;
@property(retain, nonatomic) NSTextField *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) NSTextField *serialField; // @synthesize serialField=_serialField;
@property(retain, nonatomic) NSMutableDictionary *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)close;
- (void)close:(id)arg1;
- (void)resetLicense;
- (void)done:(id)arg1;
- (void)focusField;
- (void)recoverLicense;
- (void)updateInterface;
- (void)shakeField;
- (void)verify;
- (void)setSerial:(id)arg1;
- (void)setupTrial;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

