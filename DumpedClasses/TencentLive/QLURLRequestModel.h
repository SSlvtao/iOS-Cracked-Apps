//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTURLRequestModel.h"

@class NSMutableArray, NSString;

@interface QLURLRequestModel : TTURLRequestModel
{
    NSMutableArray *_listRequestURLs;
    NSString *modify_time;
}

@property(retain, nonatomic) NSString *modify_time; // @synthesize modify_time;
- (void).cxx_destruct;
- (void)sendRequest:(id)arg1;
- (_Bool)qlLoadRequestFromCache:(id)arg1;
- (_Bool)qlloadFromCache:(id)arg1 cacheKey:(id)arg2 expires:(double)arg3 fromDisk:(_Bool)arg4 data:(id *)arg5 error:(id *)arg6 timestamp:(id *)arg7;
- (void)removeAllUrlInModel;
- (void)didCancelLoad;
- (void)requestDidFinishLoad:(id)arg1;
- (id)addModifyTime:(id)arg1;
- (id)init;

@end

