//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ONEThirdPartyLoginAuthorizationController : NSObject
{
    NSDictionary *_dictionary;
    NSString *_type;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAlipayLoginAuthCallbackWithData:(id)arg1;
- (void)didReceiveAlipayAuthorizationCallbackNotification:(id)arg1;
- (void)run;
- (id)initWithDictionary:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

