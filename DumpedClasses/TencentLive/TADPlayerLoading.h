//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer, UIActivityIndicatorView, UIFont, UILabel;

@interface TADPlayerLoading : UIView
{
    UILabel *_label;
    UILabel *_speedLabel;
    UIActivityIndicatorView *_activityIndicator;
    NSTimer *_updateTimer;
    double _speed;
    double _lastMesureTime;
    unsigned long long _lastMesureBytes;
    unsigned long long _currentWWANBytes;
}

@property unsigned long long currentWWANBytes; // @synthesize currentWWANBytes=_currentWWANBytes;
@property unsigned long long lastMesureBytes; // @synthesize lastMesureBytes=_lastMesureBytes;
@property double lastMesureTime; // @synthesize lastMesureTime=_lastMesureTime;
@property double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (_Bool)isReachable;
- (_Bool)isString:(const char *)arg1 hasPrefix:(const char *)arg2 preLen:(int)arg3;
- (_Bool)getDataCounters:(unsigned long long *)arg1:(unsigned long long *)arg2:(unsigned long long *)arg3:(unsigned long long *)arg4;
- (void)networkSpeedUpdate:(id)arg1;
@property(nonatomic, getter=isAnimating, setter=setAnimating:) _Bool isAnimating;
@property(retain, nonatomic) UIFont *speedFont;
@property(retain, nonatomic) NSString *speedText;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)stopUpdate;
- (void)dealloc;
- (id)init;

@end

