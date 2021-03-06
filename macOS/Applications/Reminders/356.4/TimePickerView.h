//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSDate, NSDatePicker, NSPopover, NSSlider;

@interface TimePickerView : NSView
{
    NSSlider *_slider;
    NSDatePicker *_clock;
    NSDatePicker *_time;
    NSPopover *_popover;
    NSDate *_date;
}

@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property(retain) NSDatePicker *time; // @synthesize time=_time;
@property(retain) NSDatePicker *clock; // @synthesize clock=_clock;
@property(retain) NSSlider *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)updateDatePickersWithHour:(unsigned long long)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)updateWithDate:(id)arg1;
- (id)localizedTimeStringForHour:(unsigned long long)arg1;
- (id)initWithPopover:(id)arg1;

@end

