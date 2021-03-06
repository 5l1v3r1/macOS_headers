//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXVersionsMonitorDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"
#import "RDLibraryMessagesReceiver-Protocol.h"

@class IPXLibrary, IPXMetadataInfoViewController, IPXSelectedVersions, IPXSelectionLite, LiAddressList, NSArray, NSCountedSet, NSMapTable, NSMutableSet, NSPanel, NSString, NSUndoManager, RDDatabase;
@protocol OS_dispatch_queue;

@interface IPXSelectedVersionsMetadataController : NSObject <IPXVersionsMonitorDelegate, NSWindowDelegate, PFResourceAccessClient, RDLibraryMessagesReceiver>
{
    IPXSelectionLite *_selection;
    IPXSelectedVersions *_selectedVersions;
    NSMutableSet *_registeredDatabaseUUIDs;
    NSMapTable *_preloadPropertiesForTables;
    RDDatabase *_databaseUsedForPreloadPropertiesTables;
    NSCountedSet *_registeredDBs;
    LiAddressList *_representedVersionsAddressList;
    IPXLibrary *_representedLibrary;
    NSMapTable *_activeVersionMonitors;
    IPXMetadataInfoViewController *_metadataViewController;
    NSPanel *_popoverWindow;
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    int _mode;
    NSUndoManager *_undoManager;
}

@property(readonly, nonatomic) IPXSelectedVersions *selectedVersions; // @synthesize selectedVersions=_selectedVersions;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)resourceWillShutdown:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)isPopoverVisible;
- (void)togglePopover:(id)arg1;
- (void)hidePopover:(id)arg1;
- (void)showPopover:(id)arg1;
- (void)_setWindowTitleForSelection:(id)arg1 versions:(id)arg2;
- (id)_popoverWindow;
- (void)versionsMonitor:(id)arg1 metadataChanged:(id)arg2 forVersions:(id)arg3;
- (id)reportedMetadataChangesForVersionsMonitor:(id)arg1;
- (id)changeReportingDispatchQueueForVersionsMonitor:(id)arg1;
@property(readonly, nonatomic) NSArray *representedVersions;
- (void)_versionPropertiesChanged:(id)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)_appSelectionChanged:(id)arg1;
- (void)_handleSelectionChange:(id)arg1;
- (void)_assignSelectedVersionsForSelection:(id)arg1;
- (id)_fetchSelectionLite;
- (void)_setRepresentedLibrary:(id)arg1;
- (void)_stopObservingLibrary:(id)arg1;
- (void)_beginObservingLibrary:(id)arg1;
- (int)_infoPanelModeForSelection:(id)arg1;
- (void)_setRepresentedVersions:(id)arg1;
- (void)_stopObservingVersionId:(id)arg1 forDatabase:(id)arg2;
- (void)_beginObservingVersionId:(id)arg1 forDatabase:(id)arg2;
- (void)_unregisterForDatabase:(id)arg1;
- (void)_registerForDatabase:(id)arg1;
- (BOOL)_isRegisteredForDatabase:(id)arg1;
- (id)_preparedVersionsForSelection:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

