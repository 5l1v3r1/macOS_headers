//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSTLexicon-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSULocale;

@interface TSTSimpleLexicon : NSObject <TSTLexicon>
{
    TSULocale *_locale;
    NSMutableArray *_choicesCacheKeyLru;
    NSMutableDictionary *_choicesCache;
    NSArray *_allCandidates;
}

+ (int)tokenType;
+ (long long)choicePriority;
+ (Class)choiceClass;
@property(readonly, retain, nonatomic) TSULocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)p_gotLowMemoryNotification:(id)arg1;
- (void)p_processOneObject:(id)arg1 forPrefix:(id)arg2 outChoices:(id)arg3;
- (void)p_processCandidateObjects:(id)arg1 forPrefix:(id)arg2 outChoices:(id)arg3;
- (long long)p_compareObject:(id)arg1 toPrefix:(id)arg2;
- (id)p_getCandidateObjects;
- (id)i_getCandidateObjects;
- (void)reload;
- (long long)compareChoice:(id)arg1 toChoice:(id)arg2;
- (BOOL)choice:(id)arg1 hasSubchoice:(id)arg2;
- (void)insertCompletionForChoice:(id)arg1 editor:(id)arg2 completionOptions:(struct _TSTLexiconCompletionOptions)arg3;
- (id)choicesForPrefix:(id)arg1 insertionPoint:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

