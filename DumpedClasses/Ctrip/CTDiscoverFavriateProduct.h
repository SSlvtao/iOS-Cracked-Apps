//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSString;

@interface CTDiscoverFavriateProduct : CTJSONModel
{
    int _FavoriteID;
    int _Price;
    int _FavoritePrice;
    int _PriceDiff;
    NSString *_BizType;
    NSString *_ProductID;
    NSString *_ProductName;
    NSString *_URL;
    NSString *_ImageUrl;
    NSString *_Rating;
    NSString *_Stars;
    NSString *_DeparturePort;
    NSString *_DepartureSchedule;
    int *_CityId;
    NSString *_CityName;
    NSString *_ScenicSpot;
}

@property(copy, nonatomic) NSString *ScenicSpot; // @synthesize ScenicSpot=_ScenicSpot;
@property(copy, nonatomic) NSString *CityName; // @synthesize CityName=_CityName;
@property(nonatomic) int *CityId; // @synthesize CityId=_CityId;
@property(copy, nonatomic) NSString *DepartureSchedule; // @synthesize DepartureSchedule=_DepartureSchedule;
@property(copy, nonatomic) NSString *DeparturePort; // @synthesize DeparturePort=_DeparturePort;
@property(copy, nonatomic) NSString *Stars; // @synthesize Stars=_Stars;
@property(copy, nonatomic) NSString *Rating; // @synthesize Rating=_Rating;
@property(nonatomic) int PriceDiff; // @synthesize PriceDiff=_PriceDiff;
@property(nonatomic) int FavoritePrice; // @synthesize FavoritePrice=_FavoritePrice;
@property(nonatomic) int Price; // @synthesize Price=_Price;
@property(copy, nonatomic) NSString *ImageUrl; // @synthesize ImageUrl=_ImageUrl;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *ProductName; // @synthesize ProductName=_ProductName;
@property(copy, nonatomic) NSString *ProductID; // @synthesize ProductID=_ProductID;
@property(copy, nonatomic) NSString *BizType; // @synthesize BizType=_BizType;
@property(nonatomic) int FavoriteID; // @synthesize FavoriteID=_FavoriteID;
- (void).cxx_destruct;

@end
