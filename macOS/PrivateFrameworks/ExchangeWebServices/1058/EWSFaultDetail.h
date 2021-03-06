//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/SOAPFaultDetail.h>

#import "XSDefinitionProvider.h"

@class EWSFaultDetailMessageXML, NSNumber, NSString;

@interface EWSFaultDetail : SOAPFaultDetail <XSDefinitionProvider>
{
}

+ (id)definition;
@property(readonly, nonatomic) EWSFaultDetailMessageXML *MessageXml;
@property(readonly, nonatomic) NSNumber *Position;
@property(readonly, nonatomic) NSNumber *Line;
@property(readonly, copy, nonatomic) NSString *Message;
@property(readonly, nonatomic) long long ResponseCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

