//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/EQKitMathMLMToken.h>

#import <TSReading/EQKitLayoutSchemataOperator-Protocol.h>
#import <TSReading/EQKitOperator-Protocol.h>

@class NSString;

@interface EQKitMathMLMOperator : EQKitMathMLMToken <EQKitOperator, EQKitLayoutSchemataOperator>
{
    unsigned short mOperatorId;
}

- (unsigned int)operatorUnicharOrNul;
- (id)schemataOperator;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (unsigned short)operatorId;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithString:(id)arg1 environment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

