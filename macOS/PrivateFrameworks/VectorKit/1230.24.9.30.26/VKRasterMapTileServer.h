//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface VKRasterMapTileServer : NSObject
{
    NSMutableDictionary *_activeTileCreators;
    NSMutableDictionary *_pendingRequests;
    NSMutableSet *_tileCreators;
    unsigned int _superTileSize;
    NSObject<OS_dispatch_queue> *_homeQueue;
}

@property(readonly, nonatomic) unsigned int superTileSize; // @synthesize superTileSize=_superTileSize;
- (void)_renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
- (void)dealloc;
- (id)initWithSuperTileSize:(unsigned int)arg1 homeQueue:(id)arg2;
- (id)init;

@end

