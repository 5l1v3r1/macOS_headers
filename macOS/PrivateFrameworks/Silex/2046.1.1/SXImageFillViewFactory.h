//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXImageFillViewFactory-Protocol.h>

@class NSString;
@protocol SXDOMObjectProviding, SXImageViewFactory;

@interface SXImageFillViewFactory : NSObject <SXImageFillViewFactory>
{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXImageViewFactory> _imageViewFactory;
}

@property(readonly, nonatomic) id <SXImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
- (void).cxx_destruct;
- (id)createImageFillViewForImageFill:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 imageViewFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

