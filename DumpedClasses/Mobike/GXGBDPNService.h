//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface GXGBDPNService : NSObject
{
    _Bool _isStop;
    NSArray *_methodArray;
    long long _methodIndex;
    long long _pnResponseCode;
}

+ (long long)isFetchPNEnable;
+ (_Bool)isExistValidLocalPN;
+ (void)savePNResponseCode:(long long)arg1;
+ (_Bool)isFetchNTimeEnd;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(nonatomic) long long pnResponseCode; // @synthesize pnResponseCode=_pnResponseCode;
@property(nonatomic) long long methodIndex; // @synthesize methodIndex=_methodIndex;
@property(retain, nonatomic) NSArray *methodArray; // @synthesize methodArray=_methodArray;
- (void).cxx_destruct;
- (id)md5String:(id)arg1;
- (id)getIp;
- (id)getPostParms:(id)arg1 forDictionary:(id)arg2;
- (void)getDataForPostRequest:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)getnewlotPb;
- (id)getzjlotpbForSub:(id)arg1;
- (void)getzjlotpb;
- (void)getALLlotPb;
- (void)getyodPb;
- (void)getF654CD32A442803C;
- (void)saveSourcePNCODE:(id)arg1;
- (void)endPnCapture;
- (void)startOrNextPnCapture_OnMain;
- (void)startOrNextPnCapture;
- (id)getFetchPnMethod:(id)arg1 andMobile:(int)arg2;
- (void)gtpStop;
- (void)gtpStart;
- (void)dealloc;
- (id)init;

@end

