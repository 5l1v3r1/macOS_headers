//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface iTermGitState : NSObject <NSCopying>
{
    double _creationTime;
    BOOL _dirty;
    NSString *_directory;
    NSString *_xcode;
    NSString *_pushArrow;
    NSString *_pullArrow;
    NSString *_branch;
    long long _adds;
    long long _deletes;
}

@property(nonatomic) long long deletes; // @synthesize deletes=_deletes;
@property(nonatomic) long long adds; // @synthesize adds=_adds;
@property(nonatomic) BOOL dirty; // @synthesize dirty=_dirty;
@property(copy, nonatomic) NSString *branch; // @synthesize branch=_branch;
@property(copy, nonatomic) NSString *pullArrow; // @synthesize pullArrow=_pullArrow;
@property(copy, nonatomic) NSString *pushArrow; // @synthesize pushArrow=_pushArrow;
@property(copy, nonatomic) NSString *xcode; // @synthesize xcode=_xcode;
@property(copy, nonatomic) NSString *directory; // @synthesize directory=_directory;
- (void).cxx_destruct;
@property(readonly, nonatomic) double age;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScope:(id)arg1;

@end

