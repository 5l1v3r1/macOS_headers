//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBox.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface AUParameterClump : NSBox
{
    BOOL mShouldBorder;
    NSArray *mParameterStrips;
    unsigned int mDisplayFlags;
}

- (BOOL)hasNonExpertParams;
- (unsigned int)displayFlags;
- (void)setDisplayFlags:(unsigned int)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithParameterStrips:(id)arg1 title:(id)arg2 displayFlags:(unsigned int)arg3;
- (void)updateParametersForSetFlags;

@end

