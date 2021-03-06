//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSAppsDelegate.h"
#import "BSSpacesDelegate.h"
#import "BSTrashDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSUserNotificationCenterDelegate.h"
#import "SCEventListenerProtocol.h"

@class BSBars, BSControls, BSPrefs, BSSpaces, CalendarWindow, DialWindow, NSArray, NSDictionary, NSEvent, NSImageView, NSLock, NSMutableArray, NSStatusItem, NSString, NSTextField, NSTimer, NSView, NSWindow, PreviewWindow, SCEvents, TooltipWindow;

@interface BSAppDelegate : NSObject <NSApplicationDelegate, SCEventListenerProtocol, NSUserNotificationCenterDelegate, BSAppsDelegate, BSTrashDelegate, BSSpacesDelegate>
{
    BSPrefs *prefs;
    BSBars *bars;
    BSControls *controls;
    BOOL didSetup;
    NSTimer *clockSetupTimer;
    NSTimer *clockTimer;
    NSEvent *localModifierKeyMonitor;
    NSEvent *globalModifierKeyMonitor;
    NSTimer *activityModeTimer;
    BOOL AXTrustedLost;
    BOOL dockSwervedInFront;
    BOOL activeSpaceChanged;
    BOOL universalOwner;
    SCEvents *applicationsAndPreferencePanesFileMonitor;
    int *cpuInfo;
    unsigned int numCpuInfo;
    unsigned int numCPUs;
    NSLock *CPUUsageLock;
    unsigned long long previousTotalTime;
    unsigned long long totalTime;
    unsigned long long totalTimeDelta;
    NSMutableArray *conflictingAppBundleIdentifiers;
    NSArray *localComponents;
    int dockRows;
    long long dockSize;
    NSMutableArray *iconOverrideCacheIcons;
    NSMutableArray *iconOverrideCacheNames;
    BOOL initialAXTrustedStatus;
    BOOL activityMode;
    int AXStatus;
    NSWindow *aboutWindow;
    NSWindow *welcomeWindow;
    NSWindow *liteWindow;
    NSWindow *registrationWindow;
    NSWindow *preferencesWindow;
    NSWindow *masUpgradeWindow;
    PreviewWindow *previewWindow;
    NSView *barMenuUserView;
    NSImageView *barMenuUserViewImageView;
    NSTextField *barMenuUserViewUsernameLabel;
    NSStatusItem *statusItem;
    NSMutableArray *timepieces;
    NSMutableArray *timepieceTitles;
    NSMutableArray *timepiecePaths;
    NSDictionary *timepiece;
    NSString *timepieceTitle;
    NSString *timepiecePath;
    BSSpaces *sharedSpaces;
    NSWindow *_feedbackWindow;
    TooltipWindow *_tooltipWindow;
    CalendarWindow *_calendarWindow;
    DialWindow *_dialWindow;
}

@property DialWindow *dialWindow; // @synthesize dialWindow=_dialWindow;
@property CalendarWindow *calendarWindow; // @synthesize calendarWindow=_calendarWindow;
@property TooltipWindow *tooltipWindow; // @synthesize tooltipWindow=_tooltipWindow;
@property NSWindow *feedbackWindow; // @synthesize feedbackWindow=_feedbackWindow;
@property(retain, nonatomic) BSSpaces *sharedSpaces; // @synthesize sharedSpaces;
@property(retain, nonatomic) NSString *timepiecePath; // @synthesize timepiecePath;
@property(retain, nonatomic) NSString *timepieceTitle; // @synthesize timepieceTitle;
@property(retain, nonatomic) NSDictionary *timepiece; // @synthesize timepiece;
@property(retain, nonatomic) NSMutableArray *timepiecePaths; // @synthesize timepiecePaths;
@property(retain, nonatomic) NSMutableArray *timepieceTitles; // @synthesize timepieceTitles;
@property(retain, nonatomic) NSMutableArray *timepieces; // @synthesize timepieces;
@property(retain, nonatomic) NSStatusItem *statusItem; // @synthesize statusItem;
@property BOOL activityMode; // @synthesize activityMode;
@property int AXStatus; // @synthesize AXStatus;
@property BOOL initialAXTrustedStatus; // @synthesize initialAXTrustedStatus;
@property NSTextField *barMenuUserViewUsernameLabel; // @synthesize barMenuUserViewUsernameLabel;
@property NSImageView *barMenuUserViewImageView; // @synthesize barMenuUserViewImageView;
@property NSView *barMenuUserView; // @synthesize barMenuUserView;
@property PreviewWindow *previewWindow; // @synthesize previewWindow;
@property NSWindow *masUpgradeWindow; // @synthesize masUpgradeWindow;
@property NSWindow *preferencesWindow; // @synthesize preferencesWindow;
@property NSWindow *registrationWindow; // @synthesize registrationWindow;
@property NSWindow *liteWindow; // @synthesize liteWindow;
@property NSWindow *welcomeWindow; // @synthesize welcomeWindow;
@property NSWindow *aboutWindow; // @synthesize aboutWindow;
- (void).cxx_destruct;
- (void)addToUBarFavourites:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)pathWatcher:(id)arg1 eventOccurred:(id)arg2;
- (void)systemPreferencesBadgeCountChanged:(id)arg1;
- (void)appStoreBadgeCountChanged:(id)arg1;
- (void)iTunesPlayerInfoChanged:(id)arg1;
- (void)menuBarStateChanged:(id)arg1;
- (void)downloadFileFinished:(id)arg1;
- (void)dockPrefsChanged:(id)arg1;
- (void)systemDateTimeNumberChanged:(id)arg1;
- (void)systemLanguageChanged:(id)arg1;
- (void)systemTransparencyChanged:(id)arg1;
- (void)checkForFullscreenAndAutohideAccordingly;
- (void)workspaceNotificationReceived:(id)arg1;
- (void)systemTintChangedNotification:(id)arg1;
- (void)modifierKeyChanged:(id)arg1;
- (BOOL)isDockBlockingBar;
- (void)setGlobalCursor:(id)arg1;
- (void)lockScreen;
- (void)removeBarFromLoginItems;
- (void)addBarToLoginItems;
- (BOOL)isBarInLoginItems;
- (struct OpaqueLSSharedFileListItemRef *)itemRefInLoginItems;
- (BOOL)isUTIofApplicationType:(id)arg1;
- (BOOL)isUTIofVolumeType:(id)arg1;
- (BOOL)isUTIofFolderType:(id)arg1;
- (BOOL)isPathAnApplication:(id)arg1;
- (BOOL)isPathAFolder:(id)arg1;
- (BOOL)isPathAVolume:(id)arg1;
- (BOOL)isPathInvisible:(id)arg1;
- (BOOL)isPathAnAlias:(id)arg1;
- (void)switchToWindowWithApp:(id)arg1 andWID:(int)arg2;
- (void)removeTerminatedAppWithPID:(int)arg1;
- (id)overrideIconWithName:(id)arg1;
- (id)iconForFileWithPath:(id)arg1;
- (id)iconForAppWithPath:(id)arg1;
- (id)iconForAppWithBundleIdentifier:(id)arg1;
- (void)checkForConflictingApps:(id)arg1;
- (void)clearActivityForAllApps;
- (void)updateActivityForAllApps;
- (void)initialAppsLoadedPrepareTasks;
- (void)setFolderOptionSortBy:(long long)arg1 forFolderPath:(id)arg2;
- (long long)getFolderOptionSortByForFolderPath:(id)arg1;
- (void)purgeMissingAppsFromRegistry;
- (void)removePathFromFavourites:(id)arg1;
- (void)removeControlFromFavourites:(id)arg1;
- (void)removeAppFromFavourites:(id)arg1;
- (void)addPathToFavourites:(id)arg1 onTrans:(BOOL)arg2 asFirst:(BOOL)arg3;
- (void)addPathToFavourites:(id)arg1 onTrans:(BOOL)arg2;
- (void)addControlToFavourites:(id)arg1;
- (void)addPathToFavourites:(id)arg1;
- (void)addAppToFavourites:(id)arg1;
- (BOOL)isControlFavourited:(id)arg1;
- (BOOL)isPathFavourited:(id)arg1;
- (BOOL)isAppFavourited:(id)arg1;
- (void)removeAppFromExclusions:(id)arg1;
- (void)addAppToExclusions:(id)arg1;
- (int)getNonExcludedAppCountFromApps:(id)arg1;
- (BOOL)isAppExcluded:(id)arg1;
- (BOOL)isAppIncluded:(id)arg1;
- (id)localizedTitleVersion:(id)arg1;
- (void)appWantsAttentionCancelled:(id)arg1;
- (void)appWantsAttention:(id)arg1;
- (void)appUnresponsive:(id)arg1;
- (void)appResponsive:(id)arg1;
- (void)appDeactivated:(id)arg1;
- (void)appActivated:(id)arg1;
- (void)appUnhidden:(id)arg1;
- (void)appHidden:(id)arg1;
- (void)appLaunched:(id)arg1;
- (void)appLaunching:(id)arg1;
- (void)appRemoved:(int)arg1;
- (void)appAdded:(id)arg1;
- (BOOL)isOrderingAlphabetical;
- (id)sortApps:(id)arg1;
- (void)spacesUpdated;
- (void)trashFilled;
- (void)trashEmptied;
- (void)reloadTimepieces;
- (void)loadTimepiecesAtPath:(id)arg1;
- (void)updateBarMenuIcon;
- (void)systemClockUpdate;
- (void)systemClockDidChange:(id)arg1;
- (void)startSystemClockTimer;
- (void)setupSystemClock;
- (void)updateBuiltInFavourites;
- (void)updateAlignment;
- (void)removeStatusItem;
- (void)addStatusItem;
- (void)updateStatusItemState;
- (void)updateLoginItemsWithExplicitQuit:(BOOL)arg1;
- (void)quitFromMenuBar;
- (void)relaunch;
- (void)setup;
- (BOOL)isDocklessModeOn;
- (BOOL)accessibilityCheck;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)applicationWillTerminate:(id)arg1;
- (id)getBuyNowURL;
- (void)handleURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)applicationDidChangeScreenParameters:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

