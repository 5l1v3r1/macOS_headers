//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNMultipleUnknownContactsViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNUIEditAuthorizationControllerDelegate-Protocol.h>

@class CNContactStore, CNQueue, CNUIEditAuthorizationController, NSString, UIViewController;
@protocol CNVCardImportControllerDelegate, CNVCardImportControllerPresentationDelegate;

@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate, CNUIEditAuthorizationControllerDelegate>
{
    id <CNVCardImportControllerPresentationDelegate> _presentationDelegate;
    id <CNVCardImportControllerDelegate> _delegate;
    CNQueue *_receivedContactsQueue;
    CNContactStore *_contactStore;
    UIViewController *_presentedViewController;
    CNUIEditAuthorizationController *_editAuthorizationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNUIEditAuthorizationController *editAuthorizationController; // @synthesize editAuthorizationController=_editAuthorizationController;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNQueue *receivedContactsQueue; // @synthesize receivedContactsQueue=_receivedContactsQueue;
@property(nonatomic) __weak id <CNVCardImportControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CNVCardImportControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)cancelModalUnknownPersons:(id)arg1;
- (void)showEditAuthorizationPane:(id)arg1 animated:(BOOL)arg2;
- (void)authorizeAndSaveUnknownPersons;
- (void)saveUnknownPersons:(id)arg1 isAuthorized:(BOOL)arg2;
- (void)saveUnknownPersons:(id)arg1;
- (void)dismissContactsAndPresentNext;
- (void)presentImportUIForContacts:(id)arg1;
- (void)processNextContacts;
- (id)dequeueContacts;
- (void)enqueueContacts:(id)arg1;
- (BOOL)enqueueContactsAtURL:(id)arg1;
- (void)presentEnqueueResultsUIForResultContacts:(id)arg1;
- (id)contactsFromURL:(id)arg1;
- (id)initWithContactStore:(id)arg1 presentationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

