//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPVoteStats : NSObject
{
    long long _votes;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long votes; // @synthesize votes=_votes;
- (float)rate;
- (id)initWithVotes:(long long)arg1 andCount:(long long)arg2;

@end

