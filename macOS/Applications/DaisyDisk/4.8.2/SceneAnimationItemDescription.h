//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSView;

@interface SceneAnimationItemDescription : NSObject <NSCopying>
{
    BOOL _shouldDrawRecursively;
    BOOL _hasShadow;
    NSView *_view;
    NSNumber *_fadeOutOrIn;
    struct CGRect _fromFrame;
    struct CGRect _toFrame;
}

@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(copy, nonatomic) NSNumber *fadeOutOrIn; // @synthesize fadeOutOrIn=_fadeOutOrIn;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(nonatomic) struct CGRect fromFrame; // @synthesize fromFrame=_fromFrame;
@property(nonatomic) BOOL shouldDrawRecursively; // @synthesize shouldDrawRecursively=_shouldDrawRecursively;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

