//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KNPlaybackExportPreset : NSObject
{
    struct CGSize _maxFrameSize;
    NSString *_preferredOutputFileType;
}

@property(readonly, nonatomic) NSString *preferredOutputFileType; // @synthesize preferredOutputFileType=_preferredOutputFileType;
@property(readonly, nonatomic) struct CGSize maxFrameSize; // @synthesize maxFrameSize=_maxFrameSize;
- (void).cxx_destruct;
- (struct CGSize)frameSizeForInputFrameSize:(struct CGSize)arg1;
- (id)initWithMaxFrameSize:(struct CGSize)arg1;

@end

