//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSMutableDictionary;

@interface SGReverseTemplatesJSDataDetectors : NSObject
{
    NSMutableDictionary *_scanners;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_naiveDateFormatter;
    NSDateFormatter *_noTimeFormatter;
}

- (void).cxx_destruct;
- (void)_result:(struct __DDResult *)arg1 containsTypes:(id)arg2 foundTypes:(id)arg3;
- (id)_result:(struct __DDResult *)arg1 containsTypes:(id)arg2;
- (id)runDataDetectors:(id)arg1 locale:(id)arg2 epoch:(double)arg3 metadataForTypes:(id)arg4;
- (void)dealloc;
- (id)init;

@end

