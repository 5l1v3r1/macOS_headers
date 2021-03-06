//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFGranularAccessResource.h"

@class NSArray;

@interface WFRemoteServerAccessResource : WFGranularAccessResource
{
    NSArray *_requestedURLs;
}

+ (Class)perWorkflowStateClass;
+ (BOOL)isSystemResource;
@property(copy, nonatomic) NSArray *requestedURLs; // @synthesize requestedURLs=_requestedURLs;
- (void).cxx_destruct;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)localizedWorkflowLevelPromptTemplate;
- (id)requestedEntries;
- (unsigned long long)globalLevelStatus;
- (id)icon;
- (id)name;

@end

