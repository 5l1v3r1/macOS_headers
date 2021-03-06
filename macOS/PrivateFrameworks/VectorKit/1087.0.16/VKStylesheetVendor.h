//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, VKResourceManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VKStylesheetVendor : NSObject <GEOResourceManifestTileGroupObserver>
{
    unsigned int _tileGroupIdentifier;
    VKResourceManager *_resourceManager;
    NSObject<OS_dispatch_queue> *_stylesheetMapEditQueue;
    NSMutableDictionary *_stylesheetMap;
    NSObject<OS_dispatch_queue> *_localizationToAttributeValueQueue;
    NSDictionary *_localizationToAttributeValue;
}

- (int)styleAttributeValueForLocalization:(id)arg1;
- (id)stylesheetWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(long long)arg4;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resetStylesheetCache;
- (void)dealloc;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

