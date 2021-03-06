//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FlightUtilities/FUFlightFactory.h>

#import <FlightUtilities/FUFlightFactoryInternalProtocol-Protocol.h>

@class NSString;

@interface FUFlightFactory_Parsec : FUFlightFactory <FUFlightFactoryInternalProtocol>
{
}

+ (id)convertFlightModel:(id)arg1 withError:(id *)arg2;
+ (void)extractTimeForFlightStep:(id)arg1 fromLeg:(id)arg2;
+ (id)airportFromSFAirport:(id)arg1;
+ (void)loadFlightStructuresWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

