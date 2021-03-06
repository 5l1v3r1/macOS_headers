//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>
{
}

+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (BOOL)isSupportedOnThisDevice;
+ (BOOL)isAllowedToRunAutomatically;
+ (BOOL)supportsSecureCoding;
+ (id)triggerWithSerializedData:(id)arg1;
- (BOOL)hasValidConfiguration;
- (id)localizedTitleWithConfigurationSummary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)serializedData;
- (id)description;
- (id)init;
- (void)configureWithConfiguration:(id)arg1;

@end

