//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseAlbumsController.h"

@class RDFolder;

@interface IPXDatabaseProjectsController : IPXDatabaseAlbumsController
{
    RDFolder *_parentFolderForSorting;
}

- (void).cxx_destruct;
- (void)libraryUpdatedAlbum:(id)arg1 forKeyPaths:(id)arg2;
- (void)libraryUpdatedFolder:(id)arg1 forKeyPaths:(id)arg2;
- (id)parentFolderForSorting;
- (id)customSortContainerUuid;
- (void)locked_arrangedObjectsWillGainObjects:(id)arg1;
- (id)initialObjectsCollectionQueryForDatabase:(id)arg1;
- (void)updateSortSettings;
- (id)initWithDatabase:(id)arg1;

@end

