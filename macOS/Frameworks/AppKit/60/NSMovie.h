//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSURL;

@interface NSMovie : NSObject <NSCoding>
{
    NSData *_data;
    NSURL *_URL;
}

- (id)QTMovie;
- (id)initWithMovie:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)data;
- (id)URL;
- (void)dealloc;

@end

