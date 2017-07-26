//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NSTimer;

@interface QLLiveV3TitleUpdateOperation : NSObject
{
    NSMutableArray *_delegates;
    NSTimer *_titleUpdateTimer;
    long long _titleUpdateInterval;
    long long _currentTotal;
    long long _showTotal;
    long long _updateTimerCounter;
    NSString *_title;
    NSString *_vid;
}

+ (void)saveCacheShowPersonNumber:(id)arg1 showPersonNumber:(long long)arg2;
+ (long long)getCacheShowPersonNumberWithVid:(id)arg1;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long updateTimerCounter; // @synthesize updateTimerCounter=_updateTimerCounter;
@property(nonatomic) long long showTotal; // @synthesize showTotal=_showTotal;
@property(nonatomic) long long currentTotal; // @synthesize currentTotal=_currentTotal;
@property(nonatomic) long long titleUpdateInterval; // @synthesize titleUpdateInterval=_titleUpdateInterval;
@property(retain, nonatomic) NSTimer *titleUpdateTimer; // @synthesize titleUpdateTimer=_titleUpdateTimer;
- (void).cxx_destruct;
- (void)updateTitle:(id)arg1 WithCount:(long long)arg2;
- (void)updateTitle:(long long)arg1;
- (void)updateInitShowTotal:(long long)arg1;
- (void)updateCurrentTotal:(long long)arg1 updateIntervel:(long long)arg2 title:(id)arg3 withVid:(id)arg4;
- (id)findValueWithObserver:(id)arg1;
- (void)removeTitleObserver:(id)arg1;
- (void)addTitleObserver:(id)arg1;
- (void)updateTitlePerSecond:(id)arg1;
- (void)createTtitleUpdateTimer;
- (void)resetCurrentValue;
- (void)destroyTitleUpdateTimer;
- (void)resetValue;
- (void)dealloc;
- (id)init;

@end

