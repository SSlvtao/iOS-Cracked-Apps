//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMHttpRequest.h"

@class NSString;

@interface NMPhoneLoginRequest : NMHttpRequest
{
    NSString *_phoneNumber;
    NSString *_password;
    _Bool _https;
}

@property(readonly, nonatomic) _Bool https; // @synthesize https=_https;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)arg1 password:(id)arg2 https:(_Bool)arg3;

@end

