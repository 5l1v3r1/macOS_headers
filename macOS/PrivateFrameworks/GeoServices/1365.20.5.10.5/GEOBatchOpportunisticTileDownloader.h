//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTileRequesterDelegate-Protocol.h>

@class GEOTileKeyList, GEOTileRequester, NSString;
@protocol GEOBatchOpportunisticTileDownloaderDelegate, OS_dispatch_group, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface GEOBatchOpportunisticTileDownloader : NSObject <GEOTileRequesterDelegate>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    NSObject<OS_dispatch_group> *_preparationGroup;
    id <GEOBatchOpportunisticTileDownloaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_countryCode;
    NSString *_regionCode;
    BOOL _canceled;
    struct GEOOnce_s _started;
    struct GEOOnce_s _finished;
    GEOTileRequester *_activeRequester;
    GEOTileKeyList *_remainingKeysForActiveRequester;
    unsigned long long _successfulTiles;
    CDUnknownBlockType _tileRequesterCreationBlock;
}

- (void).cxx_destruct;
- (void)tileRequesterFinished:(id)arg1;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
- (void)_startRequesterForKeys:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3;
- (void)_requestNextBatch;
- (BOOL)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)_finish;
- (void)cancel;
- (void)start;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 countryCode:(id)arg3 region:(id)arg4 log:(id)arg5 logPrefix:(id)arg6 tileRequesterCreationBlock:(CDUnknownBlockType)arg7;
- (id)init;
- (void)downloadDidSucceedForTile:(struct _GEOTileKey *)arg1 downloadSize:(unsigned long long)arg2;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

