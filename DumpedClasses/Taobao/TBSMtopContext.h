//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBSMtopContext : NSObject
{
    _Bool _isNeedEncode;
    _Bool _isEnableWUA;
    NSString *_api;
    NSString *_version;
    NSDictionary *_params;
}

@property(nonatomic) _Bool isEnableWUA; // @synthesize isEnableWUA=_isEnableWUA;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) _Bool isNeedEncode; // @synthesize isNeedEncode=_isNeedEncode;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *api; // @synthesize api=_api;
- (void).cxx_destruct;

@end

