//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject
{
    SGMFoundInAppsICS *_foundInAppsICS;
}

+ (void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_)arg1 datetimeType:(struct SGMFoundInAppsDatetimeType_)arg2;
+ (id)instance;
@property(retain, nonatomic) SGMFoundInAppsICS *foundInAppsICS; // @synthesize foundInAppsICS=_foundInAppsICS;
- (void).cxx_destruct;
- (id)init;

@end

