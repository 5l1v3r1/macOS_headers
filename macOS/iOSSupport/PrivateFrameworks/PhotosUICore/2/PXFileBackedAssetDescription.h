//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface PXFileBackedAssetDescription : NSObject
{
    NSMutableDictionary *_descriptionDictionary;
    NSURL *_url;
}

+ (id)simpleImageDescriptionWithURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

