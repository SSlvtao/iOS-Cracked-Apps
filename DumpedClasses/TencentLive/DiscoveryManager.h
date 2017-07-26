//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ConnectableDeviceDelegate.h"
#import "DiscoveryProviderDelegate.h"
#import "ServiceConfigDelegate.h"

@class AppStateChangeNotifier, DevicePicker, NSArray, NSDictionary, NSMutableDictionary, NSString, NSTimer;

@interface DiscoveryManager : NSObject <DiscoveryProviderDelegate, ServiceConfigDelegate, ConnectableDeviceDelegate>
{
    NSMutableDictionary *_allDevices;
    NSMutableDictionary *_compatibleDevices;
    _Bool _shouldResumeSearch;
    _Bool _searching;
    DevicePicker *_currentPicker;
    NSTimer *_ssidTimer;
    NSString *_currentSSID;
    _Bool _useDeviceStore;
    int _pairingLevel;
    id <DiscoveryManagerDelegate> _delegate;
    NSArray *_capabilityFilters;
    id <ConnectableDeviceStore> _deviceStore;
    NSDictionary *_deviceClasses;
    NSArray *_discoveryProviders;
    AppStateChangeNotifier *_appStateChangeNotifier;
}

+ (id)sharedManagerWithDeviceStore:(id)arg1;
+ (id)sharedManager;
+ (id)_sharedManager;
@property(readonly, nonatomic) AppStateChangeNotifier *appStateChangeNotifier; // @synthesize appStateChangeNotifier=_appStateChangeNotifier;
@property(readonly, nonatomic) NSArray *discoveryProviders; // @synthesize discoveryProviders=_discoveryProviders;
@property(readonly, nonatomic) NSDictionary *deviceClasses; // @synthesize deviceClasses=_deviceClasses;
@property(retain, nonatomic) id <ConnectableDeviceStore> deviceStore; // @synthesize deviceStore=_deviceStore;
@property(retain, nonatomic) NSArray *capabilityFilters; // @synthesize capabilityFilters=_capabilityFilters;
@property(nonatomic) __weak id <DiscoveryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool useDeviceStore; // @synthesize useDeviceStore=_useDeviceStore;
@property(nonatomic) int pairingLevel; // @synthesize pairingLevel=_pairingLevel;
- (void).cxx_destruct;
- (void)serviceConfigUpdate:(id)arg1;
- (id)devicePicker;
- (id)lookupMatchingDeviceForDeviceStore:(id)arg1;
- (void)connectableDeviceDisconnected:(id)arg1 withError:(id)arg2;
- (void)connectableDeviceReady:(id)arg1;
- (void)connectableDevice:(id)arg1 capabilitiesAdded:(id)arg2 removed:(id)arg3;
- (void)addServiceDescription:(id)arg1 toDevice:(id)arg2;
- (void)discoveryProvider:(id)arg1 didFailWithError:(id)arg2;
- (void)discoveryProvider:(id)arg1 didLoseService:(id)arg2;
- (void)discoveryProvider:(id)arg1 didFindService:(id)arg2;
- (id)deviceForAddress:(id)arg1;
- (void)resumeDiscovery;
- (void)pauseDiscovery;
- (void)stopDiscovery;
- (void)startDiscovery;
- (void)handleDeviceLoss:(id)arg1;
- (void)handleDeviceUpdate:(id)arg1;
- (void)handleDeviceAdd:(id)arg1;
- (_Bool)deviceIsCompatible:(id)arg1;
- (id)compatibleDevices;
- (id)allDevices;
- (void)purgeDeviceList:(_Bool)arg1 curSSID:(id)arg2;
- (void)unregisterDeviceService:(Class)arg1 withDiscovery:(Class)arg2;
- (void)registerDeviceService:(Class)arg1 withDiscoveryProviderFactory:(CDUnknownBlockType)arg2;
- (void)registerDeviceService:(Class)arg1 withDiscovery:(Class)arg2;
- (void)registerDefaultServices;
- (id)initWithAppStateChangeNotifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

