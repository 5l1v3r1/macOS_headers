//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSUICollectionReusableView.h>

@class GKSearchBar, NSArray;

@interface GKSearchBarView : NSUICollectionReusableView
{
    GKSearchBar *_searchBar;
    NSArray *_searchBarConstraints;
}

+ (double)defaultHeight;
@property(retain, nonatomic) NSArray *searchBarConstraints; // @synthesize searchBarConstraints=_searchBarConstraints;
@property(retain, nonatomic) GKSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)searchTextChanged:(id)arg1;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)arg1;

@end

