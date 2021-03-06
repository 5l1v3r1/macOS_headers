//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKSelectionDispatchReceiver.h"

@class KNDocumentRoot, NSString, TSKSelectionPathTransformer;

@interface KNViewStateSelectionDispatchReceiver : NSObject <TSKSelectionDispatchReceiver>
{
    KNDocumentRoot *_documentRoot;
    TSKSelectionPathTransformer *_selectionPathTransformer;
}

@property(retain, nonatomic) TSKSelectionPathTransformer *selectionPathTransformer; // @synthesize selectionPathTransformer=_selectionPathTransformer;
- (void).cxx_destruct;
- (void)endTransformingCurrentSelectionPaths;
- (void)transformCurrentSelectionPathsUsingOperationTransformer:(id)arg1;
- (void)beginTransformingCurrentSelectionPaths;
- (id)newRootSelectionTransformerForSelectionPath:(id)arg1;
- (void)dispatchSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

