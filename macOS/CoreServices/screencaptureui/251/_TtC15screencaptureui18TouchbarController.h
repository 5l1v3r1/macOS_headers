//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC15screencaptureui25FunctionRowViewController.h"

@class NSButton, NSSegmentedControl, NSString, NSView;

@interface _TtC15screencaptureui18TouchbarController : _TtC15screencaptureui25FunctionRowViewController
{
    // Error parsing type: , name: topLevelViews
    // Error parsing type: , name: displayCaptureButton
    // Error parsing type: , name: captureTypeSegment
    // Error parsing type: , name: captureInteractiveTypeSegment
    // Error parsing type: , name: videoTypeSegment
    // Error parsing type: , name: locationButtonContainer
    // Error parsing type: , name: locationButton
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: locationCloseButton
    // Error parsing type: , name: _fullInteractiveMode
    // Error parsing type: , name: _overideLocationToClipboard
    // Error parsing type: , name: _locationViewController
    // Error parsing type: , name: _closeViewController
    // Error parsing type: , name: _items
    // Error parsing type: , name: _locationTouchBar
}

- (void).cxx_destruct;
- (void)videoStyleSet:(id)arg1;
- (void)captureStyleSet:(id)arg1;
- (void)captureScreen:(id)arg1;
- (void)popoverLocationItem:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)viewDidLayout;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSString *nibName;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, retain) NSButton *locationCloseButton; // @synthesize locationCloseButton;
@property(nonatomic, retain) NSButton *closeButton; // @synthesize closeButton;
@property(nonatomic, retain) NSButton *locationButton; // @synthesize locationButton;
@property(nonatomic, retain) NSView *locationButtonContainer; // @synthesize locationButtonContainer;
@property(nonatomic, retain) NSSegmentedControl *videoTypeSegment; // @synthesize videoTypeSegment;
@property(nonatomic, retain) NSSegmentedControl *captureInteractiveTypeSegment; // @synthesize captureInteractiveTypeSegment;
@property(nonatomic, retain) NSSegmentedControl *captureTypeSegment; // @synthesize captureTypeSegment;
@property(nonatomic, retain) NSButton *displayCaptureButton; // @synthesize displayCaptureButton;

@end

