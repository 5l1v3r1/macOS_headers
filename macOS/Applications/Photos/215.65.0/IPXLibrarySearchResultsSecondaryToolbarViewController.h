//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

@class NSTextField;
@protocol IPXLibrarySearchResultsSecondaryToolbarDelegate;

@interface IPXLibrarySearchResultsSecondaryToolbarViewController : IPXViewController
{
    NSTextField *_countLabel;
    id <IPXLibrarySearchResultsSecondaryToolbarDelegate> _delegate;
}

@property __weak id <IPXLibrarySearchResultsSecondaryToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSTextField *countLabel; // @synthesize countLabel=_countLabel;
- (void).cxx_destruct;
- (void)updateLabels;
- (void)viewDidLoad;
- (void)a_cancelSearch:(id)arg1;

@end

