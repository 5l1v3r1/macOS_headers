//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TuriCore/JSExport-Protocol.h>

@class NSString, TCVegaHTMLElement;

@protocol TCVegaJSDocumentInterface <JSExport>
@property(retain, nonatomic) TCVegaHTMLElement *body;
- (TCVegaHTMLElement *)createElementWithString:(NSString *)arg1;

@optional
- (TCVegaHTMLElement *)createElementWithString:(NSString *)arg1 __JS_EXPORT_AS__createElement:(id)arg2;
@end

