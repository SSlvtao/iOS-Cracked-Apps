//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIView;

@interface TMViewTrackerStatus : NSObject
{
    _Bool _shouldTouchMove;
    long long _beginStatus;
    long long _middleStatus;
    long long _endStatus;
    UIView *_contextView;
    NSDictionary *_args;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *args; // @synthesize args=_args;
@property(nonatomic) __weak UIView *contextView; // @synthesize contextView=_contextView;
@property(nonatomic) _Bool shouldTouchMove; // @synthesize shouldTouchMove=_shouldTouchMove;
@property(nonatomic) long long endStatus; // @synthesize endStatus=_endStatus;
@property(nonatomic) long long middleStatus; // @synthesize middleStatus=_middleStatus;
@property(nonatomic) long long beginStatus; // @synthesize beginStatus=_beginStatus;
- (void).cxx_destruct;
- (void)addArgsKey:(id)arg1 value:(id)arg2;
- (void)resetStatus;
- (void)uploadMessageWithControlName:(id)arg1 argvs:(id)arg2;
- (_Bool)isTargetView:(id)arg1;
- (void)syncContextView:(id)arg1;
- (_Bool)isTapGestureWithShoudMove;
- (void)updateTouchStatus:(id)arg1;
- (id)init;

@end

