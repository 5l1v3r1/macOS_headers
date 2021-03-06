//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXFeedSectionInfo.h>

@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo
{
    PLPhotoLibrary *_photoLibrary;
    long long _countOfItems;
}

@property(readonly, nonatomic) long long countOfItems; // @synthesize countOfItems=_countOfItems;
- (id)photoLibrary;
- (void).cxx_destruct;
- (id)captionForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)albumTitle;
- (id)date;
- (BOOL)isLoaded;
- (long long)sectionType;
- (id)initWithPhotoLibrary:(id)arg1;

@end

