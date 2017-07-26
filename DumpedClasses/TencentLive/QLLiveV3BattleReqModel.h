//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSMutableArray, NSString, QLASIHTTPRequest;

@interface QLLiveV3BattleReqModel : QLRequestModel
{
    NSString *_dataKey;
    NSMutableArray *_dataArray;
    QLASIHTTPRequest *_dataRequest;
    NSString *_pageContext;
}

@property(retain, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
- (void).cxx_destruct;
- (void)requestDidRetryRequest:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)dealWithGameDetailsResponse:(id)arg1 resp:(id)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;

@end

