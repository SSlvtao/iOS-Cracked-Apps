//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class FALCRoomGiftModel, NSString;

@interface FAMobileLiveContinueGiftModel : FAModel
{
    FALCRoomGiftModel *_giftModel;
    long long _giftCount;
    NSString *_senderId;
}

@property(retain, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(nonatomic) long long giftCount; // @synthesize giftCount=_giftCount;
@property(retain, nonatomic) FALCRoomGiftModel *giftModel; // @synthesize giftModel=_giftModel;
- (void).cxx_destruct;

@end

