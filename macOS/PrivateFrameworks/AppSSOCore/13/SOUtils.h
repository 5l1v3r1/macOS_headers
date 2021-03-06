//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SOUtils : NSObject
{
}

+ (BOOL)checkSignatureOfFile:(id)arg1 teamIdentifier:(id *)arg2 trusted:(char *)arg3 signedBySet:(long long *)arg4 certificates:(id *)arg5 error:(id *)arg6;
+ (id)signatureSetToString:(long long)arg1;
+ (BOOL)currentProcessInSystemSession;
+ (id)processNameForPID:(int)arg1;
+ (id)currentProcessName;
+ (id)bundleIdentifierFromAuditToken:(CDStruct_6ad76789)arg1;
+ (int)pidFromAuditToken:(CDStruct_6ad76789)arg1;
+ (BOOL)auditTokenFromData:(id)arg1 auditToken:(CDStruct_6ad76789 *)arg2;
+ (id)mapArray:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (BOOL)isInternalBuild;
+ (id)currentProcessContainerPath;
+ (BOOL)sandboxAllowsXPC:(const char *)arg1;
+ (BOOL)currentProcessIsSandboxed;
+ (void)enterSandbox:(const char *)arg1 sandboxProfileName:(const char *)arg2;
+ (BOOL)checkEntitlementFromXPC:(id)arg1;
+ (void)unmapFile:(int)arg1 data:(id)arg2;
+ (int)mmapFile:(id)arg1 mode:(long long)arg2 mmapData:(id *)arg3;

@end

