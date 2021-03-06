//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURL;

@interface PFExportGIFRequest : NSObject <NSCopying>
{
    BOOL _shouldDither;
    BOOL _synchronous;
    double _ditherDepth;
    double _maximumFrameRate;
    unsigned long long _maximumFrameSize;
    NSURL *_videoURL;
}

+ (BOOL)_exportGIFToURL:(id)arg1 request:(id)arg2 progress:(CDUnknownBlockType)arg3 error:(id *)arg4;
+ (struct CGImage *)_createProcessedGIFImage:(struct opaqueCMSampleBuffer *)arg1 options:(id)arg2 error:(id *)arg3;
+ (struct opaqueCMSampleBuffer *)_copyNextSampleBuffer:(id)arg1 reader:(id)arg2 time:(CDStruct_1b6d18a9 *)arg3 didReachEnd:(char *)arg4 error:(id *)arg5;
+ (void)runExport:(id)arg1 toURL:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)runExport:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_exportQueue;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic, getter=isSynchronous) BOOL synchronous; // @synthesize synchronous=_synchronous;
@property(nonatomic) unsigned long long maximumFrameSize; // @synthesize maximumFrameSize=_maximumFrameSize;
@property(nonatomic) double maximumFrameRate; // @synthesize maximumFrameRate=_maximumFrameRate;
@property(nonatomic) double ditherDepth; // @synthesize ditherDepth=_ditherDepth;
@property(nonatomic) BOOL shouldDither; // @synthesize shouldDither=_shouldDither;
- (void)_ensureValidInputs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoURL:(id)arg1;

@end

