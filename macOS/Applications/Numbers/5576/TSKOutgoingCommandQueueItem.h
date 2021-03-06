//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@class NSArray, NSDictionary, NSError, NSString, TSKCommand, TSPData, TSUOnce;

@interface TSKOutgoingCommandQueueItem : TSPObject
{
    NSDictionary *_dataUUIDMap;
    NSString *_serializedJSONStringWithoutDataBase64EncodedString;
    TSPData *_serializedJSONStringWithoutDataBase64EncodedData;
    TSUOnce *_serializedJSONStringDispatchOnce;
    NSString *_serializedJSONString;
    NSError *_serializedJSONStringError;
    TSUOnce *_estimatedSerializedJSONLengthDispatchOnce;
    unsigned long long _estimatedSerializedJSONLength;
    TSUOnce *_dspArrayOnce;
    NSArray *_dspArray;
    TSKCommand *_command;
}

+ (id)p_newDeserializedCommandWithDSPArray:(id)arg1 commandIdentifier:(id)arg2 forbidBase64Decoding:(BOOL)arg3 context:(id)arg4;
+ (id)p_dspArrayFromSerializedJSONString:(id)arg1 commandIdentifier:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic) TSKCommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)p_placeholderInfosFromSerializedJSONStringWithoutDataBase64Encoded:(id)arg1 dataUUIDMap:(id)arg2 serializedJSONStringLengthDelta:(unsigned long long *)arg3 error:(out id *)arg4 newInfoBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)p_estimatedSerializedJSONStringLengthFromSerializedJSONStringWithoutDataBase64Encoded:(id)arg1 dataUUIDMap:(id)arg2;
- (id)p_newSerializedJSONStringFromSerializedJSONStringWithoutDataBase64Encoded:(id)arg1 dataUUIDMap:(id)arg2 error:(out id *)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)description;
- (id)copyWithCommand:(id)arg1;
- (id)copyWithNewDeserializedCommand;
- (id)newDeserializedCommand;
- (id)p_newSerializedJSONStringForCollaborationTrace:(BOOL)arg1 error:(out id *)arg2;
- (id)newSerializedJSONStringReturningError:(out id *)arg1;
@property(readonly, nonatomic) unsigned long long estimatedSerializedJSONLength;
@property(readonly, nonatomic) BOOL hasSerializedJSONString;
- (id)serializedJSONStringWithoutDataBase64Encoded;
- (void)commonInit;
- (id)initWithCommand:(id)arg1 serializedJSONStringWithoutDataBase64EncodedString:(id)arg2 serializedJSONStringWithoutDataBase64EncodedData:(id)arg3 dataUUIDMap:(id)arg4;
- (id)initWithCommand:(id)arg1 serializedJSONStringWithoutDataBase64Encoded:(id)arg2 dataUUIDMap:(id)arg3;
- (id)initWithContext:(id)arg1;

@end

