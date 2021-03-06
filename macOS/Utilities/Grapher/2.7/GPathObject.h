//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDrawingObject.h"

@class NSBezierPath, NSImage;

@interface GPathObject : GDrawingObject
{
    NSBezierPath *mPath;
    NSImage *mShadowImage;
    struct CGRect mShadowImageBounds;
}

+ (id)defaultAttributes;
- (void)createShadow;
- (void)invalidateShadow;
- (BOOL)touchedByRect:(struct CGRect)arg1;
- (BOOL)editableInView:(id)arg1 controller:(id)arg2;
- (void)startEditingInView:(id)arg1 controller:(id)arg2;
- (id)createPath;
- (void)updateSelf;
- (void)updateAttributeSelf;
- (void)setAttributes:(id)arg1;
- (id)shadowAttributes;
- (void)updatePath;
- (void)setBounds:(struct CGRect)arg1;
- (void)updateContentFrame;
- (void)drawContent;
- (void)drawShadow;
- (id)initWithView:(id)arg1;
- (BOOL)useImageCache;
- (double)rotationAngle;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

