//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _PARMapsSession <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSData *metadata;
@property(nonatomic) double relativeTimestamp;
@property(nonatomic) unsigned int sequenceNumber;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *enviroment;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

