//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface IntlFlightDetailSearchV2Request : CTBusinessBean
{
    int serviceVersion;
    NSString *transactionNo;
    int tripType;
    NSString *productID;
    NSString *policyID;
    NSMutableArray *extendInforList;
    NSString *gUID;
    NSString *messageToken;
    NSString *paramJsonStr;
    NSMutableArray *aBTInfoList;
}

@property(retain, nonatomic) NSMutableArray *aBTInfoList; // @synthesize aBTInfoList;
@property(copy, nonatomic) NSString *paramJsonStr; // @synthesize paramJsonStr;
@property(copy, nonatomic) NSString *messageToken; // @synthesize messageToken;
@property(copy, nonatomic) NSString *gUID; // @synthesize gUID;
@property(retain, nonatomic) NSMutableArray *extendInforList; // @synthesize extendInforList;
@property(copy, nonatomic) NSString *policyID; // @synthesize policyID;
@property(copy, nonatomic) NSString *productID; // @synthesize productID;
@property(nonatomic) int tripType; // @synthesize tripType;
@property(copy, nonatomic) NSString *transactionNo; // @synthesize transactionNo;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

