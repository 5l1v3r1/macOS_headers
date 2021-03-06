//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _PSInteractionStoreUtils : NSObject
{
}

+ (id)conversationIdWithMaximalIntersectionWithContactIdentifiers:(id)arg1 store:(id)arg2 bundleIds:(id)arg3 meContactIdentifier:(id)arg4;
+ (id)interactionsMostRecentForBundleId:(id)arg1 store:(id)arg2 resultLimit:(unsigned long long)arg3 interactions:(id)arg4;
+ (id)interactionsContainingSearchStringInDisplayName:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6;
+ (id)interactionsMatchingAnyHandlesOrDomainIds:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6;
+ (id)mostRecentInteractionWithSingleRecipientMatchingHandle:(id)arg1 store:(id)arg2;
+ (id)mostRecentInteractionWithSingleRecipientMatchingContactIdentifier:(id)arg1 store:(id)arg2;
+ (id)mostRecentInteractionWithSenderOrRecipientMatchingContactIdentifier:(id)arg1 bundleIds:(id)arg2 store:(id)arg3 singleRecipient:(BOOL)arg4;
+ (id)interactionsHyperRecentFromReferenceDate:(id)arg1 bundleIds:(id)arg2 recencyMargin:(double)arg3 store:(id)arg4;
+ (id)interactionsFromStore:(id)arg1 referenceDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 fetchLimit:(unsigned long long)arg8;
+ (id)recentInteractionsFromStore:(id)arg1 bundleIDs:(id)arg2;

@end

