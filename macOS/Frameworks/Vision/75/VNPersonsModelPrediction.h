//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class VNFaceObservation;

@interface VNPersonsModelPrediction : NSObject <NSCopying, NSSecureCoding>
{
    VNFaceObservation *_faceObservation;
    id <NSObject><NSCopying><NSSecureCoding> _predictedPersonUniqueIdentifier;
    float _confidence;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying><NSSecureCoding> predictedPersonUniqueIdentifier; // @synthesize predictedPersonUniqueIdentifier=_predictedPersonUniqueIdentifier;
@property(readonly, nonatomic) VNFaceObservation *faceObservation; // @synthesize faceObservation=_faceObservation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaceObservation:(id)arg1 predictedPersonUniqueIdentifier:(id)arg2 confidence:(float)arg3;

@end

