//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SUWorkspaceViewController.h"

#import "SUDraggableDiskIconViewDataSource-Protocol.h"
#import "SUDraggableDiskIconViewDelegate-Protocol.h"

@class NSString, NSTextField, SUDiskUsageView, SUInfoTableView;

@interface SUVolumeWorkspaceViewController : SUWorkspaceViewController <SUDraggableDiskIconViewDataSource, SUDraggableDiskIconViewDelegate>
{
    NSTextField *_sharingInfoField;
    SUInfoTableView *_infoTable;
    SUDiskUsageView *_diskUsageView;
}

@property __weak SUDiskUsageView *diskUsageView; // @synthesize diskUsageView=_diskUsageView;
@property __weak SUInfoTableView *infoTable; // @synthesize infoTable=_infoTable;
@property __weak NSTextField *sharingInfoField; // @synthesize sharingInfoField=_sharingInfoField;
- (void).cxx_destruct;
- (void)updateDiskIcon;
- (void)setRepresentedDisksIconToImage:(id)arg1;
- (void)volumeRenamed:(id)arg1;
- (id)volumeMountPointToDrag;
- (void)viewDidLoad;
- (id)initWithDisk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

