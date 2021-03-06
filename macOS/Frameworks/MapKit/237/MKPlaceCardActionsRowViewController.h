//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKUIViewController.h>

#import "MKActionRowItemViewDelegate.h"
#import "MKModuleViewControllerProtocol.h"

@class MKPlaceActionManager, MKPlaceSectionItemView, NSArray, NSLayoutGuide, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceCardActionsRowViewController : _MKUIViewController <MKActionRowItemViewDelegate, MKModuleViewControllerProtocol>
{
    NSArray *_actionButtons;
    NSArray *_constraints;
    NSArray *_actionRowsArray;
    unsigned long long _maxButtonsPerRow;
    MKPlaceSectionItemView *_hairlineView;
    unsigned long long _style;
    NSLayoutGuide *_marginLayoutguide;
    NSArray *_items;
    MKPlaceActionManager *_actionManager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MKPlaceActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)viewDidLayout;
- (void)actionRowSelected:(id)arg1;
- (void)infoCardThemeChanged;
- (void)viewDidLoad;
- (void)layoutButtons;
- (void)createConstraints;
- (void)createActionViews;
- (unsigned long long)maxButtonsPerRow;
- (void)createActions;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)loadView;
- (BOOL)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

