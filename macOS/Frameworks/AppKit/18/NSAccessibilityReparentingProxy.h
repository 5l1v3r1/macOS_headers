//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAccessibilityProxy.h>

__attribute__((visibility("hidden")))
@interface NSAccessibilityReparentingProxy : NSAccessibilityProxy
{
    id _realElement;
    id _fauxParent;
}

+ (id)proxyFor:(id)arg1 fauxParent:(id)arg2;
- (id)description;
- (id)accessibilityParentAttribute;
- (id)realElement;
- (void)dealloc;
- (id)initWithElement:(id)arg1 fauxParent:(id)arg2;

@end

