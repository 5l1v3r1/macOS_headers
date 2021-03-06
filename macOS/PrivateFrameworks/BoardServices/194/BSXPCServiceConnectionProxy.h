//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSObjCProtocol, BSXPCServiceConnection, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface BSXPCServiceConnectionProxy : NSObject
{
    BSObjCProtocol *_remoteProtocol;
    BSObjCProtocol *_localProtocol;
    BSXPCServiceConnection *_connection;
    NSObject<OS_xpc_object> *_XPCConnection;
    NSObject<OS_dispatch_queue> *_XPCConnectionTargetQueue;
    id <BSServiceDispatchingQueue> _replyQueue;
}

+ (void)decodeArguments:(id)arg1 outArgs:(out id [10])arg2 fromMessage:(id)arg3 forConnection:(id)arg4;
+ (void)encodeArguments:(id)arg1 inArgs:(in id [10])arg2 toMessage:(id)arg3 forConnection:(id)arg4;
+ (id)concreteArgumentsForArguments:(id)arg1;
+ (void)invokeReplyBlock:(CDUnknownBlockType)arg1 withArguments:(id)arg2 andPayload:(id)arg3 error:(id)arg4 forConnection:(id)arg5;
+ (CDStruct_20ee95e5)invokeMethod:(id)arg1 onTarget:(id)arg2 withObjects:(in id [10])arg3;
+ (void)invokeMethod:(id)arg1 onTarget:(id)arg2 withMessage:(id)arg3 forConnection:(id)arg4;
+ (void)createImplementationForProtocol:(id)arg1;
+ (id)proxyForConnection:(id)arg1 withInterface:(id)arg2 activeXPCConnection:(id)arg3 xpcConnectionTargetQueue:(id)arg4 replyQueue:(id)arg5;
@property(retain, nonatomic) id <BSServiceDispatchingQueue> replyQueue; // @synthesize replyQueue=_replyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *XPCConnectionTargetQueue; // @synthesize XPCConnectionTargetQueue=_XPCConnectionTargetQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
@property(retain, nonatomic) BSXPCServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) BSObjCProtocol *localProtocol; // @synthesize localProtocol=_localProtocol;
@property(retain, nonatomic) BSObjCProtocol *remoteProtocol; // @synthesize remoteProtocol=_remoteProtocol;
- (BOOL)invokeMessage:(id)arg1 onTarget:(id)arg2;
- (void)dealloc;

@end

