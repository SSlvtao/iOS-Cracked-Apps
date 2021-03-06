//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMArtist.h"

@class NMTrendInfo;

@interface NMTopArtist : NMArtist
{
    long long _rank;
    long long _lastRank;
    NMTrendInfo *_trend;
    long long _score;
    long long _topicPersonNum;
}

@property(nonatomic) long long topicPersonNum; // @synthesize topicPersonNum=_topicPersonNum;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) NMTrendInfo *trend; // @synthesize trend=_trend;
@property(nonatomic) long long lastRank; // @synthesize lastRank=_lastRank;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
- (void).cxx_destruct;
- (void)fillTrendInfo;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

