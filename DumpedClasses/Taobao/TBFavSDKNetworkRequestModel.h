//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBFavSDKNetworkRequestModel : NSObject
{
    NSDictionary *_serviceParamDic;
    NSDictionary *_businessParamDic;
    NSString *_apiName;
}

@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) NSDictionary *businessParamDic; // @synthesize businessParamDic=_businessParamDic;
@property(retain, nonatomic) NSDictionary *serviceParamDic; // @synthesize serviceParamDic=_serviceParamDic;
- (void).cxx_destruct;

@end
