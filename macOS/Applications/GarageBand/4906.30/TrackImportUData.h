//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface TrackImportUData : NSObject
{
    NSData *_udataArrange;
}

+ (short)trackNameFormatWithPath:(id)arg1 alternativeIndex:(int)arg2;
@property NSData *udataArrange; // @synthesize udataArrange=_udataArrange;
- (short)name2show;
- (short)f_trackshow;
- (short)f_NameFormat:(short)arg1;
- (id)get_udataArrange:(id)arg1 alternativeIndex:(int)arg2;
- (id)get_udataArrangeWithStateDict:(id)arg1 slot:(int)arg2;
- (id)screensetDictAtSlot:(int)arg1 screensetDictArray:(id)arg2;

@end

