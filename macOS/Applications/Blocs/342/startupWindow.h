//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSApplicationDelegate.h"
#import "NSFileManagerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSBox, NSButton, NSImageView, NSScrollView, NSString, NSTableView, NSTextField, NSTouchBar, NSView, NSVisualEffectView, assetsLibrary, mainAppWindow;

@interface startupWindow : NSWindowController <NSApplicationDelegate, NSFileManagerDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSScrollView *recentFilesContainer;
    NSTableView *recentFileTable;
    NSButton *newDocButton;
    NSButton *openDocButton;
    NSView *openDocButtonEmptyView;
    NSButton *closeApp;
    NSVisualEffectView *vibrancySideBar;
    NSImageView *mainIcon;
    NSTextField *versionNumber;
    NSButton *openDocsLink;
    NSButton *communityLink;
    NSButton *twitterLink;
    NSButton *newsletterLink;
    NSTextField *mainAppTitle;
    NSTextField *betaVersionLabel;
    NSTextField *wordpressLabel;
    NSBox *topDivider;
    NSTouchBar *startScreenTouchBar;
    assetsLibrary *assetLibraryController;
    mainAppWindow *mainAppWindowController;
}

- (void).cxx_destruct;
- (void)callBackAlert:(id)arg1 withTitle:(id)arg2 withButtonTitle:(id)arg3 withButtonTwoTitle:(id)arg4 withButtonCount:(BOOL)arg5;
- (void)checkBetaFunctions;
- (void)initTouchBar;
- (void)fadeOutWindow:(id)arg1;
- (void)openUserDocs:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)closeApp;
- (void)closeWindow;
- (BOOL)processFile:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)openDocWindow;
- (void)newDocWindow;
- (void)openFileInMain;
- (void)buttonActionHandler:(id)arg1;
- (void)showFileInFinder:(id)arg1;
- (void)addTableContextMenu;
- (void)tableRowClick:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)launchViaFileCheck;
- (void)refreshTable;
- (void)populateRecentFileList;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)setStartWindowAppIcon;
- (void)setWindowThemeColor;
- (void)fadeInObj:(id)arg1;
- (void)startAnimations;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

