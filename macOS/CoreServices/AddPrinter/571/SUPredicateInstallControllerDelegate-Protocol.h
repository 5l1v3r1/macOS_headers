//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, SUPredicateInstallController;

@protocol SUPredicateInstallControllerDelegate

@optional
- (void)predicateInstall:(SUPredicateInstallController *)arg1 didFailWithError:(NSError *)arg2;
- (void)predicateInstallUserDidCancel:(SUPredicateInstallController *)arg1;
- (void)predicateInstallDidComplete:(SUPredicateInstallController *)arg1;
@end

