//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APMidasBaseReq, APMidasResp;

@interface APMidasPageEntery : NSObject
{
    APMidasBaseReq *oriReq;
    APMidasResp *lastResp;
    id <APMidasPayDelegate> payDelegate;
}

+ (id)instance;
@property(nonatomic) id <APMidasPayDelegate> payDelegate; // @synthesize payDelegate;
@property(retain, nonatomic) APMidasResp *lastResp; // @synthesize lastResp;
@property(retain, nonatomic) APMidasBaseReq *oriReq; // @synthesize oriReq;
- (void).cxx_destruct;
- (_Bool)isWechatSessionId:(id)arg1 type:(id)arg2;
- (void)backToGame:(id)arg1 isSuccess:(_Bool)arg2;
- (void)buyAgain:(id)arg1;
- (void)doLaunch:(id)arg1;
- (_Bool)checkAndSet:(id)arg1 delegate:(id)arg2;
- (void)interLaunch:(id)arg1 delegate:(id)arg2;
- (void)lauch:(id)arg1 delegate:(id)arg2;
- (void)net:(id)arg1 delegate:(id)arg2;

@end

