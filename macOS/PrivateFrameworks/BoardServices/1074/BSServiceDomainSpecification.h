//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding>
{
    NSString *_identifier;
    NSString *_machName;
    NSDictionary *_servicesByIdentifier;
    NSOrderedSet *_orderedServices;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSOrderedSet *_orderedServices; // @synthesize _orderedServices;
@property(readonly, copy, nonatomic) NSString *machName; // @synthesize machName=_machName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_domainWithAdditionalServices:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 machName:(id)arg2 servicesByIdentifier:(id)arg3;
- (id)serviceForIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *services;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

