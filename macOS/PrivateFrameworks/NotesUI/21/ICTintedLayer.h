//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSColor;

@interface ICTintedLayer : CALayer
{
    NSColor *_tintColor;
    id _originalContents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id originalContents; // @synthesize originalContents=_originalContents;
@property(retain, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)updateContents;
- (void)setContents:(id)arg1;

@end

