//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface GetHotelSignInfoRequest : CTBusinessBean
{
    int _sourceFrom;
    int _validateFlag;
    long long _orderId;
}

@property(nonatomic) int validateFlag; // @synthesize validateFlag=_validateFlag;
@property(nonatomic) int sourceFrom; // @synthesize sourceFrom=_sourceFrom;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
- (id)getPBAnnotationArray;
- (id)init;

@end
