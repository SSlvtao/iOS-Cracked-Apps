//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface QL15PeopleVoteInfo : NSObject
{
    int _milkCount;
    int _limitVoteCount;
    int _todayVoteCount;
    int _nowVoteCount;
    NSString *_milkimageUrl;
    NSString *_milkTitleImageUrl;
    NSString *_milknoLoginImageUrl;
    NSString *_modeltilte;
    NSMutableArray *_starInfoList;
    NSString *_noVoteTitle;
    NSString *_noVoteTips;
    NSString *_limitVoteTitle;
    NSString *_limitVoteTips;
}

@property(copy, nonatomic) NSString *limitVoteTips; // @synthesize limitVoteTips=_limitVoteTips;
@property(copy, nonatomic) NSString *limitVoteTitle; // @synthesize limitVoteTitle=_limitVoteTitle;
@property(copy, nonatomic) NSString *noVoteTips; // @synthesize noVoteTips=_noVoteTips;
@property(copy, nonatomic) NSString *noVoteTitle; // @synthesize noVoteTitle=_noVoteTitle;
@property(retain, nonatomic) NSMutableArray *starInfoList; // @synthesize starInfoList=_starInfoList;
@property(copy, nonatomic) NSString *modeltilte; // @synthesize modeltilte=_modeltilte;
@property(nonatomic) int nowVoteCount; // @synthesize nowVoteCount=_nowVoteCount;
@property(nonatomic) int todayVoteCount; // @synthesize todayVoteCount=_todayVoteCount;
@property(nonatomic) int limitVoteCount; // @synthesize limitVoteCount=_limitVoteCount;
@property(nonatomic) int milkCount; // @synthesize milkCount=_milkCount;
@property(copy, nonatomic) NSString *milknoLoginImageUrl; // @synthesize milknoLoginImageUrl=_milknoLoginImageUrl;
@property(copy, nonatomic) NSString *milkTitleImageUrl; // @synthesize milkTitleImageUrl=_milkTitleImageUrl;
@property(copy, nonatomic) NSString *milkimageUrl; // @synthesize milkimageUrl=_milkimageUrl;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

