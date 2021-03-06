//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

#import "ManagedPlugInsEditorPlugInCellViewDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "OutlineViewPlusDelegate.h"
#import "WBSPerSitePreferenceManagerDelegate.h"

@class ManagedPlugInPoliciesViewController, ManagedWebGLPoliciesViewController, NSArray, NSBox, NSButton, NSDictionary, NSLayoutConstraint, NSOutlineView, NSPopUpButton, NSString, NSTableView, NSTextField, NSView, NotificationPreferencesController, WBSFaviconRequestsController;

__attribute__((visibility("hidden")))
@interface WebsitesPreferences : PreferencesModule <ManagedPlugInsEditorPlugInCellViewDelegate, WBSPerSitePreferenceManagerDelegate, NSTableViewDataSource, NSTableViewDelegate, NSOutlineViewDataSource, OutlineViewPlusDelegate>
{
    NSLayoutConstraint *_preferenceDescriptionTextFieldWidthConstraint;
    NSArray *_currentlyOpenDomains;
    NSArray *_configuredDomains;
    WBSFaviconRequestsController *_requestsController;
    NSArray *_plugIns;
    BOOL _isRefreshingPlugInList;
    ManagedPlugInPoliciesViewController *_managedPlugInPoliciesViewController;
    NSString *_identifierOfPlugInPreferenceToSelect;
    BOOL _didRestoreToLastOpenedSubPane;
    BOOL _didAwakeFromNib;
    double _widestNonPlugInTableCellViewWidth;
    NSArray *_perSitePreferences;
    NSDictionary *_preferencesToManagers;
    NSTableView *_preferencesTableView;
    NSTextField *_preferenceDescriptionTextField;
    NSButton *_removeButton;
    NSBox *_policyBorderBox;
    NSOutlineView *_policyOutlineView;
    NSPopUpButton *_defaultPolicyPopUpButton;
    NSView *_policiesPlaceholderView;
    NSTextField *_policiesPlaceholderLabel;
    NSView *_policyContainerView;
    NSView *_preferencesPolicyView;
    NSView *_notificationsPolicyView;
    NSTextField *_managedPlugInPoliciesDescriptionTextField;
    ManagedWebGLPoliciesViewController *_managedWebGLPoliciesViewController;
    NSTextField *_managedWebGLPoliciesDescriptionTextField;
    NotificationPreferencesController *_notificationPreferencesController;
    NSTextField *_notificationPoliciesDescriptionTextField;
    NSButton *_allowPromptingForNotificationsCheckbox;
    NSLayoutConstraint *_tableContainerWidth;
    NSTextField *_whenVisitingOtherWebsitesPreferenceLabel;
    NSBox *_preferencesBorderBox;
    NSBox *_notificationsPolicyBorderBox;
}

@property(nonatomic) __weak NSBox *notificationsPolicyBorderBox; // @synthesize notificationsPolicyBorderBox=_notificationsPolicyBorderBox;
@property(nonatomic) __weak NSBox *preferencesBorderBox; // @synthesize preferencesBorderBox=_preferencesBorderBox;
@property(nonatomic) __weak NSTextField *whenVisitingOtherWebsitesPreferenceLabel; // @synthesize whenVisitingOtherWebsitesPreferenceLabel=_whenVisitingOtherWebsitesPreferenceLabel;
@property(retain, nonatomic) NSLayoutConstraint *tableContainerWidth; // @synthesize tableContainerWidth=_tableContainerWidth;
@property(retain, nonatomic) NSButton *allowPromptingForNotificationsCheckbox; // @synthesize allowPromptingForNotificationsCheckbox=_allowPromptingForNotificationsCheckbox;
@property(retain, nonatomic) NSTextField *notificationPoliciesDescriptionTextField; // @synthesize notificationPoliciesDescriptionTextField=_notificationPoliciesDescriptionTextField;
@property(retain, nonatomic) NotificationPreferencesController *notificationPreferencesController; // @synthesize notificationPreferencesController=_notificationPreferencesController;
@property(retain, nonatomic) NSTextField *managedWebGLPoliciesDescriptionTextField; // @synthesize managedWebGLPoliciesDescriptionTextField=_managedWebGLPoliciesDescriptionTextField;
@property(retain, nonatomic) ManagedWebGLPoliciesViewController *managedWebGLPoliciesViewController; // @synthesize managedWebGLPoliciesViewController=_managedWebGLPoliciesViewController;
@property(retain, nonatomic) NSTextField *managedPlugInPoliciesDescriptionTextField; // @synthesize managedPlugInPoliciesDescriptionTextField=_managedPlugInPoliciesDescriptionTextField;
@property(retain, nonatomic) ManagedPlugInPoliciesViewController *managedPlugInPoliciesViewController; // @synthesize managedPlugInPoliciesViewController=_managedPlugInPoliciesViewController;
@property(retain, nonatomic) NSView *notificationsPolicyView; // @synthesize notificationsPolicyView=_notificationsPolicyView;
@property(retain, nonatomic) NSView *preferencesPolicyView; // @synthesize preferencesPolicyView=_preferencesPolicyView;
@property(nonatomic) __weak NSView *policyContainerView; // @synthesize policyContainerView=_policyContainerView;
@property(nonatomic) __weak NSTextField *policiesPlaceholderLabel; // @synthesize policiesPlaceholderLabel=_policiesPlaceholderLabel;
@property(nonatomic) __weak NSView *policiesPlaceholderView; // @synthesize policiesPlaceholderView=_policiesPlaceholderView;
@property(nonatomic) __weak NSPopUpButton *defaultPolicyPopUpButton; // @synthesize defaultPolicyPopUpButton=_defaultPolicyPopUpButton;
@property(nonatomic) __weak NSOutlineView *policyOutlineView; // @synthesize policyOutlineView=_policyOutlineView;
@property(nonatomic) __weak NSBox *policyBorderBox; // @synthesize policyBorderBox=_policyBorderBox;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NSTextField *preferenceDescriptionTextField; // @synthesize preferenceDescriptionTextField=_preferenceDescriptionTextField;
@property(nonatomic) __weak NSTableView *preferencesTableView; // @synthesize preferencesTableView=_preferencesTableView;
- (void).cxx_destruct;
- (void)test_setUpPolicyPopUpButtonIfNecessary:(id)arg1 forPerSitePreference:(id)arg2;
- (void)test_getCurrentlyOpenAndConfiguredDomainsForPreference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_browserContentDidChange:(id)arg1;
- (void)managedPlugInsEditorPlugInCellView:(id)arg1 didTogglePlugInState:(BOOL)arg2;
- (BOOL)_shouldShowPlugInAsEnabled:(id)arg1;
- (id)_informationForPreference:(id)arg1;
- (void)_managedPlugInHostPoliciesPolicyDidChange:(id)arg1;
- (void)_didChangeManagedPlugInList;
- (id)_rowIndexesForHostPolicies:(id)arg1;
- (id)_selectedHostPolicies;
- (void)_refreshPlugInList;
- (long long)_tableRowIndexOfPlugInWithPreference:(id)arg1;
- (long long)_plugInOffsetInPreferencesTableView;
- (id)_selectedDomains;
- (void)_saveCurrentlySelectedSubPane;
- (void)_restoreLastSelectedSubPane;
- (BOOL)_shouldSelectPreferenceValue:(id)arg1 forPerSitePreference:(id)arg2 inButton:(id)arg3;
- (void)_updateRemoveButtonState;
- (void)_setUpPolicyPopUpButtonIfNecessary:(id)arg1 forPerSitePreference:(id)arg2;
- (BOOL)_shouldIncludeWebGLInPreferences;
- (void)_initializePerSitePreferencesAndPreferencesToManagers;
- (id)_managerForPreference:(id)arg1;
- (id)_currentlySelectedPlugIn;
- (id)_currentlySelectedPreference;
- (id)_domainsForCurrentlyOpenTabs;
- (void)_getCurrentlyOpenAndConfiguredDomainsForPreference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_bestWidthOfPreferenceContent;
- (id)_selectedRowsAfterRestoringPreviousSelection:(id)arg1;
- (void)_updatePolicies;
- (void)_updateTableContainerWidth;
- (void)_updatePreferencePaneForSelectedPreference;
- (id)_plugInCellViewForTableView:(id)arg1 plugIn:(id)arg2;
- (id)_preferenceCellViewForTableView:(id)arg1 preference:(id)arg2;
- (id)_groupCellViewForTableView:(id)arg1 row:(long long)arg2;
- (void)perSitePreferenceManager:(id)arg1 didUpdateValueForPreference:(id)arg2 onDomain:(id)arg3 toValue:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)_updateWidestNonPlugInTableCellViewWidthForCellView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)safariHelpAnchor;
- (void)_showWebsitesPreferences;
- (void)openPreference:(id)arg1;
- (void)clearSelectedPreferenceValues:(id)arg1;
- (void)defaultPolicyDidChange:(id)arg1;
- (void)policyDidChange:(id)arg1;
@property(readonly, nonatomic) NSDictionary *preferencesToManagers; // @synthesize preferencesToManagers=_preferencesToManagers;
@property(readonly, nonatomic) NSArray *perSitePreferences; // @synthesize perSitePreferences=_perSitePreferences;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)willBeDisplayed;
- (void)initializeFromDefaults;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

