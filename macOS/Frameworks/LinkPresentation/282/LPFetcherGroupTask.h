//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LPFetcher, LPFetcherResponse;

__attribute__((visibility("hidden")))
@interface LPFetcherGroupTask : NSObject
{
    BOOL _hasStarted;
    LPFetcher *_fetcher;
    LPFetcherResponse *_response;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property(retain, nonatomic) LPFetcherResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) LPFetcher *fetcher; // @synthesize fetcher=_fetcher;

@end

