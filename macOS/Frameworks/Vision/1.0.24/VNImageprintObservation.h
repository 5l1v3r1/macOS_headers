//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSData, NSString, NSUUID, VNImageprint;

@interface VNImageprintObservation : VNObservation
{
    BOOL _imageprintValid;
    VNImageprint *_imageprint;
    NSString *_imageprintVersion;
}

+ (BOOL)supportsSecureCoding;
+ (id)observationWithImageprint:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *imageprintVersion; // @synthesize imageprintVersion=_imageprintVersion;
@property(readonly, nonatomic) BOOL imageprintValid; // @synthesize imageprintValid=_imageprintValid;
@property(retain, nonatomic) VNImageprint *imageprint; // @synthesize imageprint=_imageprint;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *rawImageprintDescriptor;
- (id)initWithRawImageprintDescriptor:(id)arg1;
- (BOOL)isImageprintValid;
- (float)calculateDistanceFromImageprintObservation:(id)arg1;
@property(copy, nonatomic) NSUUID *identifier;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init_CVML_MIGRATION_ONLY_WithIdentitifer:(id)arg1 descriptorId:(long long)arg2 externalId:(id)arg3 exifTimestamp:(long long)arg4 qualityScore:(float)arg5 rawDescriptorData:(id)arg6 rawDescriptorDataStride:(unsigned long long)arg7 rawDescriptorDataCount:(unsigned long long)arg8;
- (id)initWithCoder:(id)arg1;

@end

