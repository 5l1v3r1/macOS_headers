//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class AVCompositionInternal, NSArray, NSDictionary;

@interface AVComposition : AVAsset <NSSecureCoding, NSMutableCopying>
{
    AVCompositionInternal *_priv;
}

+ (void)initialize;
+ (BOOL)expectsPropertyRevisedNotifications;
+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *URLAssetInitializationOptions;
- (BOOL)_setURLAssetInitializationOptions:(id)arg1 error:(id *)arg2;
- (id)_mediaSelectionGroupDictionaries;
- (void)_setNaturalSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize naturalSize;
- (BOOL)_clientProvidesNaturalSize;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
@property(readonly, nonatomic) NSArray *tracks;
- (id)_mutableTracks;
- (id)_newTrackForIndex:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigAsset *)_figAsset;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (void)_loadAssetInspectorAndLoaderOnce;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)_initWithComposition:(id)arg1;
- (int)_createEmptyMutableCompositionIfNeeded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

