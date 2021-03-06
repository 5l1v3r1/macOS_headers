//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSButton, NSClipView, NSMutableDictionary, NSString, NSTableView, NSTextField, NSTrackingArea, TMAPredicatePickerSelection, TMAPredicatePickerTabButtonCell, TMAPredicatePickerView, TSKMacNSPopover;
@protocol NSPopoverDelegate;

@interface TMAPredicatePickerViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    int mRuleType;
    TMAPredicatePickerSelection *mPredicateSelection;
    NSMutableDictionary *mCategoryDictionary;
    NSTrackingArea *mTrackingArea;
    TSKMacNSPopover *mPredicatePopover;
    unsigned long long mMouseOverRow;
    NSClipView *mClipView;
    NSString *mPopoverTitle;
    NSButton *mRuleTypeButton[5];
    TMAPredicatePickerTabButtonCell *mRuleTypeButtonCell[5];
    int _selectedPredicateType;
    NSTableView *_ruleTable;
    NSTextField *_titleText;
    NSButton *_ruleTypeButton_Numbers;
    NSButton *_ruleTypeButton_Text;
    NSButton *_ruleTypeButton_Dates;
    NSButton *_ruleTypeButton_Durations;
    NSButton *_ruleTypeButton_Blank;
    TMAPredicatePickerTabButtonCell *_ruleTypeButtonCell_Numbers;
    TMAPredicatePickerTabButtonCell *_ruleTypeButtonCell_Text;
    TMAPredicatePickerTabButtonCell *_ruleTypeButtonCell_Dates;
    TMAPredicatePickerTabButtonCell *_ruleTypeButtonCell_Durations;
    TMAPredicatePickerTabButtonCell *_ruleTypeButtonCell_Blank;
    NSButton *_ruleTypeButtonLabel_Numbers;
    NSButton *_ruleTypeButtonLabel_Text;
    NSButton *_ruleTypeButtonLabel_Dates;
    NSButton *_ruleTypeButtonLabel_Durations;
    NSButton *_ruleTypeButtonLabel_Blank;
}

@property NSButton *ruleTypeButtonLabel_Blank; // @synthesize ruleTypeButtonLabel_Blank=_ruleTypeButtonLabel_Blank;
@property NSButton *ruleTypeButtonLabel_Durations; // @synthesize ruleTypeButtonLabel_Durations=_ruleTypeButtonLabel_Durations;
@property NSButton *ruleTypeButtonLabel_Dates; // @synthesize ruleTypeButtonLabel_Dates=_ruleTypeButtonLabel_Dates;
@property NSButton *ruleTypeButtonLabel_Text; // @synthesize ruleTypeButtonLabel_Text=_ruleTypeButtonLabel_Text;
@property NSButton *ruleTypeButtonLabel_Numbers; // @synthesize ruleTypeButtonLabel_Numbers=_ruleTypeButtonLabel_Numbers;
@property TMAPredicatePickerTabButtonCell *ruleTypeButtonCell_Blank; // @synthesize ruleTypeButtonCell_Blank=_ruleTypeButtonCell_Blank;
@property TMAPredicatePickerTabButtonCell *ruleTypeButtonCell_Durations; // @synthesize ruleTypeButtonCell_Durations=_ruleTypeButtonCell_Durations;
@property TMAPredicatePickerTabButtonCell *ruleTypeButtonCell_Dates; // @synthesize ruleTypeButtonCell_Dates=_ruleTypeButtonCell_Dates;
@property TMAPredicatePickerTabButtonCell *ruleTypeButtonCell_Text; // @synthesize ruleTypeButtonCell_Text=_ruleTypeButtonCell_Text;
@property TMAPredicatePickerTabButtonCell *ruleTypeButtonCell_Numbers; // @synthesize ruleTypeButtonCell_Numbers=_ruleTypeButtonCell_Numbers;
@property NSButton *ruleTypeButton_Blank; // @synthesize ruleTypeButton_Blank=_ruleTypeButton_Blank;
@property NSButton *ruleTypeButton_Durations; // @synthesize ruleTypeButton_Durations=_ruleTypeButton_Durations;
@property NSButton *ruleTypeButton_Dates; // @synthesize ruleTypeButton_Dates=_ruleTypeButton_Dates;
@property NSButton *ruleTypeButton_Text; // @synthesize ruleTypeButton_Text=_ruleTypeButton_Text;
@property NSButton *ruleTypeButton_Numbers; // @synthesize ruleTypeButton_Numbers=_ruleTypeButton_Numbers;
@property NSTextField *titleText; // @synthesize titleText=_titleText;
@property NSTableView *ruleTable; // @synthesize ruleTable=_ruleTable;
@property(readonly) int selectedPredicateType; // @synthesize selectedPredicateType=_selectedPredicateType;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)enterNewTableRow:(unsigned long long)arg1;
- (void)exitCurrentTableRow;
- (void)p_setNextRowHighlighted:(BOOL)arg1 forPreviousRow:(long long)arg2;
- (void)selectRowForPredicate:(int)arg1;
- (int)predicateForRow:(unsigned long long)arg1;
- (void)updateRuleType:(int)arg1;
- (int)getRuleTypeForPredicate:(int)arg1;
- (void)p_ruleSelectedAtIndex:(long long)arg1;
- (void)ruleSelected:(id)arg1;
- (void)changeRuleType:(id)arg1;
- (void)initializeRulesList:(id)arg1;
- (void)p_inspectorDidHide:(id)arg1;
- (void)performClose:(id)arg1;
- (void)showRelativeTo:(id)arg1;
- (void)p_scrollNotification:(id)arg1;
- (void)loadView;
@property(readonly) TMAPredicatePickerView *pickerView;
@property(nonatomic) id <NSPopoverDelegate> delegate;
- (void)dealloc;
- (id)initWithPredicateType:(int)arg1 andDelegate:(id)arg2 useRelativeTypes:(BOOL)arg3 withPopoverTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

