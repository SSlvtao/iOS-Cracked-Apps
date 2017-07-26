//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLJCEAction;

@interface QLAppLiveFeedVideoItem : NSObject
{
    _Bool _weishi;
    _Bool _ugc;
    NSString *_vid;
    NSString *_coverID;
    long long _duration;
    NSString *_coverURL;
    NSString *_playURL;
    NSString *_playRright;
    long long _state;
    NSString *_title;
    NSString *_secondTitle;
    QLJCEAction *_action;
}

+ (id)videoWith:(id)arg1;
+ (id)videoWithJceObj:(id)arg1;
@property(retain, nonatomic) QLJCEAction *action; // @synthesize action=_action;
@property(nonatomic) _Bool ugc; // @synthesize ugc=_ugc;
@property(nonatomic) _Bool weishi; // @synthesize weishi=_weishi;
@property(retain, nonatomic) NSString *secondTitle; // @synthesize secondTitle=_secondTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *playRright; // @synthesize playRright=_playRright;
@property(retain, nonatomic) NSString *playURL; // @synthesize playURL=_playURL;
@property(retain, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *coverID; // @synthesize coverID=_coverID;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end

