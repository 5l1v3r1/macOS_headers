//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicateEditorRowTemplate.h"

@class NSLabelView, NSPopUpButton, NSString;

@interface _AMFileLabelRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_leftExpressionPopup;
    NSPopUpButton *_comparisonPopUpButton;
    NSLabelView *_labelView;
    NSString *_name;
    NSString *_keyPath;
    BOOL _hasCreatedViews;
}

+ (id)templateWithName:(id)arg1 withKeyPath:(id)arg2;
@property BOOL hasCreatedViews; // @synthesize hasCreatedViews=_hasCreatedViews;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain) NSLabelView *labelView; // @synthesize labelView=_labelView;
@property(retain) NSPopUpButton *comparisonPopUpButton; // @synthesize comparisonPopUpButton=_comparisonPopUpButton;
@property(retain) NSPopUpButton *leftExpressionPopup; // @synthesize leftExpressionPopup=_leftExpressionPopup;
- (void).cxx_destruct;
- (id)predicateWithSubpredicates:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (id)convertToEvaluationPredicateFromUIPredicate:(id)arg1;
- (void)createViewsIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 withKeyPath:(id)arg2;

@end

