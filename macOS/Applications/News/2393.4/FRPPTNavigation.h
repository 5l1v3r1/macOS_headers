//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRPPTNavigation : NSObject
{
}

+ (id)waitForArticleWithIDToLoad:(id)arg1;
+ (id)waitForFeedToHaveMinCells:(unsigned long long)arg1 scrollToTop:(BOOL)arg2;
+ (id)waitForNotificationWithName:(id)arg1;
+ (id)nextArticleButtonTapper;
+ (id)backButtonTapper;
+ (id)articleTapperWithContent:(id)arg1;
+ (id)articleTapperWithContent:(id)arg1 timeout:(double)arg2;
+ (id)articleTapperWithArticleID:(id)arg1;
+ (id)articleTapperWithArticleID:(id)arg1 timeout:(double)arg2;
+ (id)cellTapperWithTimeout:(double)arg1 targetCollectionViewType:(long long)arg2 test:(CDUnknownBlockType)arg3;
+ (id)navigateToFeedWithTagID:(id)arg1;
+ (id)moreChannelsForSearchWithText:(id)arg1;
+ (id)moreArticlesForSearchWithText:(id)arg1;
+ (id)_moreFromForSearchWithText:(id)arg1 resultsViewControllerWork:(CDUnknownBlockType)arg2;
+ (id)searchForText:(id)arg1;
+ (id)showMagazineFeed;
+ (id)showHistory;
+ (id)showSaved;
+ (id)_contentTableViewAfterTappingFollowingCellWithName:(id)arg1;
+ (id)showFollowing;
+ (id)flintArticleContentViewController;
+ (id)specialEventsViewController;
+ (id)pageViewController;
+ (id)todayPluginCollectionView;
+ (id)feedCollectionView;
+ (id)feedCollectionViewController;
+ (id)sectionsViewController;
+ (id)pptRouter;
+ (id)resolver;
+ (id)tabBarController;
+ (id)splitViewController;
+ (id)rootViewController;
+ (id)waitForViewController:(id)arg1 toHaveSubviewOfClass:(Class)arg2;
+ (id)waitForViewController:(id)arg1 toHaveSubviewPassing:(CDUnknownBlockType)arg2;
+ (id)waitForWindowToHaveSubcontrollerClass:(Class)arg1;
+ (id)waitForWindowToHaveSubcontrollerPassing:(CDUnknownBlockType)arg1;
+ (id)waitForWindowToHaveSubviewOfClass:(Class)arg1;
+ (id)waitForWindowToHaveSubviewPassing:(CDUnknownBlockType)arg1;
+ (id)window;
+ (id)flintDataProviderForHeadline:(id)arg1;
+ (id)articleContentPool;
+ (id)readingHistory;
+ (id)readingList;
+ (id)subscriptionController;
+ (id)tagController;
+ (id)appConfigurationManager;
+ (id)cloudContext;
+ (id)feldsparContext;
+ (id)fr_applicationDelegate;
+ (id)applicationDelegate;
+ (id)application;

@end

