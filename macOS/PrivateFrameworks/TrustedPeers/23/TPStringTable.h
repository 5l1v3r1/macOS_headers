//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>;

@interface TPStringTable : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_table;
}

+ (id)defaultTable;
@property(retain) NSHashTable *table; // @synthesize table=_table;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)setWithArray:(id)arg1;
- (id)stringWithString:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
@property(readonly) unsigned long long _count;

@end

