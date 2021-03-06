//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFAppRequest.h>

@class NSArray;

@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest
{
    NSArray *_associatedDomains;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

