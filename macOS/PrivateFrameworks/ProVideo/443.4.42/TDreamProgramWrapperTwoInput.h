//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamProgramWrapperTwoInput : TDreamProgramWrapper
{
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
}

- (void)renderTo:(unsigned int)arg1 from:(unsigned int)arg2 andFrom:(unsigned int)arg3;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

