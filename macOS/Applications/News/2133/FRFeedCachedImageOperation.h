//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FRFeedImageGenerationOptions, UIImage;

@interface FRFeedCachedImageOperation : NSOperation
{
    FRFeedImageGenerationOptions *_options;
    UIImage *_image;
}

@property(retain) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) FRFeedImageGenerationOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)main;
- (id)initWithOptions:(id)arg1;

@end

