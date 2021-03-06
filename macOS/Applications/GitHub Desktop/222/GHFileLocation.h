//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSURL;

@interface GHFileLocation : NSObject <NSCoding, NSCopying>
{
    NSURL *_fileReferenceURL;
    NSURL *_lastSeenFilePathURL;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateFileReferenceURL;
- (id)watchForRenames;
- (id)initWithMissingFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1;
@property(readonly, nonatomic) id fileResourceIdentifier;
@property(readonly, getter=isMissing) BOOL missing;
@property(readonly, copy) NSURL *lastSeenFilePathURL;
@property(readonly, copy) NSURL *fileReferenceURL;

@end

