//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLVipActivityConfig.h"

@class QLJCETitleBarConfig, UIImageView;

@interface QLVipActivityTilteBarConfig : QLVipActivityConfig
{
    QLJCETitleBarConfig *_config;
    UIImageView *_titleBarImageView;
}

@property(retain, nonatomic) UIImageView *titleBarImageView; // @synthesize titleBarImageView=_titleBarImageView;
@property(retain, nonatomic) QLJCETitleBarConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)titleBarSearchColor;
- (id)titleBarOpenVipBgColor;
- (id)titleBarOpenVipText;
- (id)titleBarTitle;
- (id)titleBarBackgroundImageView;
- (id)titleBarBackgroundColor;
- (_Bool)shouldApplyConfig;
- (void)setObject:(id)arg1;

@end

