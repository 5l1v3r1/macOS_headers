//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;
@protocol SAAceSerializable;

@interface SAUISayIt : SABaseClientBoundCommand
{
}

+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sayIt;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;
@property(retain, nonatomic) id <SAAceSerializable> context;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

