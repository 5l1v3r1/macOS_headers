//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CHBDataLabel : NSObject
{
}

+ (struct XlChartSeriesFormat *)xlChartSeriesFormatFrom:(id)arg1 state:(id)arg2;
+ (struct XlChartCustomLabelText *)xlChartCustomLabelTextFrom:(id)arg1 state:(id)arg2;
+ (id)chdDataLabelFromXlChartCustomLabelText:(struct XlChartCustomLabelText *)arg1 state:(id)arg2;
+ (id)chdDataLabelFromXlChartSeriesFormat:(const struct XlChartSeriesFormat *)arg1 state:(id)arg2;
+ (int)xlLabelPositionEnumFromCHDDataLabelPosition:(int)arg1;
+ (int)chdLabelPositionEnumFromXlLabelPosition:(int)arg1;

@end

