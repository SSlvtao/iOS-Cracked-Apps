//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLJCEAction;

@interface QLAppLiveVoteOptionInfo : NSObject
{
    _Bool isVoted;
    _Bool _canExpand;
    _Bool _rightAnswer;
    _Bool _isSelect;
    NSString *optionID;
    NSString *desc;
    long long voteCount;
    NSString *title;
    NSString *picUrl;
    NSString *_vid;
    long long _precent;
    long long _index;
    QLJCEAction *_action;
}

+ (id)optionInfo:(id)arg1;
+ (id)optionInfoWithObj:(id)arg1;
@property(retain, nonatomic) QLJCEAction *action; // @synthesize action=_action;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) _Bool rightAnswer; // @synthesize rightAnswer=_rightAnswer;
@property(nonatomic) _Bool canExpand; // @synthesize canExpand=_canExpand;
@property(nonatomic) long long precent; // @synthesize precent=_precent;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(nonatomic) _Bool isVoted; // @synthesize isVoted;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) long long voteCount; // @synthesize voteCount;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *optionID; // @synthesize optionID;
- (void).cxx_destruct;

@end

