//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBBorders : NSObject
{
}

+ (id)edBordersFromXlDXf:(struct XlDXf *)arg1 edResources:(id)arg2;
+ (id)edBordersFromXlXf:(struct XlXf *)arg1 edResources:(id)arg2;
+ (int)convertEDDiagonalEnumToXl:(int)arg1;
+ (int)convertEDBorderEnumToXl:(int)arg1;
+ (int)convertXlDiagStyleEnumToED:(int)arg1;
+ (int)convertXlBorderEnumToED:(int)arg1;

@end

