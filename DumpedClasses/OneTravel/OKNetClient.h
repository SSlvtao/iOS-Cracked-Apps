//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, OKNetDispatcher, OKNetRequestMap, OKNetSecurityPolicy;

@interface OKNetClient : NSObject
{
    NSString *_name;
    id <OKNetDNSProtocol> _dns;
    OKNetDispatcher *_dispatcher;
    OKNetSecurityPolicy *_securityPolicy;
    NSArray *_interceptors;
    NSArray *_networkInterceptors;
    OKNetRequestMap *_requestMap;
    id _AFNManager;
}

+ (id)clientWithBuilder:(CDUnknownBlockType)arg1;
+ (id)client;
@property(retain, nonatomic) id AFNManager; // @synthesize AFNManager=_AFNManager;
@property(retain, nonatomic) OKNetRequestMap *requestMap; // @synthesize requestMap=_requestMap;
@property(retain, nonatomic) NSArray *networkInterceptors; // @synthesize networkInterceptors=_networkInterceptors;
@property(retain, nonatomic) NSArray *interceptors; // @synthesize interceptors=_interceptors;
@property(retain, nonatomic) OKNetSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) OKNetDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <OKNetDNSProtocol> dns; // @synthesize dns=_dns;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)makeCall:(id)arg1;
- (id)requestWithBuilder:(CDUnknownBlockType)arg1;
- (id)onereq_asyncCallWithBuilder:(CDUnknownBlockType)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)onereq_asyncCallWithBuilder:(CDUnknownBlockType)arg1 Host:(id)arg2 path:(id)arg3 method:(unsigned long long)arg4 params:(CDUnknownBlockType)arg5 success:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (id)asyncPOST:(id)arg1 parameters:(id)arg2 builder:(CDUnknownBlockType)arg3 onResponse:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
- (id)asyncGET:(id)arg1 parameters:(id)arg2 builder:(CDUnknownBlockType)arg3 onResponse:(CDUnknownBlockType)arg4 onFailure:(CDUnknownBlockType)arg5;
- (id)asyncCallWithBuilder:(CDUnknownBlockType)arg1 onResponse:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (id)asyncCall:(id)arg1 onResponse:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;

@end

