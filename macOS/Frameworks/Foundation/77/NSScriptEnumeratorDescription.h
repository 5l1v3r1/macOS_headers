//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NSScriptEnumeratorDescription : NSObject
{
    unsigned int appleEventCode;
    BOOL isHidden;
    NSString *presentableDescription;
    NSString *presentableName;
    NSObject *_value;
    NSArray *_synonymDescriptions;
}

- (id)value;
- (BOOL)matchesAppleEventCode:(unsigned int)arg1;
- (id)synonymDescriptions;
- (void)dealloc;
- (id)initWithAppleEventCode:(unsigned int)arg1 presentableDescription:(id)arg2 name:(id)arg3;
- (id)initWithAppleEventCode:(unsigned int)arg1 value:(id)arg2 isHidden:(BOOL)arg3 presentableDescription:(id)arg4 name:(id)arg5 synonymDescriptions:(id)arg6;

@end

