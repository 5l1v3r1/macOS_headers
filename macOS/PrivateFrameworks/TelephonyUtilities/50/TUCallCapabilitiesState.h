//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "TUPubliclyAccessibleCopying.h"

@class NSArray, NSDictionary, NSString, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    BOOL _supportsPrimaryCalling;
    BOOL _supportsBasebandCalling;
    BOOL _supportsCellularData;
    BOOL _supportsDisplayingTelephonyCalls;
    BOOL _supportsDisplayingFaceTimeAudioCalls;
    BOOL _supportsDisplayingFaceTimeVideoCalls;
    BOOL _faceTimeAudioAvailable;
    BOOL _faceTimeVideoAvailable;
    BOOL _ctCapabilitiesValid;
    BOOL _accountsMatchForSecondaryCalling;
    BOOL _accountsSupportSecondaryCalling;
    BOOL _supportsRelayCalling;
    BOOL _relayCallingEnabled;
    BOOL _relayCallingFeaturesEnabled;
    BOOL _supportsTelephonyRelayCalling;
    BOOL _supportsFaceTimeAudioRelayCalling;
    BOOL _supportsFaceTimeVideoRelayCalling;
    BOOL _emergencyCallbackModeEnabled;
    BOOL _emergencyCallbackPossible;
    int _relayCallingAvailability;
    NSDictionary *_relayCallingDisabledForDeviceID;
    NSString *_outgoingRelayCallerID;
    NSArray *_cloudCallingDevices;
    NSDictionary *_senderIdentityCapabilitiesStateByUUID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *senderIdentityCapabilitiesStateByUUID; // @synthesize senderIdentityCapabilitiesStateByUUID=_senderIdentityCapabilitiesStateByUUID;
@property(nonatomic, getter=isEmergencyCallbackPossible) BOOL emergencyCallbackPossible; // @synthesize emergencyCallbackPossible=_emergencyCallbackPossible;
@property(nonatomic, getter=isEmergencyCallbackModeEnabled) BOOL emergencyCallbackModeEnabled; // @synthesize emergencyCallbackModeEnabled=_emergencyCallbackModeEnabled;
@property(copy, nonatomic) NSArray *cloudCallingDevices; // @synthesize cloudCallingDevices=_cloudCallingDevices;
@property(nonatomic) BOOL supportsFaceTimeVideoRelayCalling; // @synthesize supportsFaceTimeVideoRelayCalling=_supportsFaceTimeVideoRelayCalling;
@property(nonatomic) BOOL supportsFaceTimeAudioRelayCalling; // @synthesize supportsFaceTimeAudioRelayCalling=_supportsFaceTimeAudioRelayCalling;
@property(nonatomic) BOOL supportsTelephonyRelayCalling; // @synthesize supportsTelephonyRelayCalling=_supportsTelephonyRelayCalling;
@property(copy, nonatomic) NSString *outgoingRelayCallerID; // @synthesize outgoingRelayCallerID=_outgoingRelayCallerID;
@property(copy, nonatomic) NSDictionary *relayCallingDisabledForDeviceID; // @synthesize relayCallingDisabledForDeviceID=_relayCallingDisabledForDeviceID;
@property(nonatomic) int relayCallingAvailability; // @synthesize relayCallingAvailability=_relayCallingAvailability;
@property(nonatomic, getter=areRelayCallingFeaturesEnabled) BOOL relayCallingFeaturesEnabled; // @synthesize relayCallingFeaturesEnabled=_relayCallingFeaturesEnabled;
@property(nonatomic, getter=isRelayCallingEnabled) BOOL relayCallingEnabled; // @synthesize relayCallingEnabled=_relayCallingEnabled;
@property(nonatomic) BOOL supportsRelayCalling; // @synthesize supportsRelayCalling=_supportsRelayCalling;
@property(nonatomic) BOOL accountsSupportSecondaryCalling; // @synthesize accountsSupportSecondaryCalling=_accountsSupportSecondaryCalling;
@property(nonatomic) BOOL accountsMatchForSecondaryCalling; // @synthesize accountsMatchForSecondaryCalling=_accountsMatchForSecondaryCalling;
@property(nonatomic, getter=areCTCapabilitiesValid) BOOL ctCapabilitiesValid; // @synthesize ctCapabilitiesValid=_ctCapabilitiesValid;
@property(nonatomic, getter=isFaceTimeVideoAvailable) BOOL faceTimeVideoAvailable; // @synthesize faceTimeVideoAvailable=_faceTimeVideoAvailable;
@property(nonatomic, getter=isFaceTimeAudioAvailable) BOOL faceTimeAudioAvailable; // @synthesize faceTimeAudioAvailable=_faceTimeAudioAvailable;
@property(nonatomic) BOOL supportsDisplayingFaceTimeVideoCalls; // @synthesize supportsDisplayingFaceTimeVideoCalls=_supportsDisplayingFaceTimeVideoCalls;
@property(nonatomic) BOOL supportsDisplayingFaceTimeAudioCalls; // @synthesize supportsDisplayingFaceTimeAudioCalls=_supportsDisplayingFaceTimeAudioCalls;
@property(nonatomic) BOOL supportsDisplayingTelephonyCalls; // @synthesize supportsDisplayingTelephonyCalls=_supportsDisplayingTelephonyCalls;
@property(nonatomic) BOOL supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property(nonatomic) BOOL supportsBasebandCalling; // @synthesize supportsBasebandCalling=_supportsBasebandCalling;
@property(nonatomic) BOOL supportsPrimaryCalling; // @synthesize supportsPrimaryCalling=_supportsPrimaryCalling;
- (void).cxx_destruct;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)publiclyAccessibleCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) TUCloudCallingDevice *defaultPairedDevice;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

