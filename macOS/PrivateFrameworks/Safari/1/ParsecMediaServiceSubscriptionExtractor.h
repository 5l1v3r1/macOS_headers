//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ParsecMediaServiceSubscriptionExtractor : NSObject
{
    struct BundleFrame _bundleFrame;
    struct BundleScriptWorld _isolatedWorld;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subscriptionInformation;
- (void)dealloc;
- (id)initWithBundleFrame:(const struct BundleFrame *)arg1;

@end

