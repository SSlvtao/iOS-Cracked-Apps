//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTChatConfigManager.h"

@class CTHTTPClient;

@interface CTChatHTTPClientManager : CTChatConfigManager
{
    CTHTTPClient *client;
}

+ (id)clientManager;
- (void).cxx_destruct;
- (void)postJsonAction:(id)arg1 parameter:(id)arg2 timeout:(unsigned long long)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)postJsonAction:(id)arg1 parameter:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)postJsonAction:(int)arg1 remoteType:(id)arg2 parameter:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)postJsonAction:(int)arg1 remoteType:(id)arg2 parameter:(id)arg3 resultCallBack:(CDUnknownBlockType)arg4;
- (id)httpClient;
- (id)init;

@end
