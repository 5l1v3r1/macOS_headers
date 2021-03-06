//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBRunWorkflowIntentResponse.h"

@class NSArray, NSString, _INPBArchivedObject;

@interface _INPBRunWorkflowIntentResponse : PBCodable <_INPBRunWorkflowIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int continueRunning:1;
        unsigned int requestsIntentExecution:1;
        unsigned int waitingForResume:1;
    } _has;
    BOOL _continueRunning;
    BOOL _requestsIntentExecution;
    BOOL _waitingForResume;
    BOOL __encodeLegacyGloryData;
    NSArray *_steps;
    _INPBArchivedObject *_underlyingIntent;
    _INPBArchivedObject *_underlyingIntentResponse;
    NSString *_utterance;
}

+ (BOOL)supportsSecureCoding;
+ (Class)stepType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) BOOL waitingForResume; // @synthesize waitingForResume=_waitingForResume;
@property(copy, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse; // @synthesize underlyingIntentResponse=_underlyingIntentResponse;
@property(retain, nonatomic) _INPBArchivedObject *underlyingIntent; // @synthesize underlyingIntent=_underlyingIntent;
@property(copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(nonatomic) BOOL requestsIntentExecution; // @synthesize requestsIntentExecution=_requestsIntentExecution;
@property(nonatomic) BOOL continueRunning; // @synthesize continueRunning=_continueRunning;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasWaitingForResume;
@property(readonly, nonatomic) BOOL hasUtterance;
@property(readonly, nonatomic) BOOL hasUnderlyingIntentResponse;
@property(readonly, nonatomic) BOOL hasUnderlyingIntent;
- (id)stepAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long stepsCount;
- (void)addStep:(id)arg1;
- (void)clearSteps;
@property(nonatomic) BOOL hasRequestsIntentExecution;
@property(nonatomic) BOOL hasContinueRunning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

