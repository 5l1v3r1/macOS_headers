//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class LPPreferencesController, NSArray, NSButton, NSProgressIndicator, NSString, NSTableView, NSTextField;

__attribute__((visibility("hidden")))
@interface LPLanguagesDefaultsController : NSObject <NSTableViewDelegate, NSTableViewDataSource>
{
    LPPreferencesController *_rootPreferencesController;
    NSArray *_tableViewDataArray;
    NSTableView *_languagesTableView;
    NSButton *_compilerSelectionRadioButton1;
    NSButton *_compilerSelectionRadioButton2;
    NSTextField *_compilerSelectionExternalPathLabel;
    NSButton *_compilerSelectionChoosePathButton;
    NSProgressIndicator *_compilerSelectionSpinner;
}

- (void)compilerSelectionChooseButtonAction:(id)arg1;
- (void)compilerSelectionRadioButtonsAction:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)bindAndUpdateElements;
- (void)selectedLanguagePrefix:(id *)arg1 engineNameForUI:(id *)arg2 andEngineType:(long long *)arg3;
- (id)dataArrayForLanguageTable;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

