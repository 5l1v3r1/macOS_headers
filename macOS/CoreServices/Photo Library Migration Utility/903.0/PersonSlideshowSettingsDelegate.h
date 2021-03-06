//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "IPAttributeProtocol-Protocol.h"

@class ImageDB;

@interface PersonSlideshowSettingsDelegate : NSObject <IPAttributeProtocol>
{
    ImageDB *_imageDB;
    long long _personKey;
}

- (id)db;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (id)initWithDB:(id)arg1 personKey:(unsigned long long)arg2;

@end

