//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WFWorkflowRecord;

@interface WFWorkflowCreationOptions : NSObject
{
    BOOL _deleted;
    WFWorkflowRecord *_record;
    NSString *_identifier;
    unsigned long long _location;
}

@property(nonatomic) BOOL deleted; // @synthesize deleted=_deleted;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) WFWorkflowRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1;
- (id)init;

@end

