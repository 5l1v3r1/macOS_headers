//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NNumerical : NSObject
{
}

+ (void)initDefaultValues:(id)arg1;
+ (id)defaultKeys;
+ (void)syncWithDefaults;
+ (void)syncWith:(id)arg1;
+ (void)initialize;
+ (id)numericalClasses;
+ (double)K:(double)arg1 order:(double)arg2;
+ (double)I:(double)arg1 order:(double)arg2;
+ (double)Y:(double)arg1 order:(double)arg2;
+ (double)J:(double)arg1 order:(double)arg2;
+ (double)K:(double)arg1 n:(int)arg2;
+ (double)K1:(double)arg1;
+ (double)K0:(double)arg1;
+ (double)I1:(double)arg1;
+ (double)I0:(double)arg1;
+ (double)Y:(double)arg1 n:(int)arg2;
+ (double)Y1:(double)arg1;
+ (double)Y0:(double)arg1;
+ (double)J:(double)arg1 n:(int)arg2;
+ (double)J1:(double)arg1;
+ (double)J0:(double)arg1;
+ (void)lineFitX:(double *)arg1 y:(double *)arg2 sigma:(double *)arg3 n:(long long)arg4 a:(double *)arg5 b:(double *)arg6 sigmaA:(double *)arg7 sigmaB:(double *)arg8 chi2:(double *)arg9 q:(double *)arg10;
+ (double)incompleteGammaQ:(double)arg1:(double)arg2;
+ (double)incompleteGammaP:(double)arg1:(double)arg2;
+ (double)Si:(double)arg1;
+ (double)Ci:(double)arg1;
+ (void)Ci:(double *)arg1 Si:(double *)arg2 at:(double)arg3;
+ (double)S:(double)arg1;
+ (double)C:(double)arg1;
+ (void)Fresnel:(double)arg1 C:(double *)arg2 S:(double *)arg3;
+ (double)LegendreP:(double)arg1 l:(long long)arg2 m:(long long)arg3;
+ (double)Bi:(double)arg1;
+ (double)Ai:(double)arg1;
+ (void)AiryAt:(double)arg1 Ai:(double *)arg2 Bi:(double *)arg3 dAi:(double *)arg4 dBi:(double *)arg5;
+ (double)E:(double)arg1 n:(long long)arg2;

@end

