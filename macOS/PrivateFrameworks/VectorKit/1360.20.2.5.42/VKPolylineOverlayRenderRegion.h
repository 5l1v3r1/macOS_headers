//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VKPolylineOverlayRenderRegion : NSObject
{
    NSSet *_tiles;
    Box_3d7e3c2c _visibleRect;
    struct vector<VKTileKey, std::__1::allocator<VKTileKey>> _snappedTileKeys;
    struct MultiRectRegion _snappingRegion;
}

@property(readonly, nonatomic) Box_3d7e3c2c visibleRect; // @synthesize visibleRect=_visibleRect;
@property(readonly, nonatomic) NSSet *tiles; // @synthesize tiles=_tiles;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEquivalentToNewRegion:(id)arg1;
- (void)dealloc;
- (const struct MultiRectRegion *)snappingRegion;
- (id)initForKeysInView:(id)arg1 tiles:(id)arg2 allowsSnapping:(BOOL)arg3;

@end

