//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "APLPropertiesGroupElement.h"

@class NSColor;

@interface APLPBorderedGroupElement : APLPropertiesGroupElement
{
    double thinLineWidth;
    NSColor *lineColor;
    BOOL right;
    BOOL left;
    BOOL top;
    BOOL bottom;
    double topleftRadius;
    double toprightRadius;
    double bottomleftRadius;
    double bottomrightRadius;
}

- (void).cxx_destruct;
- (void)draw;
- (BOOL)resolveWithDataSource:(id)arg1;

@end

