//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class CTFioContactInfo, CTFioFlightInfo, CTFioOrderInfo, CTFioPriceInfo, CTFioUserInfo, NSMutableArray;

@interface CTFioRequestCacheBean : CTJSONModel
{
    int _fioPageType;
    CTFioFlightInfo *_FlightInfo;
    CTFioPriceInfo *_PriceInfo;
    CTFioUserInfo *_UserInfo;
    CTFioContactInfo *_ContactInfo;
    NSMutableArray *_Segments;
    CTFioOrderInfo *_OrderInfo;
    NSMutableArray *_PassengerInfo;
    NSMutableArray *_PolicyList;
}

@property(nonatomic) int fioPageType; // @synthesize fioPageType=_fioPageType;
@property(retain, nonatomic) NSMutableArray *PolicyList; // @synthesize PolicyList=_PolicyList;
@property(retain, nonatomic) NSMutableArray *PassengerInfo; // @synthesize PassengerInfo=_PassengerInfo;
@property(retain, nonatomic) CTFioOrderInfo *OrderInfo; // @synthesize OrderInfo=_OrderInfo;
@property(retain, nonatomic) NSMutableArray *Segments; // @synthesize Segments=_Segments;
@property(retain, nonatomic) CTFioContactInfo *ContactInfo; // @synthesize ContactInfo=_ContactInfo;
@property(retain, nonatomic) CTFioUserInfo *UserInfo; // @synthesize UserInfo=_UserInfo;
@property(retain, nonatomic) CTFioPriceInfo *PriceInfo; // @synthesize PriceInfo=_PriceInfo;
@property(retain, nonatomic) CTFioFlightInfo *FlightInfo; // @synthesize FlightInfo=_FlightInfo;
- (void).cxx_destruct;
- (int)getAgeFromBirthday:(id)arg1;
- (id)getUserInfoModel;
- (void)saveWithIntFlightOrderResultCache:(id)arg1;
- (void)saveWithOrderResultCache:(id)arg1;
- (void)saveWithCacheBean:(id)arg1;
- (id)json;

@end
