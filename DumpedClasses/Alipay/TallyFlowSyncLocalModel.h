//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TallyLBSInfoSyncLocalModel;

@interface TallyFlowSyncLocalModel : NSObject
{
    NSString *_uuid;
    NSString *_amount;
    NSString *_userId;
    NSString *_tallyClass;
    NSString *_categoryUuid;
    NSString *_inAccountUuid;
    NSString *_outAccountUuid;
    NSString *_source;
    NSString *_remark;
    long long _gmtDate;
    long long _gmtCreate;
    long long _gmtModified;
    TallyLBSInfoSyncLocalModel *_tallyLBSInfo;
    NSArray *_tallyImageInfoList;
}

+ (Class)tallyImageInfoListElementClass;
@property(retain, nonatomic) NSArray *tallyImageInfoList; // @synthesize tallyImageInfoList=_tallyImageInfoList;
@property(retain, nonatomic) TallyLBSInfoSyncLocalModel *tallyLBSInfo; // @synthesize tallyLBSInfo=_tallyLBSInfo;
@property(nonatomic) long long gmtModified; // @synthesize gmtModified=_gmtModified;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(nonatomic) long long gmtDate; // @synthesize gmtDate=_gmtDate;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *outAccountUuid; // @synthesize outAccountUuid=_outAccountUuid;
@property(retain, nonatomic) NSString *inAccountUuid; // @synthesize inAccountUuid=_inAccountUuid;
@property(retain, nonatomic) NSString *categoryUuid; // @synthesize categoryUuid=_categoryUuid;
@property(retain, nonatomic) NSString *tallyClass; // @synthesize tallyClass=_tallyClass;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;

@end

