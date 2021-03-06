//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSSearchFieldDelegate.h"

@class KNElementListFilterController, KNMacElementListFilterEditorViewController, KNMacElementListFilterSearchField, NSButton, NSPopover, NSString;

@interface KNMacElementListFilterViewController : NSViewController <NSSearchFieldDelegate>
{
    KNMacElementListFilterSearchField *_stringFilterField;
    NSButton *_filterEnabledButton;
    KNMacElementListFilterEditorViewController *_filterEditorViewController;
    NSPopover *_filterEditorPopover;
    KNElementListFilterController *_filterController;
}

@property(retain, nonatomic) KNElementListFilterController *filterController; // @synthesize filterController=_filterController;
@property(retain, nonatomic) NSPopover *filterEditorPopover; // @synthesize filterEditorPopover=_filterEditorPopover;
@property(retain, nonatomic) KNMacElementListFilterEditorViewController *filterEditorViewController; // @synthesize filterEditorViewController=_filterEditorViewController;
@property(retain, nonatomic) NSButton *filterEnabledButton; // @synthesize filterEnabledButton=_filterEnabledButton;
@property(retain, nonatomic) KNMacElementListFilterSearchField *stringFilterField; // @synthesize stringFilterField=_stringFilterField;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_stringFilterChanged;
- (void)p_showFilterPickerPopover;
- (void)p_updateFilterEnabledButton;
- (void)controlTextDidChange:(id)arg1;
- (void)filterEnabledButtonPressed:(id)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFilterController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

