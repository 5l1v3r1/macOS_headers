//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface GEOQuickETATransitDeparturesInfo : NSObject
{
    NSString *_direction;
    NSString *_headsign;
    BOOL _departuresHaveFrequency;
    double _departureFrequency;
    NSDate *_departureFrequencyValidUntil;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *departureFrequencyValidUntil; // @synthesize departureFrequencyValidUntil=_departureFrequencyValidUntil;
@property(readonly, nonatomic) double departureFrequency; // @synthesize departureFrequency=_departureFrequency;
@property(readonly, nonatomic) BOOL departuresHaveFrequency; // @synthesize departuresHaveFrequency=_departuresHaveFrequency;
@property(readonly, nonatomic) NSString *headsign; // @synthesize headsign=_headsign;
@property(readonly, nonatomic) NSString *direction; // @synthesize direction=_direction;
- (id)_chooseMostImportantTransitLegInRoute:(id)arg1;
- (id)description;
- (id)initWithComposedRoute:(id)arg1;

@end

