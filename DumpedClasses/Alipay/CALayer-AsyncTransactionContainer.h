//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "VZFAsyncDrawingTransactionInterface.h"

@class NSString, VZFAsyncDrawingTransaction;

@interface CALayer (AsyncTransactionContainer) <VZFAsyncDrawingTransactionInterface>
- (void)vz_asyncTransactionContainerStateDidChange;
- (void)vz_cancelAsyncTransactions;
- (void)vz_asyncTransactionContainerDidCompleteTransaction:(id)arg1;
- (void)vz_asyncTransactionContainerWillBeginTransaction:(id)arg1;
@property(readonly, retain, nonatomic) CALayer *parentTransactionContainer;
- (void)setParentTransactionContainer:(id)arg1;
@property(readonly, retain, nonatomic) VZFAsyncDrawingTransaction *asyncTransaction;
- (void)setAsyncTransaction:(id)arg1;
@property(readonly, nonatomic) unsigned long long asyncTransactionContainerState;
- (void)setAsyncTransactionContainerState:(unsigned long long)arg1;
- (id)asyncLayerTransactions;
- (void)setAsyncLayerTransactions:(id)arg1;
- (id)currentAsyncTransaction;
- (void)setCurrentAsyncTransaction:(id)arg1;
@property(nonatomic) _Bool isAsyncTransactionContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

