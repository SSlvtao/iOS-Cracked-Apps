//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQDYPluginFeedsReqDispatch : NSObject
{
}

+ (id)getFeedsRequestBufferForPlugin:(id)arg1 skip:(_Bool *)arg2 location:(id)arg3;
+ (id)getQStoryPluginExtraInfo;
+ (_Bool)readInJoySkipReq;
+ (id)readInJoyExtraInfo;
+ (id)getNearbyPluginExtraInfoWithLocation:(id)arg1;
+ (id)getGroupTribePluginExtraInfoWithLocation:(id)arg1;
+ (id)dictionaryToJson:(id)arg1;
+ (id)getExtraUpdInfoDic:(id)arg1;
+ (id)getPluginExtraInfo;
+ (int)getlastSqDynamicFeedsTime;
+ (id)getsqDyncFeedInfo;

@end

