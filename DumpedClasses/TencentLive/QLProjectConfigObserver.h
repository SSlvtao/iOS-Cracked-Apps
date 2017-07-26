//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "P_QNBObserverConfig.h"

@class NSHashTable, NSString;

@interface QLProjectConfigObserver : NSObject <P_QNBObserverConfig>
{
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (id)allObservers;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)findValueWithObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

