//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProgress.h"

@class FPProgressProxy;

__attribute__((visibility("hidden")))
@interface _FPParentProgress : NSProgress
{
    FPProgressProxy *_progressProxy;
}

- (void).cxx_destruct;
@property(readonly) FPProgressProxy *progressProxy; // @synthesize progressProxy=_progressProxy;
- (void)setProgressProxy:(id)arg1;

@end

