//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImmPayEventPlugin.h"

@class MQPVerifyId, NSDictionary, NSString;

@interface ImmPayPluginVerifyId : ImmPayEventPlugin
{
    NSString *_loadTxt;
    MQPVerifyId *_verifyId;
    NSDictionary *_verifyIdParams;
}

+ (void)load;
@property(retain, nonatomic) NSDictionary *verifyIdParams; // @synthesize verifyIdParams=_verifyIdParams;
@property(retain, nonatomic) MQPVerifyId *verifyId; // @synthesize verifyId=_verifyId;
@property(retain, nonatomic) NSString *loadTxt; // @synthesize loadTxt=_loadTxt;
- (void).cxx_destruct;
- (void)handleVIdWithCode:(id)arg1 andToken:(id)arg2;
- (void)onVerifyId:(id)arg1 params:(id)arg2;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

@end

