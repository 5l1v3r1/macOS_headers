//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CVPixelBufferCacheItem : NSObject
{
    NSArray *_buffers;
    NSArray *_DODs;
    struct CGSize _fullSize;
}

@property(readonly, nonatomic) struct CGSize fullSize; // @synthesize fullSize=_fullSize;
@property(readonly, nonatomic) NSArray *DODs; // @synthesize DODs=_DODs;
@property(readonly, nonatomic) NSArray *buffers; // @synthesize buffers=_buffers;
- (void).cxx_destruct;
- (id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(struct CGSize)arg3;

@end

