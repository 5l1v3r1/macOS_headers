//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import "GEOXPCRequest.h"

@class GEOImageServiceRequest, NSString, NSUUID;

@interface GEOImageServiceRequestSimple : GEOXPCRequest <GEOXPCRequest>
{
    GEOImageServiceRequest *_request;
    NSUUID *_identifier;
}

+ (Class)replyClass;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) GEOImageServiceRequest *request; // @synthesize request=_request;
- (BOOL)expectsReply;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

