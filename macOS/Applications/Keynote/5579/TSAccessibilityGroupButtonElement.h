//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSAccessibilityElement.h"

@class NSArray, NSString;

@interface TSAccessibilityGroupButtonElement : TSAccessibilityElement
{
    NSString *_label;
    NSString *_hint;
    NSArray *_children;
    id _childRespondingToPress;
}

@property(nonatomic) __weak id childRespondingToPress; // @synthesize childRespondingToPress=_childRespondingToPress;
@property(copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property(copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (struct CGRect)_boundingFrame;
@property(readonly, nonatomic) struct CGRect boundingFrameInScreenCoordinates;
- (id)initWithChildren:(id)arg1 andParent:(id)arg2;
- (id)_firstChildThatRespondsToPressAction;
- (id)_childResponsibleForPressAction;
- (BOOL)tsaxPress;
- (struct CGRect)tsaxFrame;
- (id)tsaxChildren;
- (id)tsaxHelp;
- (id)tsaxDescription;
- (id)tsaxTitle;
- (id)tsaxRole;

@end

