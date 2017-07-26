//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSArray, NSDictionary, NSString, QLASIHTTPRequest;

@interface QLPKPopularyListModel : QLRequestModel
{
    NSString *_dataKey;
    NSArray *_aryPKGroups;
    NSDictionary *_dicGroupConfigs;
    NSString *_propsDataKey;
    QLASIHTTPRequest *_dataRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(copy, nonatomic) NSString *propsDataKey; // @synthesize propsDataKey=_propsDataKey;
@property(retain, nonatomic) NSDictionary *dicGroupConfigs; // @synthesize dicGroupConfigs=_dicGroupConfigs;
@property(retain, nonatomic) NSArray *aryPKGroups; // @synthesize aryPKGroups=_aryPKGroups;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (void)dealloc;

@end

