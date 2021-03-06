//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

@class NSSegmentedControl, NSString, NSTextField;
@protocol IPXMapBrowserSecondaryToolbarDelegate;

@interface IPXMapBrowserSecondaryToolbarViewController : IPXViewController
{
    id <IPXMapBrowserSecondaryToolbarDelegate> _delegate;
    NSTextField *_locationNameField;
    NSSegmentedControl *_mapTypeControl;
}

@property __weak NSSegmentedControl *mapTypeControl; // @synthesize mapTypeControl=_mapTypeControl;
@property __weak NSTextField *locationNameField; // @synthesize locationNameField=_locationNameField;
@property __weak id <IPXMapBrowserSecondaryToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resizeMapTypeControl;
- (void)changeMapType:(id)arg1;
@property(retain, nonatomic) NSString *locationName;
@property(nonatomic) unsigned long long mapType;
- (void)awakeFromNib;

@end

