//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (NRUtils)
+ (id)fromUUID:(id)arg1;
+ (id)dataWithRandomBytesOfSize:(unsigned long long)arg1;
@property(readonly, nonatomic) NSData *NRSHA256;
- (void)NRSHA256:(unsigned char [32])arg1;
- (id)toUUID;
@end

