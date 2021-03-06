//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class CTTrain6ChooseModel, CTTrainPrivateTicketModel, CTTrainSalePackageInfoViewModel, CustomerAddressItemModel, JLKeepTimeInfoModel, NSData, NSDate, NSMutableArray, NSString, PriceType, Train12306TrainModel, TrainBookingInfoV3Model, TrainOpenCarConfigureResponse, TrainSeatInfoV3Model, TrainSeatVendorTypeV3Model, TrainTicketVendorTypeV3Model;

@interface CTTrainOrderCacheBean : CTCacheBean
{
    _Bool _isBookable;
    _Bool _isReservationOrder;
    _Bool _isAcceptAlternativeSeat;
    _Bool _isSelectInvoice;
    _Bool _isOffsetTicket;
    _Bool _isSaleDelivery;
    _Bool _isDeliveryTicket;
    _Bool _isSaveDelivery;
    _Bool _isCheckCode;
    _Bool _isPickUp;
    _Bool _isContinueOrder;
    _Bool _canUseCoupon;
    _Bool _isOpenRealTimePay;
    _Bool _isPreHoldSeat;
    _Bool _isToRiskOrder;
    _Bool _fromMonitorTicketPage;
    _Bool _needJianLouSuccessRate;
    _Bool _isUpRateForjianLou;
    _Bool _canPressUpJianLouRate;
    _Bool _isOpenDelivery;
    _Bool _isIDCardFraudulented;
    _Bool _isBindAccount;
    _Bool _isOpenAllDayJL;
    _Bool _isTurnOnAllDayJL;
    _Bool _isOpenAcceptRecTrainJL;
    _Bool _isTurnOnAcceptRecTrainJL;
    _Bool _isCanBuyPrivateSelect;
    _Bool _canBuyXiaPuTicket;
    _Bool _isUseFastPay;
    _Bool _isShowFastPay;
    _Bool _isShowCar;
    _Bool _isPlatformDelivery;
    _Bool _isClientHoldSeat;
    _Bool _isChooseSeat;
    int _deliveryID;
    int _deliveryAreaID;
    int _offY;
    int _pushValidateContactResultCode;
    int _getValidateContactResultCode;
    int _getValidateContactRate;
    int _preOrderCreateResult;
    int _transferSequence;
    NSString *_departStation;
    NSString *_arriveStation;
    NSString *_departDate;
    NSMutableArray *_stopStationList;
    NSString *_slogan;
    TrainBookingInfoV3Model *_selectTrainInfoModel;
    TrainSeatInfoV3Model *_selectSeatInfoModel;
    NSString *_alternativeSeat;
    NSString *_alternativeSeatDesc;
    NSMutableArray *_selectPassengerList;
    NSMutableArray *_arrayAllPassengers;
    CustomerAddressItemModel *_selectInvoiceAddressModel;
    NSString *_contactPhone;
    PriceType *_totalPrice;
    long long _orderID;
    NSString *_orderResultMessage;
    NSString *_paymentRequestId;
    NSString *_deliveryReceiverName;
    NSString *_deliveryAddress;
    NSString *_deliveryAreaDesc;
    PriceType *_deliveryFee;
    PriceType *_deliveryServiceFee;
    NSString *_deliveryHint;
    NSString *_orderCheckCode;
    NSString *_checkCodeKey;
    NSData *_checkCodeImage;
    NSString *_errorMessage;
    TrainSeatVendorTypeV3Model *_selectSeatVendorTypeModel;
    TrainTicketVendorTypeV3Model *_selectTicketVendorTypeModel;
    CTTrainPrivateTicketModel *_customerTicketModel;
    JLKeepTimeInfoModel *_selectedJLKeepTimeInfoModel;
    NSMutableArray *_jLKeepTimeList;
    long long _payTypeList;
    long long _subPayTypeList;
    long long _result;
    NSString *_resultMessage;
    NSMutableArray *_salePackageList;
    CTTrainSalePackageInfoViewModel *_salePackageSelected;
    NSString *_packagePrompt;
    NSMutableArray *_canBuySeatArray;
    NSString *_couponCode;
    PriceType *_couponPrice;
    NSString *_couponDesc;
    NSString *_couponFlagInfo;
    NSMutableArray *_selectSeatArray;
    long long _riskOrderId;
    NSString *_jianLouSuccessRate;
    NSString *_jianLouSuccessRateReport;
    NSString *_resultUrl;
    NSMutableArray *_arrayAll12306Passengers;
    NSMutableArray *_arrayUseful12306Passengers;
    NSMutableArray *_arrayQiangPiaoBeiXuanCheCi;
    PriceType *_topCheciPrice;
    NSMutableArray *_arrayQiangPiaoBeiXuanZuoXi;
    PriceType *_topSeatPrice;
    NSDate *_qiangPiaoShiXiaoDate;
    NSString *_qiangPiaoBeginDateTime;
    NSString *_qiangPiaoEndDateTime;
    long long _qiangPiaoKeepTime;
    NSString *_deliveryTitle;
    NSString *_deliverySubTitle;
    NSString *_deliveryFullAddress;
    NSString *_otherTrainsString;
    NSMutableArray *_otherTrainsArray;
    NSString *_openAllDayJLTitle;
    NSString *_openAllDayJLDesc;
    NSString *_openAcceptRecTrainJLTitle;
    NSString *_openAcceptRecTrainJLDesc;
    NSMutableArray *_trainAppendProductList;
    PriceType *_maxTicketPrice;
    NSString *_deliverTips;
    NSString *_pushValidateContactResultMessage;
    NSString *_getValidateKey;
    NSString *_getValidateContactResultMessage;
    NSString *_preOrderCreateResultMessage;
    long long _preOrderCreatePreOrderId;
    NSString *_preOrderCreatePaymentRequestId;
    NSString *_preOrderReCallUrl;
    TrainOpenCarConfigureResponse *_carConfigure;
    NSMutableArray *_customCarUseList;
    NSString *_passengerTips;
    Train12306TrainModel *_trainModel;
    CTTrain6ChooseModel *_chooseModel;
}

@property(retain, nonatomic) CTTrain6ChooseModel *chooseModel; // @synthesize chooseModel=_chooseModel;
@property(nonatomic) _Bool isChooseSeat; // @synthesize isChooseSeat=_isChooseSeat;
@property(retain, nonatomic) Train12306TrainModel *trainModel; // @synthesize trainModel=_trainModel;
@property(nonatomic) _Bool isClientHoldSeat; // @synthesize isClientHoldSeat=_isClientHoldSeat;
@property(nonatomic) int transferSequence; // @synthesize transferSequence=_transferSequence;
@property(copy, nonatomic) NSString *passengerTips; // @synthesize passengerTips=_passengerTips;
@property(nonatomic) _Bool isPlatformDelivery; // @synthesize isPlatformDelivery=_isPlatformDelivery;
@property(retain, nonatomic) NSMutableArray *customCarUseList; // @synthesize customCarUseList=_customCarUseList;
@property(retain, nonatomic, setter=setCarConfigure:) TrainOpenCarConfigureResponse *carConfigure; // @synthesize carConfigure=_carConfigure;
@property(nonatomic) _Bool isShowCar; // @synthesize isShowCar=_isShowCar;
@property(nonatomic) _Bool isShowFastPay; // @synthesize isShowFastPay=_isShowFastPay;
@property(nonatomic) _Bool isUseFastPay; // @synthesize isUseFastPay=_isUseFastPay;
@property(copy, nonatomic) NSString *preOrderReCallUrl; // @synthesize preOrderReCallUrl=_preOrderReCallUrl;
@property(copy, nonatomic) NSString *preOrderCreatePaymentRequestId; // @synthesize preOrderCreatePaymentRequestId=_preOrderCreatePaymentRequestId;
@property(nonatomic) long long preOrderCreatePreOrderId; // @synthesize preOrderCreatePreOrderId=_preOrderCreatePreOrderId;
@property(copy, nonatomic) NSString *preOrderCreateResultMessage; // @synthesize preOrderCreateResultMessage=_preOrderCreateResultMessage;
@property(nonatomic) int preOrderCreateResult; // @synthesize preOrderCreateResult=_preOrderCreateResult;
@property(nonatomic) int getValidateContactRate; // @synthesize getValidateContactRate=_getValidateContactRate;
@property(copy, nonatomic) NSString *getValidateContactResultMessage; // @synthesize getValidateContactResultMessage=_getValidateContactResultMessage;
@property(nonatomic) int getValidateContactResultCode; // @synthesize getValidateContactResultCode=_getValidateContactResultCode;
@property(copy, nonatomic) NSString *getValidateKey; // @synthesize getValidateKey=_getValidateKey;
@property(copy, nonatomic) NSString *pushValidateContactResultMessage; // @synthesize pushValidateContactResultMessage=_pushValidateContactResultMessage;
@property(nonatomic) int pushValidateContactResultCode; // @synthesize pushValidateContactResultCode=_pushValidateContactResultCode;
@property(copy, nonatomic) NSString *deliverTips; // @synthesize deliverTips=_deliverTips;
@property(retain, nonatomic) PriceType *maxTicketPrice; // @synthesize maxTicketPrice=_maxTicketPrice;
@property(nonatomic) _Bool canBuyXiaPuTicket; // @synthesize canBuyXiaPuTicket=_canBuyXiaPuTicket;
@property(nonatomic) _Bool isCanBuyPrivateSelect; // @synthesize isCanBuyPrivateSelect=_isCanBuyPrivateSelect;
@property(retain, nonatomic) NSMutableArray *trainAppendProductList; // @synthesize trainAppendProductList=_trainAppendProductList;
@property(nonatomic) _Bool isTurnOnAcceptRecTrainJL; // @synthesize isTurnOnAcceptRecTrainJL=_isTurnOnAcceptRecTrainJL;
@property(copy, nonatomic) NSString *openAcceptRecTrainJLDesc; // @synthesize openAcceptRecTrainJLDesc=_openAcceptRecTrainJLDesc;
@property(copy, nonatomic) NSString *openAcceptRecTrainJLTitle; // @synthesize openAcceptRecTrainJLTitle=_openAcceptRecTrainJLTitle;
@property(nonatomic) _Bool isOpenAcceptRecTrainJL; // @synthesize isOpenAcceptRecTrainJL=_isOpenAcceptRecTrainJL;
@property(nonatomic) _Bool isTurnOnAllDayJL; // @synthesize isTurnOnAllDayJL=_isTurnOnAllDayJL;
@property(copy, nonatomic) NSString *openAllDayJLDesc; // @synthesize openAllDayJLDesc=_openAllDayJLDesc;
@property(copy, nonatomic) NSString *openAllDayJLTitle; // @synthesize openAllDayJLTitle=_openAllDayJLTitle;
@property(nonatomic) _Bool isOpenAllDayJL; // @synthesize isOpenAllDayJL=_isOpenAllDayJL;
@property(retain, nonatomic) NSMutableArray *otherTrainsArray; // @synthesize otherTrainsArray=_otherTrainsArray;
@property(retain, nonatomic) NSString *otherTrainsString; // @synthesize otherTrainsString=_otherTrainsString;
@property(retain, nonatomic) NSString *deliveryFullAddress; // @synthesize deliveryFullAddress=_deliveryFullAddress;
@property(retain, nonatomic) NSString *deliverySubTitle; // @synthesize deliverySubTitle=_deliverySubTitle;
@property(retain, nonatomic) NSString *deliveryTitle; // @synthesize deliveryTitle=_deliveryTitle;
@property(nonatomic) _Bool isBindAccount; // @synthesize isBindAccount=_isBindAccount;
@property(nonatomic, getter=qiangPiaoKeepTime) long long qiangPiaoKeepTime; // @synthesize qiangPiaoKeepTime=_qiangPiaoKeepTime;
@property(copy, nonatomic) NSString *qiangPiaoEndDateTime; // @synthesize qiangPiaoEndDateTime=_qiangPiaoEndDateTime;
@property(copy, nonatomic) NSString *qiangPiaoBeginDateTime; // @synthesize qiangPiaoBeginDateTime=_qiangPiaoBeginDateTime;
@property(retain, nonatomic) NSDate *qiangPiaoShiXiaoDate; // @synthesize qiangPiaoShiXiaoDate=_qiangPiaoShiXiaoDate;
@property(retain, nonatomic, getter=topSeatPrice) PriceType *topSeatPrice; // @synthesize topSeatPrice=_topSeatPrice;
@property(retain, nonatomic) NSMutableArray *arrayQiangPiaoBeiXuanZuoXi; // @synthesize arrayQiangPiaoBeiXuanZuoXi=_arrayQiangPiaoBeiXuanZuoXi;
@property(retain, nonatomic, getter=topCheciPrice) PriceType *topCheciPrice; // @synthesize topCheciPrice=_topCheciPrice;
@property(retain, nonatomic) NSMutableArray *arrayQiangPiaoBeiXuanCheCi; // @synthesize arrayQiangPiaoBeiXuanCheCi=_arrayQiangPiaoBeiXuanCheCi;
@property(retain, nonatomic) NSMutableArray *arrayUseful12306Passengers; // @synthesize arrayUseful12306Passengers=_arrayUseful12306Passengers;
@property(retain, nonatomic) NSMutableArray *arrayAll12306Passengers; // @synthesize arrayAll12306Passengers=_arrayAll12306Passengers;
@property(retain, nonatomic) NSString *resultUrl; // @synthesize resultUrl=_resultUrl;
@property(nonatomic) _Bool isIDCardFraudulented; // @synthesize isIDCardFraudulented=_isIDCardFraudulented;
@property(nonatomic) _Bool isOpenDelivery; // @synthesize isOpenDelivery=_isOpenDelivery;
@property(copy, nonatomic) NSString *jianLouSuccessRateReport; // @synthesize jianLouSuccessRateReport=_jianLouSuccessRateReport;
@property(nonatomic) _Bool canPressUpJianLouRate; // @synthesize canPressUpJianLouRate=_canPressUpJianLouRate;
@property(nonatomic) _Bool isUpRateForjianLou; // @synthesize isUpRateForjianLou=_isUpRateForjianLou;
@property(copy, nonatomic) NSString *jianLouSuccessRate; // @synthesize jianLouSuccessRate=_jianLouSuccessRate;
@property(nonatomic, getter=needJianLouSuccessRate) _Bool needJianLouSuccessRate; // @synthesize needJianLouSuccessRate=_needJianLouSuccessRate;
@property(nonatomic) _Bool fromMonitorTicketPage; // @synthesize fromMonitorTicketPage=_fromMonitorTicketPage;
@property(nonatomic) _Bool isToRiskOrder; // @synthesize isToRiskOrder=_isToRiskOrder;
@property(nonatomic) long long riskOrderId; // @synthesize riskOrderId=_riskOrderId;
@property(retain, nonatomic) NSMutableArray *selectSeatArray; // @synthesize selectSeatArray=_selectSeatArray;
@property(nonatomic) _Bool isPreHoldSeat; // @synthesize isPreHoldSeat=_isPreHoldSeat;
@property(nonatomic) _Bool isOpenRealTimePay; // @synthesize isOpenRealTimePay=_isOpenRealTimePay;
@property(retain, nonatomic) NSString *couponFlagInfo; // @synthesize couponFlagInfo=_couponFlagInfo;
@property(retain, nonatomic) NSString *couponDesc; // @synthesize couponDesc=_couponDesc;
@property(retain, nonatomic) PriceType *couponPrice; // @synthesize couponPrice=_couponPrice;
@property(retain, nonatomic) NSString *couponCode; // @synthesize couponCode=_couponCode;
@property(nonatomic) _Bool canUseCoupon; // @synthesize canUseCoupon=_canUseCoupon;
@property(retain, nonatomic) NSMutableArray *canBuySeatArray; // @synthesize canBuySeatArray=_canBuySeatArray;
@property(copy, nonatomic) NSString *packagePrompt; // @synthesize packagePrompt=_packagePrompt;
@property(retain, nonatomic) CTTrainSalePackageInfoViewModel *salePackageSelected; // @synthesize salePackageSelected=_salePackageSelected;
@property(retain, nonatomic) NSMutableArray *salePackageList; // @synthesize salePackageList=_salePackageList;
@property(nonatomic) _Bool isContinueOrder; // @synthesize isContinueOrder=_isContinueOrder;
@property(retain, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) long long subPayTypeList; // @synthesize subPayTypeList=_subPayTypeList;
@property(nonatomic) long long payTypeList; // @synthesize payTypeList=_payTypeList;
@property(retain, nonatomic) NSMutableArray *jLKeepTimeList; // @synthesize jLKeepTimeList=_jLKeepTimeList;
@property(retain, nonatomic) JLKeepTimeInfoModel *selectedJLKeepTimeInfoModel; // @synthesize selectedJLKeepTimeInfoModel=_selectedJLKeepTimeInfoModel;
@property(nonatomic) _Bool isPickUp; // @synthesize isPickUp=_isPickUp;
@property(retain, nonatomic) CTTrainPrivateTicketModel *customerTicketModel; // @synthesize customerTicketModel=_customerTicketModel;
@property(retain, nonatomic) TrainTicketVendorTypeV3Model *selectTicketVendorTypeModel; // @synthesize selectTicketVendorTypeModel=_selectTicketVendorTypeModel;
@property(retain, nonatomic) TrainSeatVendorTypeV3Model *selectSeatVendorTypeModel; // @synthesize selectSeatVendorTypeModel=_selectSeatVendorTypeModel;
@property(nonatomic) int offY; // @synthesize offY=_offY;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSData *checkCodeImage; // @synthesize checkCodeImage=_checkCodeImage;
@property(retain, nonatomic) NSString *checkCodeKey; // @synthesize checkCodeKey=_checkCodeKey;
@property(retain, nonatomic) NSString *orderCheckCode; // @synthesize orderCheckCode=_orderCheckCode;
@property(nonatomic) _Bool isCheckCode; // @synthesize isCheckCode=_isCheckCode;
@property(copy, nonatomic) NSString *deliveryHint; // @synthesize deliveryHint=_deliveryHint;
@property(retain, nonatomic) PriceType *deliveryServiceFee; // @synthesize deliveryServiceFee=_deliveryServiceFee;
@property(retain, nonatomic) PriceType *deliveryFee; // @synthesize deliveryFee=_deliveryFee;
@property(copy, nonatomic) NSString *deliveryAreaDesc; // @synthesize deliveryAreaDesc=_deliveryAreaDesc;
@property(nonatomic) _Bool isSaveDelivery; // @synthesize isSaveDelivery=_isSaveDelivery;
@property(nonatomic) int deliveryAreaID; // @synthesize deliveryAreaID=_deliveryAreaID;
@property(copy, nonatomic) NSString *deliveryAddress; // @synthesize deliveryAddress=_deliveryAddress;
@property(copy, nonatomic) NSString *deliveryReceiverName; // @synthesize deliveryReceiverName=_deliveryReceiverName;
@property(nonatomic) int deliveryID; // @synthesize deliveryID=_deliveryID;
@property(nonatomic) _Bool isDeliveryTicket; // @synthesize isDeliveryTicket=_isDeliveryTicket;
@property(nonatomic) _Bool isSaleDelivery; // @synthesize isSaleDelivery=_isSaleDelivery;
@property(nonatomic) _Bool isOffsetTicket; // @synthesize isOffsetTicket=_isOffsetTicket;
@property(copy, nonatomic) NSString *paymentRequestId; // @synthesize paymentRequestId=_paymentRequestId;
@property(copy, nonatomic) NSString *orderResultMessage; // @synthesize orderResultMessage=_orderResultMessage;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) PriceType *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(copy, nonatomic) NSString *contactPhone; // @synthesize contactPhone=_contactPhone;
@property(retain, nonatomic) CustomerAddressItemModel *selectInvoiceAddressModel; // @synthesize selectInvoiceAddressModel=_selectInvoiceAddressModel;
@property(nonatomic) _Bool isSelectInvoice; // @synthesize isSelectInvoice=_isSelectInvoice;
@property(retain, nonatomic) NSMutableArray *arrayAllPassengers; // @synthesize arrayAllPassengers=_arrayAllPassengers;
@property(retain, nonatomic) NSMutableArray *selectPassengerList; // @synthesize selectPassengerList=_selectPassengerList;
@property(nonatomic) _Bool isAcceptAlternativeSeat; // @synthesize isAcceptAlternativeSeat=_isAcceptAlternativeSeat;
@property(retain, nonatomic) NSString *alternativeSeatDesc; // @synthesize alternativeSeatDesc=_alternativeSeatDesc;
@property(retain, nonatomic) NSString *alternativeSeat; // @synthesize alternativeSeat=_alternativeSeat;
@property(retain, nonatomic) TrainSeatInfoV3Model *selectSeatInfoModel; // @synthesize selectSeatInfoModel=_selectSeatInfoModel;
@property(retain, nonatomic) TrainBookingInfoV3Model *selectTrainInfoModel; // @synthesize selectTrainInfoModel=_selectTrainInfoModel;
@property(nonatomic) _Bool isReservationOrder; // @synthesize isReservationOrder=_isReservationOrder;
@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(nonatomic) _Bool isBookable; // @synthesize isBookable=_isBookable;
@property(retain, nonatomic) NSMutableArray *stopStationList; // @synthesize stopStationList=_stopStationList;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(copy, nonatomic) NSString *arriveStation; // @synthesize arriveStation=_arriveStation;
@property(copy, nonatomic) NSString *departStation; // @synthesize departStation=_departStation;
- (void).cxx_destruct;
- (id)valuesForDeliveryWoPu;
- (id)valuesForDelieveryChooseSeatString;
- (id)valuesForChooseSeatArray;
- (id)showChooseSeatArray;
- (long long)trainAppendTotalPrice;
- (void)handleChildTicketPassportCode;
- (_Bool)hasPassortCodeTicket;
- (_Bool)hasChildFromPassengerList;
- (void)sortWithAdultAndChild;
- (id)deliverySavedKey;
- (void)cacheDeliveryInfo:(id)arg1;
- (void)clean;
- (_Bool)hasChild;
- (double)getSumPrice;
- (void)checkCouponByFlag;
- (void)cleanCoupon;
- (void)updateCouponWithCode:(id)arg1 desc:(id)arg2 price:(double)arg3;
- (id)getNewCouponFlag;
- (id)getDepartDateTimeWithFormat:(id)arg1;
- (int)passengerTypeWithPassengerTypeName:(id)arg1;
- (id)getNeedValidateContactList;
- (id)seatAtIndex:(long long)arg1;
- (void)cleanDeliveryInfo;
- (_Bool)isDeliveryInfoOk;
- (void)initCache;
- (id)init;
- (void)dealloc;

@end

