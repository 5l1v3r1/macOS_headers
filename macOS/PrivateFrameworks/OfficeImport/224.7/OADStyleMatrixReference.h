//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : NSObject <NSCopying>
{
    unsigned long long mMatrixIndex;
    OADColor *mColor;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;
- (void)applyToEffectsInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToFillInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)applyToStrokeInProperties:(id)arg1 styleMatrix:(id)arg2;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setMatrixIndex:(unsigned long long)arg1;
- (unsigned long long)matrixIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;

@end

