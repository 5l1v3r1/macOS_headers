//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXContentFilterRule, IPXKeyword, NSString;

@interface IPXContentFilterMenuItemContext : NSObject
{
    NSString *_containerId;
    IPXContentFilterRule *_rule;
    IPXKeyword *_keyword;
}

@property(retain, nonatomic) IPXKeyword *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) IPXContentFilterRule *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
- (void).cxx_destruct;
- (id)keywordId;

@end

