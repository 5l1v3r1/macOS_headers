//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSTextView, PCTranscript;

__attribute__((visibility("hidden")))
@interface TSTranscriptWindowController : NSWindowController
{
    NSTextView *transcriptTextView;
    PCTranscript *iTranscript;
}

+ (id)sharedInstance;
@property(retain, nonatomic) PCTranscript *transcript; // @synthesize transcript=iTranscript;
- (void)updateWindowTitle;
- (void)textDidChange:(id)arg1;
- (void)dealloc;

@end

