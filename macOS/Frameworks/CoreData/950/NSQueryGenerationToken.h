//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)nostoresQueryGenerationToken;
+ (id)currentQueryGenerationToken;
+ (id)unpinnedQueryGenerationToken;
+ (void)initialize;
- (BOOL)_isEnabled;
- (id)_storeIdentifier;
- (BOOL)_isUnmoored;
- (id)persistentStoreCoordinator;
- (id)_storesForRequestRoutingFrom:(id)arg1 error:(id *)arg2;
- (id)_generationalComponentForStore:(id)arg1;
- (id)_token;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

