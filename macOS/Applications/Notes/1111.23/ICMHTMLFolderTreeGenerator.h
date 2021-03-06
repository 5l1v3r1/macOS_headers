//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTreeController;

@interface ICMHTMLFolderTreeGenerator : NSObject
{
    NSTreeController *_backingController;
    NSArray *_backingContent;
}

+ (id)_persistentFolderSortDescriptors;
+ (id)_accountSectionSortDescriptors;
+ (id)keyPathsForValuesAffectingTreeNodes;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *backingContent; // @synthesize backingContent=_backingContent;
@property(retain, nonatomic) NSTreeController *backingController; // @synthesize backingController=_backingController;
- (id)_treeNodesFromBackingFolders:(id)arg1;
- (void)_populateTreeFromBackingStore;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) __weak NSArray *treeNodes;
- (void)_objectsChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

