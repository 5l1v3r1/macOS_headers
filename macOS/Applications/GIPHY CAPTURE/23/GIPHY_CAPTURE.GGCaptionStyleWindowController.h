//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class GGCaptionTextView, _TtC13GIPHY_CAPTURE14GGTimedCaption, _TtC13GIPHY_CAPTURE17GGColorPickerView, _TtC13GIPHY_CAPTURE17GGPopoverListView;

@interface GIPHY_CAPTURE.GGCaptionStyleWindowController : NSWindowController
{
    // Error parsing type: , name: textField
    // Error parsing type: , name: colorPicker
    // Error parsing type: , name: sizePopover
    // Error parsing type: , name: fontPopover
    // Error parsing type: , name: animationPopover
    // Error parsing type: , name: delegate
    // Error parsing type: , name: caption
}

- (CDUnknownBlockType).cxx_destruct;
- (void)reloadFields;
- (void)windowDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)init;
@property(nonatomic, retain) _TtC13GIPHY_CAPTURE14GGTimedCaption *caption; // @synthesize caption;
@property(nonatomic, retain) _TtC13GIPHY_CAPTURE17GGPopoverListView *animationPopover; // @synthesize animationPopover;
@property(nonatomic, retain) _TtC13GIPHY_CAPTURE17GGPopoverListView *fontPopover; // @synthesize fontPopover;
@property(nonatomic, retain) _TtC13GIPHY_CAPTURE17GGPopoverListView *sizePopover; // @synthesize sizePopover;
@property(nonatomic, retain) _TtC13GIPHY_CAPTURE17GGColorPickerView *colorPicker; // @synthesize colorPicker;
@property(nonatomic, retain) GGCaptionTextView *textField; // @synthesize textField;

@end

