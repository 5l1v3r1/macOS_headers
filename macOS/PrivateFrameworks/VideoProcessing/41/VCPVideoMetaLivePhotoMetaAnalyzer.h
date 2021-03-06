//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableData, VCPVideoMetaFocusAnalyzer, VCPVideoMetaMotionAnalyzer;

@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer
{
    struct CGVector _prevEstimatedCenterMv;
    NSMutableData *_deSerializedMetaBuffer;
    VCPVideoMetaFocusAnalyzer *_metaFocusAnalyzer;
    VCPVideoMetaMotionAnalyzer *_metaMotionAnalyzer;
}

+ (id)defaultDesiredKeys;
- (void).cxx_destruct;
- (id)privateResults;
- (int)finalizeAnalysis;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;
- (int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2;
- (int)convertLivePhotoStruct:(struct FigLivePhotoMetadata *)arg1 toDictionary:(id)arg2;
- (id)init;

@end

