//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TADMediaConnectionDelegate.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, TADMediaConnection;

@interface TADVideoAdPreloader : NSObject <TADMediaConnectionDelegate>
{
    _Bool _isRequesting;
    NSString *_requestId;
    NSMutableDictionary *_orderIndexMap;
    NSMutableDictionary *_playroundMap;
    NSMutableDictionary *_adidMap;
    NSMutableDictionary *_orderDataMap;
    TADMediaConnection *_connection;
    NSArray *_adTypeList;
    NSDictionary *_userInfo;
    double _lastRequestTime;
    NSDictionary *_responseDict;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) NSDictionary *responseDict; // @synthesize responseDict=_responseDict;
@property(nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSArray *adTypeList; // @synthesize adTypeList=_adTypeList;
@property(retain, nonatomic) TADMediaConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableDictionary *orderDataMap; // @synthesize orderDataMap=_orderDataMap;
@property(retain, nonatomic) NSMutableDictionary *adidMap; // @synthesize adidMap=_adidMap;
@property(retain, nonatomic) NSMutableDictionary *playroundMap; // @synthesize playroundMap=_playroundMap;
@property(retain, nonatomic) NSMutableDictionary *orderIndexMap; // @synthesize orderIndexMap=_orderIndexMap;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)resetMap;
- (id)dataWithJSONDict:(id)arg1;
- (id)dictWithJSONData:(id)arg1;
- (id)adTypeString:(long long)arg1;
- (id)currentDayString;
- (void)cacheImage:(id)arg1;
- (void)parseItemList:(id)arg1;
- (void)fillIndexMapWithMediaId:(id)arg1 date:(id)arg2 adType:(id)arg3 adInfo:(id)arg4;
- (void)parseIndexList:(id)arg1;
- (void)parseResponse:(id)arg1;
- (void)connetionDidFailedWithError:(id)arg1;
- (void)connetionDidReceiveMedias:(id)arg1;
- (void)connection:(id)arg1 jsonData:(id)arg2;
- (id)adidByMediaId:(id)arg1;
- (id)mediaItemByMediaId:(id)arg1 adType:(long long)arg2;
- (void)syncUserInfo:(id)arg1;
- (void)requestForPreload;
- (_Bool)checkAndUpdateCache;
- (void)preloadVideoAdsWithUserInfo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

