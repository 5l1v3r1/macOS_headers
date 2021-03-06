//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNMacEffectAttribute.h"

@class NSString;

@interface KNMacEffectSingleAttribute : KNMacEffectAttribute
{
    NSString *_localizedAttributeTitle;
    NSString *_attributeKeyPath;
}

+ (id)attributePaneWithKeyPath:(id)arg1 localizedAttributeTitle:(id)arg2 selectedModelObjectsController:(id)arg3;
@property(readonly, nonatomic) NSString *attributeKeyPath; // @synthesize attributeKeyPath=_attributeKeyPath;
@property(readonly, nonatomic) NSString *localizedAttributeTitle; // @synthesize localizedAttributeTitle=_localizedAttributeTitle;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCustomUIElementDictionary:(id)arg1 attributeKeyPath:(id)arg2 selectedModelObjectsController:(id)arg3;
- (id)initWithAttributeKeyPath:(id)arg1 localizedAttributeTitle:(id)arg2 selectedModelObjectsController:(id)arg3;

@end

