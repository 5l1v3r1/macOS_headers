//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/CAMLWriterDelegate-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate>
{
    NSString *_resourceDir;
    int _serial;
    NSString *_imageFormat;
    NSDictionary *_imageEncodeOptions;
    BOOL _skipHiddenLayers;
}

@property BOOL skipHiddenLayers; // @synthesize skipHiddenLayers=_skipHiddenLayers;
@property(copy) NSDictionary *imageEncodeOptions; // @synthesize imageEncodeOptions=_imageEncodeOptions;
@property(copy) NSString *imageFormat; // @synthesize imageFormat=_imageFormat;
- (_Bool)CAMLWriter:(id)arg1 shouldEncodeObject:(id)arg2;
- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;
- (id)initWithResourceDir:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

