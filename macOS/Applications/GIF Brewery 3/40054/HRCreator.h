//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAssetImageGenerator, HRDocument, HREffectApplier, NSObject<OS_dispatch_queue>;

@interface HRCreator : NSObject
{
    BOOL _cancelled;
    AVAssetImageGenerator *_generator;
    NSObject<OS_dispatch_queue> *_workQueue;
    HRDocument *_document;
}

@property(nonatomic) __weak HRDocument *document; // @synthesize document=_document;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) AVAssetImageGenerator *generator; // @synthesize generator=_generator;
- (void).cxx_destruct;
- (id)fileType;
- (void)createWithFrames:(id)arg1 withUpdateBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;
- (void)cancelLoad;
- (void)cancel;
- (void)loadImages:(id)arg1 alphaLast:(BOOL)arg2 loading:(CDUnknownBlockType)arg3 onCompletion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) AVAsset *asset;
@property(readonly, nonatomic) HREffectApplier *applier;
- (void)dealloc;

@end

