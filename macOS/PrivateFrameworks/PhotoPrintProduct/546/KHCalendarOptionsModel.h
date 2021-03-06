//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCalendar, NSDate;

@interface KHCalendarOptionsModel : NSObject
{
    BOOL _showBirthdaysFromContacts;
    NSCalendar *_baseCalendar;
    unsigned long long _startMonthIndex;
    unsigned long long _startCalendarYear;
    unsigned long long _numberOfMonths;
    NSArray *_showCalendars;
}

+ (id)countriesWithNationalHolidays;
+ (id)defaultOptionsModel;
@property(nonatomic) BOOL showBirthdaysFromContacts; // @synthesize showBirthdaysFromContacts=_showBirthdaysFromContacts;
@property(retain, nonatomic) NSArray *showCalendars; // @synthesize showCalendars=_showCalendars;
@property(nonatomic) unsigned long long numberOfMonths; // @synthesize numberOfMonths=_numberOfMonths;
@property(nonatomic) unsigned long long startCalendarYear; // @synthesize startCalendarYear=_startCalendarYear;
@property(nonatomic) unsigned long long startMonthIndex; // @synthesize startMonthIndex=_startMonthIndex;
@property(retain, nonatomic) NSCalendar *baseCalendar; // @synthesize baseCalendar=_baseCalendar;
- (void).cxx_destruct;
- (id)dictionary;
@property(readonly, nonatomic) NSDate *calendarStartDate;
@property(readonly, nonatomic) unsigned long long minimumNumberOfMonths;
@property(readonly, nonatomic) unsigned long long maximumNumberOfMonths;
@property(readonly, nonatomic) unsigned long long minimumStartCalendarYear;
@property(readonly, nonatomic) unsigned long long maximumStartCalendarYear;
@property(readonly, nonatomic) NSArray *calendarsToShow;
@property(readonly, nonatomic) NSArray *possibleCountriesToShowHolidaysFor;
- (id)description;
- (void)resetToDefaults;

@end

