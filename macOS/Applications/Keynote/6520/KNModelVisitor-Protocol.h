//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKModelVisitor.h"

@class KNBodyPlaceholderInfo, KNMasterSlide, KNSlide, KNSlideNumberPlaceholderInfo, KNTitlePlaceholderInfo;

@protocol KNModelVisitor <TSKModelVisitor>
- (void)visitKNSlideNumberPlaceholderInfo:(KNSlideNumberPlaceholderInfo *)arg1;
- (void)visitKNBodyPlaceholderInfo:(KNBodyPlaceholderInfo *)arg1;
- (void)visitKNTitlePlaceholderInfo:(KNTitlePlaceholderInfo *)arg1;
- (void)visitKNMasterSlide:(KNMasterSlide *)arg1;
- (void)visitKNSlide:(KNSlide *)arg1;
@end

