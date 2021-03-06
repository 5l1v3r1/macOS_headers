//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXPresentationAttributesManager-Protocol.h>

@class NSHashTable, NSString, SXPresentationAttributes;

@interface SXPresentationAttributesManager : NSObject <SXPresentationAttributesManager>
{
    SXPresentationAttributes *_presentationAttributes;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SXPresentationAttributes *presentationAttributes; // @synthesize presentationAttributes=_presentationAttributes;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)attributesChangedFrom:(id)arg1 to:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

