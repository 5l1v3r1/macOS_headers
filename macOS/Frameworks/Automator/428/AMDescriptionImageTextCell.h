//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/AMImageTextCell.h>

@class NSDictionary, NSString;

@interface AMDescriptionImageTextCell : AMImageTextCell
{
    NSString *_infoString;
    NSDictionary *titleAttrs;
    NSDictionary *selectedTitleAttrs;
    NSDictionary *infoAttrs;
    NSDictionary *selectedInfoAttrs;
}

- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setInfoString:(id)arg1;
- (id)infoString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

