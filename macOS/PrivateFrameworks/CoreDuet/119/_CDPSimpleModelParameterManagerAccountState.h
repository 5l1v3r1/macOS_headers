//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray, _CDPModelTuningState, _CDPSimpleModelParameterManagerTuningValue;

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding>
{
    _CDPSimpleModelParameterManagerTuningValue *_previousBestTuningValue;
    NSMutableArray *_tuningValues;
    _CDPModelTuningState *_lastTuningState;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) _CDPModelTuningState *lastTuningState; // @synthesize lastTuningState=_lastTuningState;
@property(retain, nonatomic) NSMutableArray *tuningValues; // @synthesize tuningValues=_tuningValues;
@property(retain, nonatomic) _CDPSimpleModelParameterManagerTuningValue *previousBestTuningValue; // @synthesize previousBestTuningValue=_previousBestTuningValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

