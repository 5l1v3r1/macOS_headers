//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXSectionedDataSource;
@protocol PXGSublayoutProvider;

@protocol PXGDataSourceDrivenLayout <NSObject>
- (void)applySectionedChangedDetailsForSingleSection:(NSArray *)arg1 dataSourceAfterChanges:(PXSectionedDataSource *)arg2 changeMediaVersionHandler:(BOOL (^)(struct PXSimpleIndexPath, struct PXSimpleIndexPath))arg3;
- (void)applySectionedChangeDetails:(NSArray *)arg1 dataSourceAfterChanges:(PXSectionedDataSource *)arg2 sublayoutProvider:(id <PXGSublayoutProvider>)arg3 outChangedSections:(id *)arg4 outSectionsWithItemChanges:(id *)arg5 changeMediaVersionHandler:(BOOL (^)(struct PXSimpleIndexPath, struct PXSimpleIndexPath))arg6;
@end

