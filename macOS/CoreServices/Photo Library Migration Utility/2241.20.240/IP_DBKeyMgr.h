//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IP_KeyMgr.h"

@class ImageDB;

@interface IP_DBKeyMgr : IP_KeyMgr
{
    ImageDB *_db;
}

+ (id)keyMgrWithDb:(id)arg1;
+ (void)initialize;
@property(nonatomic, setter=setDB:) ImageDB *db; // @synthesize db=_db;
- (void)encodeWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

