//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface AKApplicationMetadataInfo : NSObject <NSSecureCoding>
{
    NSString *_authorizedAppListVersion;
    NSDictionary *_teams;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *teams; // @synthesize teams=_teams;
@property(readonly, copy, nonatomic) NSString *authorizedAppListVersion; // @synthesize authorizedAppListVersion=_authorizedAppListVersion;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseInfo:(id)arg1;

@end

