//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class LSBizStatisticInfo, LSBizUserInfo, NSDate, NSMutableArray, NSString;

@interface LSBizLiveShowInfo : NSObject <NSCopying>
{
    _Bool _isLive;
    _Bool _isNeedVodPlay;
    int _liveDurationLimit;
    int _firstRemindTime;
    int _countDownTime;
    NSString *_liveId;
    NSString *_liveKey;
    NSString *_liveAddress;
    NSString *_liveTitle;
    NSString *_liveCoverImage;
    NSDate *_liveDate;
    NSString *_liveDateWithFormat;
    double _liveDuration;
    NSString *_liveDurationWithFormat;
    LSBizUserInfo *_liveHost;
    NSMutableArray *_liveWatchers;
    NSMutableArray *_liveComments;
    NSMutableArray *_liveRewards;
    NSMutableArray *_livePriases;
    LSBizStatisticInfo *_statisticInfo;
    double _liveTime;
    unsigned long long _watcherCount;
    NSString *_liveFiles;
    NSString *_status;
    NSString *_encrypt;
    NSString *_secret;
    unsigned long long _liveStatus;
    NSString *_vodAddress;
    NSString *_rewardRankUrl;
    LSBizUserInfo *_myself;
}

@property(retain, nonatomic) LSBizUserInfo *myself; // @synthesize myself=_myself;
@property(nonatomic) int countDownTime; // @synthesize countDownTime=_countDownTime;
@property(nonatomic) int firstRemindTime; // @synthesize firstRemindTime=_firstRemindTime;
@property(nonatomic) int liveDurationLimit; // @synthesize liveDurationLimit=_liveDurationLimit;
@property(retain, nonatomic) NSString *rewardRankUrl; // @synthesize rewardRankUrl=_rewardRankUrl;
@property(nonatomic) _Bool isNeedVodPlay; // @synthesize isNeedVodPlay=_isNeedVodPlay;
@property(retain, nonatomic) NSString *vodAddress; // @synthesize vodAddress=_vodAddress;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(retain, nonatomic) NSString *encrypt; // @synthesize encrypt=_encrypt;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *liveFiles; // @synthesize liveFiles=_liveFiles;
@property(nonatomic) unsigned long long watcherCount; // @synthesize watcherCount=_watcherCount;
@property(nonatomic) double liveTime; // @synthesize liveTime=_liveTime;
@property(retain, nonatomic) LSBizStatisticInfo *statisticInfo; // @synthesize statisticInfo=_statisticInfo;
@property(retain, nonatomic) NSMutableArray *livePriases; // @synthesize livePriases=_livePriases;
@property(retain, nonatomic) NSMutableArray *liveRewards; // @synthesize liveRewards=_liveRewards;
@property(retain, nonatomic) NSMutableArray *liveComments; // @synthesize liveComments=_liveComments;
@property(retain, nonatomic) NSMutableArray *liveWatchers; // @synthesize liveWatchers=_liveWatchers;
@property(retain, nonatomic) LSBizUserInfo *liveHost; // @synthesize liveHost=_liveHost;
@property(retain, nonatomic) NSString *liveDurationWithFormat; // @synthesize liveDurationWithFormat=_liveDurationWithFormat;
@property(nonatomic) double liveDuration; // @synthesize liveDuration=_liveDuration;
@property(retain, nonatomic) NSString *liveDateWithFormat; // @synthesize liveDateWithFormat=_liveDateWithFormat;
@property(retain, nonatomic) NSDate *liveDate; // @synthesize liveDate=_liveDate;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) NSString *liveCoverImage; // @synthesize liveCoverImage=_liveCoverImage;
@property(retain, nonatomic) NSString *liveTitle; // @synthesize liveTitle=_liveTitle;
@property(retain, nonatomic) NSString *liveAddress; // @synthesize liveAddress=_liveAddress;
@property(retain, nonatomic) NSString *liveKey; // @synthesize liveKey=_liveKey;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (void)setCurLiveStatus:(id)arg1;
- (void)resignWithReplayData:(id)arg1;
@property(readonly, nonatomic) _Bool isDeleted;
@property(readonly, nonatomic) _Bool validReplay;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

