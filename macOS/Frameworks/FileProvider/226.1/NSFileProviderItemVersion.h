//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSData;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>
{
    NSData *_contentVersion;
    NSData *_metadataVersion;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(readonly, nonatomic) NSData *contentVersion; // @synthesize contentVersion=_contentVersion;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEmpty;
- (id)init;
- (id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2;

@end

