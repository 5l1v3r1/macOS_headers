//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrintKit/PKPrinter.h>

__attribute__((visibility("hidden")))
@interface _UIPKPrinterIOSMac : PKPrinter
{
}

+ (BOOL)uriMatchesMCProfileAdded:(id)arg1;
+ (BOOL)mcProfilePrintersOnlyAllowed;
+ (BOOL)ippsIsRequired;
+ (id)requiredPDL;
+ (BOOL)urfIsOptional;
+ (void *)getAttributes:(const char **)arg1 count:(int)arg2 fromURI:(id)arg3;
- (id)TXTRecordWithTimeout:(int)arg1;
- (id)txtRecordObjectForKey:(id)arg1;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
- (id)privateObjectForKey:(id)arg1;
- (void)setAccessStateFromTXT;
- (void)updateType;
- (BOOL)resolveWithTimeout:(int)arg1;
- (BOOL)resolve;
- (BOOL)resolveIfNeeded;
- (void *)lookup;
- (id)localName;
- (void *)getAttributes:(const char **)arg1 count:(int)arg2;
- (void *)getSupplyLevelAttributes;
- (void *)getPrinterAttributes;
- (long long)finalizeJob:(int)arg1;
- (void *)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (BOOL)knowsReadyPaperList;
- (id)printInfoSupported;
- (BOOL)hasPrintInfoSupported;
- (long long)type;
- (long long)jobTypesSupported;
- (long long)identifyActionsSupported;
- (long long)kind;
- (id)name;

@end

