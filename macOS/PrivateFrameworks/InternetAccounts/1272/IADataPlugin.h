//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InternetAccounts/IAPlugin.h>

@interface IADataPlugin : IAPlugin
{
    id <IADataPluginDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain) id <IADataPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)deleteAccountUID:(id)arg1 error:(id *)arg2;
- (void)aosAccountStartedMigration:(id)arg1;
- (void)deactivateAccountUID:(id)arg1;
- (void)activateAccountUID:(id)arg1;
- (id)imageForAccountUID:(id)arg1;
- (void)configureAccountUID:(id)arg1;
- (id)settingsForAccountUID:(id)arg1;
- (id)accountUIDs:(id *)arg1;
- (id)accountUIDs;
- (void)deleteAccountUID:(id)arg1;
- (void)createAccountForInput:(id)arg1 discoveredResult:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)createAccountForInput:(id)arg1 discoveredResult:(id)arg2 error:(id *)arg3;
- (void)cancelSetupForAccount:(id)arg1;
- (void)cancelAccountSetupForInput:(id)arg1;
- (void)startAccountSetupWithInput:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startAccountSetupWithInput:(id)arg1;

@end

