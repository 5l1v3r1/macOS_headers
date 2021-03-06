//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PIEImageAnalyzer : NSObject
{
    struct CGImage *mImageRef;
    NSString *mPhotoID;
}

@property(readonly) NSString *photoID; // @synthesize photoID=mPhotoID;
@property(readonly) struct CGImage *image; // @synthesize image=mImageRef;
- (void)dealloc;
- (id)determinePredominantColorsWithRegions;
@property(readonly) unsigned long long imageHeight;
@property(readonly) unsigned long long imageWidth;
- (id)initWithImage:(struct CGImage *)arg1;
- (id)initWithImage:(struct CGImage *)arg1 photoID:(id)arg2;

@end

