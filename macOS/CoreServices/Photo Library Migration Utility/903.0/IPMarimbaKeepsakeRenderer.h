//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class KHProject;

@interface IPMarimbaKeepsakeRenderer : NSObject
{
    KHProject *_project;
    struct CGSize _size;
}

@property struct CGSize size; // @synthesize size=_size;
@property(retain) KHProject *project; // @synthesize project=_project;
- (id).cxx_construct;
- (double)aspectRatio;
- (id)createImageProperties;
- (id)createPaths;
- (struct CGImage *)imageForIndex:(long long)arg1 size:(struct CGSize)arg2;
- (void)dealloc;

@end

