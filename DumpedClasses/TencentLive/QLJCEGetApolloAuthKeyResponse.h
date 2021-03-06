//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSData, NSString;

@interface QLJCEGetApolloAuthKeyResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    int jcev2_p_8_r_expireIn;
    NSString *jcev2_p_1_r_errMsg;
    long long jcev2_p_2_r_mainSvrId;
    long long jcev2_p_3_r_mainSvrUrl1;
    long long jcev2_p_4_r_mainSvrUrl2;
    long long jcev2_p_5_r_slaveSvrId;
    long long jcev2_p_6_r_slaveSvrUrl1;
    long long jcev2_p_7_r_slaveSvrUrl2;
    NSString *jcev2_p_9_r_authKey;
    NSData *jcev2_p_10_r_authKeyData;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_authKeyData, setter=setJce_authKeyData:) NSData *jcev2_p_10_r_authKeyData; // @synthesize jcev2_p_10_r_authKeyData;
@property(retain, nonatomic, getter=jce_authKey, setter=setJce_authKey:) NSString *jcev2_p_9_r_authKey; // @synthesize jcev2_p_9_r_authKey;
@property(nonatomic, getter=jce_expireIn, setter=setJce_expireIn:) int jcev2_p_8_r_expireIn; // @synthesize jcev2_p_8_r_expireIn;
@property(nonatomic, getter=jce_slaveSvrUrl2, setter=setJce_slaveSvrUrl2:) long long jcev2_p_7_r_slaveSvrUrl2; // @synthesize jcev2_p_7_r_slaveSvrUrl2;
@property(nonatomic, getter=jce_slaveSvrUrl1, setter=setJce_slaveSvrUrl1:) long long jcev2_p_6_r_slaveSvrUrl1; // @synthesize jcev2_p_6_r_slaveSvrUrl1;
@property(nonatomic, getter=jce_slaveSvrId, setter=setJce_slaveSvrId:) long long jcev2_p_5_r_slaveSvrId; // @synthesize jcev2_p_5_r_slaveSvrId;
@property(nonatomic, getter=jce_mainSvrUrl2, setter=setJce_mainSvrUrl2:) long long jcev2_p_4_r_mainSvrUrl2; // @synthesize jcev2_p_4_r_mainSvrUrl2;
@property(nonatomic, getter=jce_mainSvrUrl1, setter=setJce_mainSvrUrl1:) long long jcev2_p_3_r_mainSvrUrl1; // @synthesize jcev2_p_3_r_mainSvrUrl1;
@property(nonatomic, getter=jce_mainSvrId, setter=setJce_mainSvrId:) long long jcev2_p_2_r_mainSvrId; // @synthesize jcev2_p_2_r_mainSvrId;
@property(retain, nonatomic, getter=jce_errMsg, setter=setJce_errMsg:) NSString *jcev2_p_1_r_errMsg; // @synthesize jcev2_p_1_r_errMsg;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

