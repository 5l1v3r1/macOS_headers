//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPCExpressionToken;

@interface SPCExpressionTerm : NSObject
{
    BOOL _resolved;
    SPCExpressionToken *_token;
    long long _type;
}

+ (id)termWithTokenizer:(id)arg1 error:(id *)arg2;
+ (id)rootTermWithTokenizer:(id)arg1 error:(id *)arg2;
@property(nonatomic, getter=isResolved) BOOL resolved; // @synthesize resolved=_resolved;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) SPCExpressionToken *token; // @synthesize token=_token;
- (id)expressionWithError:(id *)arg1;
- (BOOL)resolveWithParser:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)_initWithTokenizer:(id)arg1 error:(id *)arg2;

@end

