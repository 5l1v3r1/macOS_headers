//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GCDAsyncUdpSendPacket, NSData, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GCDAsyncUdpSocket : NSObject
{
    id delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    CDUnknownBlockType receiveFilterBlock;
    NSObject<OS_dispatch_queue> *receiveFilterQueue;
    BOOL receiveFilterAsync;
    CDUnknownBlockType sendFilterBlock;
    NSObject<OS_dispatch_queue> *sendFilterQueue;
    BOOL sendFilterAsync;
    unsigned int flags;
    unsigned short config;
    unsigned short max4ReceiveSize;
    unsigned int max6ReceiveSize;
    int socket4FD;
    int socket6FD;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *send4Source;
    NSObject<OS_dispatch_source> *send6Source;
    NSObject<OS_dispatch_source> *receive4Source;
    NSObject<OS_dispatch_source> *receive6Source;
    NSObject<OS_dispatch_source> *sendTimer;
    GCDAsyncUdpSendPacket *currentSend;
    NSMutableArray *sendQueue;
    unsigned long long socket4FDBytesAvailable;
    unsigned long long socket6FDBytesAvailable;
    unsigned int pendingFilterOperations;
    NSData *cachedLocalAddress4;
    NSString *cachedLocalHost4;
    unsigned short cachedLocalPort4;
    NSData *cachedLocalAddress6;
    NSString *cachedLocalHost6;
    unsigned short cachedLocalPort6;
    NSData *cachedConnectedAddress;
    NSString *cachedConnectedHost;
    unsigned short cachedConnectedPort;
    int cachedConnectedFamily;
    void *IsOnSocketQueueOrTargetQueueKey;
    id userData;
}

+ (BOOL)getHost:(id *)arg1 port:(unsigned short *)arg2 family:(int *)arg3 fromAddress:(id)arg4;
+ (BOOL)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;
+ (BOOL)isIPv6Address:(id)arg1;
+ (BOOL)isIPv4Address:(id)arg1;
+ (int)familyFromAddress:(id)arg1;
+ (unsigned short)portFromAddress:(id)arg1;
+ (id)hostFromAddress:(id)arg1;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;
- (void).cxx_destruct;
- (int)socket6FD;
- (int)socket4FD;
- (int)socketFD;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)unmarkSocketQueueTargetQueue:(id)arg1;
- (void)markSocketQueueTargetQueue:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)closeAfterSending;
- (void)close;
- (void)closeWithError:(id)arg1;
- (void)doReceiveEOF;
- (void)doReceive;
- (void)setReceiveFilter:(CDUnknownBlockType)arg1 withQueue:(id)arg2 isAsynchronous:(BOOL)arg3;
- (void)setReceiveFilter:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)pauseReceiving;
- (BOOL)beginReceiving:(id *)arg1;
- (BOOL)receiveOnce:(id *)arg1;
- (void)setupSendTimerWithTimeout:(double)arg1;
- (void)doSendTimeout;
- (void)endCurrentSend;
- (void)doSend;
- (void)doPreSend;
- (void)maybeDequeueSend;
- (void)setSendFilter:(CDUnknownBlockType)arg1 withQueue:(id)arg2 isAsynchronous:(BOOL)arg3;
- (void)setSendFilter:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)sendData:(id)arg1 toAddress:(id)arg2 withTimeout:(double)arg3 tag:(long long)arg4;
- (void)sendData:(id)arg1 toHost:(id)arg2 port:(unsigned short)arg3 withTimeout:(double)arg4 tag:(long long)arg5;
- (void)sendData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)sendData:(id)arg1 withTag:(long long)arg2;
- (BOOL)enableBroadcast:(BOOL)arg1 error:(id *)arg2;
- (BOOL)performMulticastRequest:(int)arg1 forGroup:(id)arg2 onInterface:(id)arg3 error:(id *)arg4;
- (BOOL)leaveMulticastGroup:(id)arg1 onInterface:(id)arg2 error:(id *)arg3;
- (BOOL)leaveMulticastGroup:(id)arg1 error:(id *)arg2;
- (BOOL)joinMulticastGroup:(id)arg1 onInterface:(id)arg2 error:(id *)arg3;
- (BOOL)joinMulticastGroup:(id)arg1 error:(id *)arg2;
- (BOOL)preJoin:(id *)arg1;
- (BOOL)connectWithAddress6:(id)arg1 error:(id *)arg2;
- (BOOL)connectWithAddress4:(id)arg1 error:(id *)arg2;
- (void)maybeConnect;
- (BOOL)connectToAddress:(id)arg1 error:(id *)arg2;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)preConnect:(id *)arg1;
- (BOOL)bindToAddress:(id)arg1 error:(id *)arg2;
- (BOOL)bindToPort:(unsigned short)arg1 interface:(id)arg2 error:(id *)arg3;
- (BOOL)bindToPort:(unsigned short)arg1 error:(id *)arg2;
- (BOOL)preBind:(id *)arg1;
- (BOOL)isIPv6;
- (BOOL)isIPv4;
- (BOOL)isClosed;
- (BOOL)isConnected;
- (unsigned short)connectedPort;
- (id)connectedHost;
- (id)connectedAddress;
- (void)maybeUpdateCachedConnectedAddressInfo;
- (unsigned short)localPort_IPv6;
- (id)localHost_IPv6;
- (id)localAddress_IPv6;
- (unsigned short)localPort_IPv4;
- (id)localHost_IPv4;
- (id)localAddress_IPv4;
- (unsigned short)localPort;
- (id)localHost;
- (id)localAddress;
- (void)maybeUpdateCachedLocalAddress6Info;
- (void)maybeUpdateCachedLocalAddress4Info;
- (BOOL)getLocalAddress:(id *)arg1 host:(id *)arg2 port:(unsigned short *)arg3 forSocket:(int)arg4 withFamily:(int)arg5;
- (void)closeSockets;
- (void)closeSocket6;
- (void)closeSocket4;
- (void)resumeReceive6Source;
- (void)resumeReceive4Source;
- (void)suspendReceive6Source;
- (void)suspendReceive4Source;
- (void)resumeSend6Source;
- (void)resumeSend4Source;
- (void)suspendSend6Source;
- (void)suspendSend4Source;
- (BOOL)createSockets:(id *)arg1;
- (BOOL)createSocket4:(BOOL)arg1 socket6:(BOOL)arg2 error:(id *)arg3;
- (void)setupSendAndReceiveSourcesForSocket6;
- (void)setupSendAndReceiveSourcesForSocket4;
- (unsigned int)indexOfInterfaceAddr6:(id)arg1;
- (unsigned int)indexOfInterfaceAddr4:(id)arg1;
- (BOOL)isConnectedToAddress6:(id)arg1;
- (BOOL)isConnectedToAddress4:(id)arg1;
- (void)convertNumericHost:(id)arg1 port:(unsigned short)arg2 intoAddress4:(id *)arg3 address6:(id *)arg4;
- (void)convertIntefaceDescription:(id)arg1 port:(unsigned short)arg2 intoAddress4:(id *)arg3 address6:(id *)arg4;
- (int)getAddress:(id *)arg1 error:(id *)arg2 fromAddresses:(id)arg3;
- (void)asyncResolveHost:(id)arg1 port:(unsigned short)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (BOOL)preOp:(id *)arg1;
- (id)otherError:(id)arg1;
- (id)socketClosedError;
- (id)sendTimeoutError;
- (id)errnoError;
- (id)errnoErrorWithReason:(id)arg1;
- (id)gaiError:(int)arg1;
- (id)badParamError:(id)arg1;
- (id)badConfigError:(id)arg1;
- (void)notifyDidCloseWithError:(id)arg1;
- (void)notifyDidReceiveData:(id)arg1 fromAddress:(id)arg2 withFilterContext:(id)arg3;
- (void)notifyDidNotSendDataWithTag:(long long)arg1 dueToError:(id)arg2;
- (void)notifyDidSendDataWithTag:(long long)arg1;
- (void)notifyDidNotConnect:(id)arg1;
- (void)notifyDidConnectToAddress:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;
- (void)setMaxReceiveIPv6BufferSize:(unsigned int)arg1;
- (unsigned int)maxReceiveIPv6BufferSize;
- (void)setMaxReceiveIPv4BufferSize:(unsigned short)arg1;
- (unsigned short)maxReceiveIPv4BufferSize;
- (void)setIPVersionNeutral;
- (void)setPreferIPv6;
- (void)setPreferIPv4;
- (BOOL)isIPVersionNeutral;
- (BOOL)isIPv6Preferred;
- (BOOL)isIPv4Preferred;
- (void)setIPv6Enabled:(BOOL)arg1;
- (BOOL)isIPv6Enabled;
- (void)setIPv4Enabled:(BOOL)arg1;
- (BOOL)isIPv4Enabled;
- (void)synchronouslySetDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(BOOL)arg3;
- (void)getDelegate:(id *)arg1 delegateQueue:(id *)arg2;
- (void)synchronouslySetDelegateQueue:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDelegateQueue:(id)arg1 synchronously:(BOOL)arg2;
- (id)delegateQueue;
- (void)synchronouslySetDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 synchronously:(BOOL)arg2;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithSocketQueue:(id)arg1;
- (id)init;

@end

