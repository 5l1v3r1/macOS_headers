//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _EDThreadScopeInfo : NSObject
{
    BOOL _needsUpdate;
    long long _databaseID;
    NSDate *_lastViewedDate;
}

@property(retain, nonatomic) NSDate *lastViewedDate; // @synthesize lastViewedDate=_lastViewedDate;
@property(nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDatabaseID:(long long)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3;

@end

