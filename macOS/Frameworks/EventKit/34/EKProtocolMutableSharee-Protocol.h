//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKProtocolMutableObject.h"
#import "EKProtocolSharee.h"

@class NSManagedObjectID, NSString, NSURL;

@protocol EKProtocolMutableSharee <EKProtocolSharee, EKProtocolMutableObject>
@property(retain, nonatomic) NSManagedObjectID *managedObjectID;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSURL *URL;
- (void)setAccessLevel:(NSString *)arg1;
- (void)setStatus:(NSString *)arg1;
@end

