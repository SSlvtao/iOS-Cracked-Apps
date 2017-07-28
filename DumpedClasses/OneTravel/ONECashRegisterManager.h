//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONEAppDelegateStoreDelegate.h"

@class NSHashTable, NSMutableDictionary, NSString;

@interface ONECashRegisterManager : NSObject <ONEAppDelegateStoreDelegate>
{
    NSMutableDictionary *_componentVCDic;
    NSHashTable *_observers;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *componentVCDic; // @synthesize componentVCDic=_componentVCDic;
- (void).cxx_destruct;
- (void)applicationDidReceiveOpidDict:(id)arg1;
- (void)enumObserversWithBlock:(CDUnknownBlockType)arg1 responseSelector:(SEL)arg2;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1;
- (void)handleOpenURL:(id)arg1;
- (id)createComponetWithType:(id)arg1 params:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
