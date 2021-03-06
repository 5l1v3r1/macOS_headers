//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNUIEditingPolicy : NSObject
{
}

+ (id)guardianPolicy;
+ (id)defaultPolicy;
- (id)evaluateWithContact:(id)arg1 container:(id)arg2;
- (void)executeActionWhileIgnoringGuardianRestrictions:(CDUnknownBlockType)arg1;
- (BOOL)shouldBypassRestrictionsWhenSavingContact:(id)arg1 inContainer:(id)arg2 givenAuhtorizationResult:(long long)arg3;
- (BOOL)shouldIgnoreGuardianRestrictions;
- (BOOL)shouldPromptForAuthoriationWhenDeletingContact:(id)arg1 fromContainer:(id)arg2;
- (BOOL)shouldPromptForAuthoriationWhenUpdatingContact:(id)arg1 inContainer:(id)arg2;
- (BOOL)shouldPromptForAuthorizationWhenInsertingNewContactToContainer:(id)arg1;
- (BOOL)shouldSignalSharedAccessToContact:(id)arg1 inContainer:(id)arg2;

@end

