//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMFUnfairLock, NSDictionary;

@interface HMLocalization : NSObject
{
    HMFUnfairLock *_lock;
    NSDictionary *_localizedStrings;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)getLocalizedOrCustomString:(id)arg1;
- (id)getLocalizedString:(id)arg1;
- (void)_updateLocalizedStrings;
- (void)handleLocaleDidChange:(id)arg1;
@property(readonly, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
- (id)init;

@end

