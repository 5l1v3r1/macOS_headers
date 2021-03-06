//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCReadingHistoryObserving-Protocol.h"
#import "TUWindowToolbarItemHandlerProviding-Protocol.h"

@class FCPurchaseController, FCReadingHistory, NSString;
@protocol FCHeadlineProviding, FCNewsAppConfigurationManager;

@interface FRArticleToolbarLikeDislikeHandlerProvider : NSObject <FCReadingHistoryObserving, TUWindowToolbarItemHandlerProviding>
{
    id <FCHeadlineProviding> _headline;
    FCReadingHistory *_readingHistory;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    FCPurchaseController *_purchaseController;
}

@property(readonly, nonatomic) FCPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (id)dislikeStoryHandler;
- (id)likeStoryHandler;
- (id)toolbarItemHandlers;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (BOOL)isSpotlightArticle;
- (void)dealloc;
- (id)initWithHeadline:(id)arg1 readingHistory:(id)arg2 appConfigurationManager:(id)arg3 purchaseController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

