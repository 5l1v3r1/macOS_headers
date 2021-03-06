//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DFRAccessibilityRemoteUIElement : NSObject
{
    int _processIdentifier;
    id _accessibilityElement;
    long long _uniqueIdentifier;
    long long _placement;
    struct CGRect _frame;
}

+ (id)hitTest:(struct CGPoint)arg1;
+ (id)copyElements;
+ (id)elementWithBuffer:(const void **)arg1 size:(unsigned long long *)arg2;
+ (_Bool)enableNotifications;
+ (void)setEnableNotifications:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly) long long placement; // @synthesize placement=_placement;
@property(readonly) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) id accessibilityElement; // @synthesize accessibilityElement=_accessibilityElement;

@end

