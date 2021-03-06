//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PAImaging/PAImageResponse-Protocol.h>

@class IPAColorProfile, NSDictionary, NSURL, PA2DBuffer, PAImageRequest;

@protocol PAImageResponseInternal <PAImageResponse>
@property(readonly) int format;
@property(readonly) IPAColorProfile *colorProfile;
@property(readonly) NSDictionary *cgImageProperties;
@property(readonly) PA2DBuffer *buffer;
@property(readonly) id cacheKey;
@property(readonly) PAImageRequest *imageRequest;
@property(readonly) BOOL scaled;
@property(retain, nonatomic) NSURL *imageURL;
@property(readonly) unsigned long long requestedSubsampleFactor;
@property(readonly) struct PFIntSize_st size;
- (void)transferAccess;
- (void)endAccess;
- (BOOL)beginAccess;
@end

