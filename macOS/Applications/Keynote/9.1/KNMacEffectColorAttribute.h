//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNMacEffectSingleAttribute.h"

@class KNMacEffectTitleField, NSString, TMAColorChooserView;

@interface KNMacEffectColorAttribute : KNMacEffectSingleAttribute
{
    TMAColorChooserView *_colorChooserView;
    KNMacEffectTitleField *_titleField;
    NSString *_toolTip;
}

@property(copy, nonatomic) NSString *toolTip; // @synthesize toolTip=_toolTip;
- (void).cxx_destruct;
- (void)p_updateColorChooserTheme;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithCustomUIElementDictionary:(id)arg1 attributeKeyPath:(id)arg2 selectedModelObjectsController:(id)arg3;

@end

