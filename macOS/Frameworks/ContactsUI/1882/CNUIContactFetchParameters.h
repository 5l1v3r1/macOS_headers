//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSArray, NSString;

@interface CNUIContactFetchParameters : NSObject
{
    BOOL _unified;
    BOOL _fetchAsynchronously;
    BOOL _fetchingDuringLaunch;
    CNContactStore *_mainContactStore;
    CNContactStore *_alternateContactStore;
    NSString *_contactIdentifier;
    NSArray *_keysToFetch;
}

+ (id)fetchDescriptionWithContactIdentifier:(id)arg1 contactStore:(id)arg2 alternateContactStore:(id)arg3 unified:(BOOL)arg4 keysToFetch:(id)arg5 fetchAsynchronously:(BOOL)arg6 fetchingDuringLaunch:(BOOL)arg7;
+ (id)fetchDescriptionWithContactIdentifier:(id)arg1 contactStore:(id)arg2;
+ (id)fetchDescriptionWithContactIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL fetchingDuringLaunch; // @synthesize fetchingDuringLaunch=_fetchingDuringLaunch;
@property(readonly, nonatomic) BOOL fetchAsynchronously; // @synthesize fetchAsynchronously=_fetchAsynchronously;
@property(readonly, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(readonly, nonatomic) BOOL unified; // @synthesize unified=_unified;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic) CNContactStore *alternateContactStore; // @synthesize alternateContactStore=_alternateContactStore;
@property(readonly, nonatomic) CNContactStore *mainContactStore; // @synthesize mainContactStore=_mainContactStore;
- (void).cxx_destruct;
- (id)initWithContactIdentifier:(id)arg1 contactStore:(id)arg2 alternateContactStore:(id)arg3 unified:(BOOL)arg4 keysToFetch:(id)arg5 fetchAsynchronously:(BOOL)arg6 fetchingDuringLaunch:(BOOL)arg7;

@end

