//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCDChangeHistoryClient, CNChangeHistoryAnchor, NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface CNCDChangeHistoryResultQuery : NSObject
{
    BOOL _shouldUnifyResults;
    CNCDChangeHistoryClient *_client;
    CNChangeHistoryAnchor *_startingAnchor;
    NSManagedObjectContext *_context;
}

+ (id)currentHistoryAnchorInContext:(id)arg1 error:(id *)arg2;
+ (id)anchorWithMostRecentTransaction:(id)arg1;
+ (id)queryForClient:(id)arg1 shouldUnifyResults:(BOOL)arg2 startingAnchor:(id)arg3 context:(id)arg4;
+ (id)changeHistoryResultForClient:(id)arg1 shouldUnifyResults:(BOOL)arg2 sinceAnchor:(id)arg3 context:(id)arg4 error:(id *)arg5;
+ (id)os_log;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CNChangeHistoryAnchor *startingAnchor; // @synthesize startingAnchor=_startingAnchor;
@property(readonly, nonatomic) BOOL shouldUnifyResults; // @synthesize shouldUnifyResults=_shouldUnifyResults;
@property(readonly, nonatomic) CNCDChangeHistoryClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)didPerformQuery;
- (void)configureResult:(id)arg1 forTransactions:(id)arg2;
- (id)requestForToken:(id)arg1;
- (id)lastTokenForClient;
- (id)transactions:(id *)arg1;
- (id)performQuery:(id *)arg1;
- (id)initWithClient:(id)arg1 shouldUnifyResults:(BOOL)arg2 startingAnchor:(id)arg3 context:(id)arg4;

@end

