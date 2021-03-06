//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSProgress, RDDatabase;

@interface RDLibraryUpgradeProcessor : NSObject
{
    long long _fromSchemaVersion;
    long long _toSchemaVersion;
    NSMutableArray *_upgradeActions;
    RDDatabase *_database;
    NSProgress *_overallProgress;
}

- (void).cxx_destruct;
- (void)upgradeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerActions;
- (id)classActionsFrom:(long long)arg1 to:(long long)arg2;
- (id)initFromSchemaVersion:(long long)arg1 toSchemaVersion:(long long)arg2 database:(id)arg3;

@end

