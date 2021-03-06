//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QTMovieModernizer : NSObject
{
}

+ (BOOL)requiresModernization:(id)arg1 error:(id *)arg2;
+ (int)trackIndexForTrackID:(id)arg1 inArray:(id)arg2;
+ (unsigned int)checkIfTrackTypeToSkipWhenNotSelfContained:(unsigned int)arg1;
+ (BOOL)isSubtypeSupportedInSandbox:(unsigned int)arg1 subType:(unsigned int)arg2;
+ (BOOL)areWeRunningInASandbox;
+ (unsigned int)checkIfTrackSubtypeTypeForAVF:(unsigned int)arg1;
+ (unsigned int)checkIfTrackSubtypeTypeForQuickTime:(unsigned int)arg1;
+ (unsigned int)checkIfOldMP3Track:(unsigned int)arg1 subType:(unsigned int)arg2;
+ (unsigned int)checkIfTrackTypeToSkipDuringModernization:(unsigned int)arg1;
+ (void *)createExportSourceForTrackNumber:(int)arg1 sourceURL:(id)arg2 mediaType:(unsigned int)arg3;
+ (BOOL)checkMovieModernizeRequired:(id)arg1 isReferenceMovie:(char *)arg2;
+ (unsigned int)checkIfMediaTypeToPassthrough:(unsigned int)arg1 subType:(unsigned int)arg2;
+ (unsigned int)checkIfTrackTypeNeedsModernization:(unsigned int)arg1;
+ (unsigned int)isTrackMediaTypeIgnoredByCoreMedia:(unsigned int)arg1;
+ (unsigned int)isTrackMediaTypeHandledByQuickTime:(unsigned int)arg1;
- (id)init;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;

@end

