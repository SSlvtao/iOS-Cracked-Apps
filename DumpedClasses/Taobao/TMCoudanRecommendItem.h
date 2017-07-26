//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TMCoudanRecommendItem : NSObject
{
    _Bool _isSku;
    _Bool _showUTFlag;
    NSString *_itemId;
    NSString *_itemName;
    NSString *_price;
    NSString *_promotionPrice;
    NSString *_categoryId;
    NSString *_url;
    NSString *_pic;
    NSString *_commentTimes;
    NSString *_sellCount;
    NSString *_monthSellCount;
    NSString *_sellerId;
    NSString *_rate;
    unsigned long long _tpId;
    NSDictionary *_ext;
}

@property(nonatomic) _Bool showUTFlag; // @synthesize showUTFlag=_showUTFlag;
@property(nonatomic) _Bool isSku; // @synthesize isSku=_isSku;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(nonatomic) unsigned long long tpId; // @synthesize tpId=_tpId;
@property(retain, nonatomic) NSString *rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *monthSellCount; // @synthesize monthSellCount=_monthSellCount;
@property(retain, nonatomic) NSString *sellCount; // @synthesize sellCount=_sellCount;
@property(retain, nonatomic) NSString *commentTimes; // @synthesize commentTimes=_commentTimes;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)priceStringWithNumber:(id)arg1;
- (id)initWithData:(id)arg1;

@end
