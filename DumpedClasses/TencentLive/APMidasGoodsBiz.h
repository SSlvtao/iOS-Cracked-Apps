//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APMidasBizDelegate.h"

@class NSString;

@interface APMidasGoodsBiz : NSObject <APMidasBizDelegate>
{
}

- (void)buy;
- (_Bool)checkChannelForBiz:(id)arg1;
- (void)enterNumListViewCtrl;
- (void)enterNumInputViewCtrl;
- (_Bool)createUiModel;
- (void)getBuyInfo;
- (void)keepReqParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

