//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSHistoryVisitPredicate.h"

@class NSString, WBSSetInt64;

@interface WBSHistoryVisitsWithIDPredicate : NSObject <WBSHistoryVisitPredicate>
{
    WBSSetInt64 *_visits;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)evaluateServiceVisit:(id)arg1;
- (BOOL)evaluateVisit:(id)arg1;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistoryVisitIDs:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

