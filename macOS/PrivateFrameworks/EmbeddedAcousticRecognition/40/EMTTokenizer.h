//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLocale, NSObject<OS_dispatch_queue>, _EARFormatter;

@interface EMTTokenizer : NSObject
{
    _EARFormatter *_formatter;
    NSObject<OS_dispatch_queue> *_queue;
    NSLocale *_outputLocale;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSLocale *outputLocale; // @synthesize outputLocale=_outputLocale;
- (id)format:(id)arg1;
- (id)format:(id)arg1 preToPostItnMap:(id)arg2;
- (id)initWithModelURL:(id)arg1;

@end

