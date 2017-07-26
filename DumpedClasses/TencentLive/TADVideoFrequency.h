//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface TADVideoFrequency : NSObject
{
    _Bool _isCornerAdUserClosed;
    unsigned long long _viewCountInFeeds;
    NSMutableDictionary *_adBreakPoints;
    NSMutableDictionary *_adFreeIntervalDict;
    NSMutableDictionary *_playCountDict;
    NSNumber *_lastWLTimeInFeeds;
    NSString *_channelId;
    NSString *_page;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSNumber *lastWLTimeInFeeds; // @synthesize lastWLTimeInFeeds=_lastWLTimeInFeeds;
@property(retain, nonatomic) NSMutableDictionary *playCountDict; // @synthesize playCountDict=_playCountDict;
@property(retain, nonatomic) NSMutableDictionary *adFreeIntervalDict; // @synthesize adFreeIntervalDict=_adFreeIntervalDict;
@property(retain, nonatomic) NSMutableDictionary *adBreakPoints; // @synthesize adBreakPoints=_adBreakPoints;
@property(nonatomic) unsigned long long viewCountInFeeds; // @synthesize viewCountInFeeds=_viewCountInFeeds;
@property(nonatomic) _Bool isCornerAdUserClosed; // @synthesize isCornerAdUserClosed=_isCornerAdUserClosed;
- (void).cxx_destruct;
- (void)appWillResignActiveNotification:(id)arg1;
- (void)addPlayCount:(int)arg1 forKey:(id)arg2;
- (int)playCountForForkey:(id)arg1;
- (void)resetViewCountInFeeds:(id)arg1 page:(id)arg2;
- (void)resetViewCountInFeeds:(id)arg1;
- (void)setAdFreeIntervalTimeInFeeds:(id)arg1;
- (_Bool)noAdForContinuedFeedsPlay;
- (id)getMediaExtInfoForVid:(id)arg1;
- (void)setAdMediaExtInfo:(id)arg1 vid:(id)arg2;
- (void)setAdFreeIntervalDict:(id)arg1 vid:(id)arg2;
- (_Bool)noAdForContinuedPlay:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

