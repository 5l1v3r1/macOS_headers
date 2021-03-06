//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ENXMLSaxParserDelegate.h"
#import "ENXMLWriterDelegate.h"

@class ENMLWriter, ENXMLSaxParser, NSMutableString, NSString;

@interface ENHTMLtoENMLConverter : NSObject <ENXMLSaxParserDelegate, ENXMLWriterDelegate>
{
    ENXMLSaxParser *_htmlParser;
    ENMLWriter *_enmlWriter;
    NSMutableString *_enml;
    id <ENHTMLtoENMLConverterDelegate> _delegate;
    BOOL _inHTMLBody;
    int _skipCount;
}

@property(nonatomic) __weak id <ENHTMLtoENMLConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)xmlWriterDidEndWritingDocument:(id)arg1;
- (void)xmlWriter:(id)arg1 didGenerateData:(id)arg2;
- (void)parser:(id)arg1 didFailWithError:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)cancel;
- (void)finish;
- (void)writeData:(id)arg1;
- (id)enmlFromHTMLContent:(id)arg1;
- (id)enmlFromContentsOfHTMLFile:(id)arg1;
- (id)htmlParser;
- (id)enmlWriter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

