//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TXMtopInfo : NSObject
{
    _Bool _needEcode;
    _Bool _autoLogin;
    NSString *_api;
    NSString *_version;
    Class _returnClass;
}

@property(nonatomic) _Bool autoLogin; // @synthesize autoLogin=_autoLogin;
@property(retain, nonatomic) Class returnClass; // @synthesize returnClass=_returnClass;
@property(nonatomic) _Bool needEcode; // @synthesize needEcode=_needEcode;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *api; // @synthesize api=_api;
- (void).cxx_destruct;
- (id)initWithApi:(id)arg1 version:(id)arg2;
- (id)init;

@end

