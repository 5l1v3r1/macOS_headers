//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface SXTextStyleAttributes : NSObject <NSCopying>
{
    NSMutableDictionary *_mutableAttributes;
    struct _NSRange _range;
}

+ (id)attributesWithRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) NSMutableDictionary *mutableAttributes; // @synthesize mutableAttributes=_mutableAttributes;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *attributes;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1;

@end

