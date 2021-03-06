//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WKPromisedAttachmentContext : NSObject
{
    struct RetainPtr<NSURL> _blobURL;
    struct RetainPtr<NSString> _fileName;
    struct RetainPtr<NSString> _attachmentIdentifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *attachmentIdentifier;
@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) NSURL *blobURL;
- (id)initWithIdentifier:(id)arg1 blobURL:(id)arg2 fileName:(id)arg3;

@end

