//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRLexiconCompletion : NSObject
{
    unsigned int _tokenID;
    double _score;
}

@property(readonly) double score; // @synthesize score=_score;
@property(readonly) unsigned int tokenID; // @synthesize tokenID=_tokenID;
- (id)description;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2;

@end

