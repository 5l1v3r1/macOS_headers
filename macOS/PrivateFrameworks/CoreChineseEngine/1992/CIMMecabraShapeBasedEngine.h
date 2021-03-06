//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CIMMecabraEngineSubstitution.h"
#import "TIMecabraEnvironmentProvider.h"

@class TIMecabraEnvironment;

@interface CIMMecabraShapeBasedEngine : NSObject <TIMecabraEnvironmentProvider, CIMMecabraEngineSubstitution>
{
    int _inputMethodType;
    unsigned long long _creationOptions;
    TIMecabraEnvironment *_mecabraEnvironment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // @synthesize mecabraEnvironment=_mecabraEnvironment;
@property(nonatomic) int inputMethodType; // @synthesize inputMethodType=_inputMethodType;
@property(nonatomic) unsigned long long creationOptions; // @synthesize creationOptions=_creationOptions;
- (id)candidatesForInputString:(id)arg1;
- (id)inputStringForCharacters:(id)arg1;
- (void)unlearnCandidate:(id)arg1;
- (id)strokeCandidatesWithAnalysisString:(id)arg1 displayInputPrefix:(id)arg2 input:(id)arg3 options:(unsigned long long)arg4;
- (id)candidatesWithAnalysisString:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) struct __Mecabra *mecabraEngine;
- (void)completelyCommitInlineCandidate:(id)arg1;
- (void)partiallyCommitInlineCandidate:(id)arg1;
- (id)initWithInputMethodType:(int)arg1 creationOptions:(unsigned long long)arg2;

@end

