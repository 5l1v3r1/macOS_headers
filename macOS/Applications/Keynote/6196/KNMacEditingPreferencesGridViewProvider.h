//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSApplication/TMAEditingPreferencesGridViewProvider.h>

@class NSButton, NSPopUpButton, NSTextField;

@interface KNMacEditingPreferencesGridViewProvider : TMAEditingPreferencesGridViewProvider
{
    NSPopUpButton *_outlineViewFontPopUp;
    NSTextField *_editingLabel;
    NSButton *_scalePlacedImagesCheckbox;
}

@property(retain, nonatomic) NSButton *scalePlacedImagesCheckbox; // @synthesize scalePlacedImagesCheckbox=_scalePlacedImagesCheckbox;
@property(retain, nonatomic) NSTextField *editingLabel; // @synthesize editingLabel=_editingLabel;
@property(retain, nonatomic) NSPopUpButton *outlineViewFontPopUp; // @synthesize outlineViewFontPopUp=_outlineViewFontPopUp;
- (void).cxx_destruct;
- (void)changeOutlineViewFont:(id)arg1;
- (void)viewDidLoad;
- (id)nibName;

@end

