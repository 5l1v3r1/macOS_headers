//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNObservationsCache : NSObject
{
    NSMapTable *_observationsCache;
}

- (void).cxx_destruct;
- (id)observationsForRequest:(id)arg1 testedKeyHandler:(CDUnknownBlockType)arg2;
- (void)setObservations:(id)arg1 forKey:(id)arg2;
- (id)observationsForKey:(id)arg1;
- (id)init;

@end

