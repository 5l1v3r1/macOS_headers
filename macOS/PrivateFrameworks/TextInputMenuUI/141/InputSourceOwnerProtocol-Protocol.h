//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class InputSource, NSBundle, NSNumber;

@protocol InputSourceOwnerProtocol <NSObject>
- (BOOL)isSecureMode;
- (NSBundle *)bundle;
- (void)sourceWasChangedTo:(InputSource *)arg1;
- (NSNumber *)targetTSMDocument;
- (struct ProcessSerialNumber *)targetApp;
@end

