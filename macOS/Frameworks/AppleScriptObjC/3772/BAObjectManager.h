//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BAObjectManager : NSObject
{
}

+ (long long)_debugLoggingLevel;
+ (id)objectWithOSAID:(unsigned int)arg1 inComponentInstance:(struct ComponentInstanceRecord *)arg2;
+ (id)objectForOSAID:(unsigned int)arg1 inComponentInstance:(struct ComponentInstanceRecord *)arg2;
+ (void)setOSAID:(unsigned int)arg1 forClass:(Class)arg2;
+ (unsigned int)OSAIDForClass:(Class)arg1;
+ (id)scriptOSAIDs;
+ (void)setComponentInstance:(struct ComponentInstanceRecord *)arg1 forClass:(Class)arg2;
+ (struct ComponentInstanceRecord *)componentInstanceForClass:(Class)arg1;
+ (id)scriptComponentInstances;
+ (struct ComponentInstanceRecord *)component;
+ (void)initialize;

@end

