//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor
{
    NSData *errorCorrectedPayload;
    BOOL isCompact;
    long long rowCount;
    long long columnCount;
}

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;
@property(readonly) long long columnCount; // @synthesize columnCount;
@property(readonly) long long rowCount; // @synthesize rowCount;
@property(readonly) BOOL isCompact; // @synthesize isCompact;
@property(readonly) NSData *errorCorrectedPayload; // @synthesize errorCorrectedPayload;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;
- (BOOL)isValid;

@end

