//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OMistListItem.h"

@class NSString;

@interface O2OLCRecommendMerchantItem : O2OMistListItem
{
    NSString *_shopId;
    NSString *_icon;
    NSString *_name;
    NSString *_desc;
    NSString *_actionParam;
    NSString *_distance;
    NSString *_busiName;
}

+ (id)itemFromResp:(id)arg1 query:(id)arg2 viewController:(id)arg3 tplId:(id)arg4 tplJson:(id)arg5;
+ (id)itemFromResp:(id)arg1 viewController:(id)arg2 tplId:(id)arg3 tplJson:(id)arg4;
@property(copy, nonatomic) NSString *busiName; // @synthesize busiName=_busiName;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *actionParam; // @synthesize actionParam=_actionParam;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end
