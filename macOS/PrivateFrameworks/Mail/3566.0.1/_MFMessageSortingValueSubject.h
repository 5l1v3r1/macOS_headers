//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFMessageSortingValue.h>

@class ECSubject;

@interface _MFMessageSortingValueSubject : MFMessageSortingValue
{
    ECSubject *_subject;
}

@property(copy, nonatomic) ECSubject *subject; // @synthesize subject=_subject;
- (id)description;
- (void)dealloc;

@end

