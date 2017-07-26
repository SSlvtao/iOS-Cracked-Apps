//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, QLJCEChannelNameColorConfig, QLJCELoadingConfig, QLJCEOpenVipConfig, QLJCEPullRefreshConfig, QLJCETabBarConfig, QLJCETitleBarConfig;

@interface QLJCEVipActivityConfigResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    QLJCETitleBarConfig *jcev2_p_1_o_titleBarConfig;
    QLJCETabBarConfig *jcev2_p_2_o_tabBarConfig;
    QLJCEPullRefreshConfig *jcev2_p_3_o_pullRefreshConfig;
    QLJCEOpenVipConfig *jcev2_p_4_o_openVipConfig;
    QLJCELoadingConfig *jcev2_p_5_o_loadingConfig;
    QLJCEChannelNameColorConfig *jcev2_p_6_o_channelNameColorConfig;
    NSDictionary *jcev2_p_7_o_tabBarConfigs__b0x9i_M09ONSStringOQLJCETabBarConfig;
    QLJCEPullRefreshConfig *jcev2_p_8_o_otherPullRefreshConfig;
    QLJCEChannelNameColorConfig *jcev2_p_9_o_otherChannelNameColorConfig;
    NSArray *jcev2_p_10_o_loadingConfigs__b0x9i_VOQLJCELoadingConfig;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_loadingConfigs, setter=setJce_loadingConfigs:) NSArray *jcev2_p_10_o_loadingConfigs__b0x9i_VOQLJCELoadingConfig; // @synthesize jcev2_p_10_o_loadingConfigs__b0x9i_VOQLJCELoadingConfig;
@property(retain, nonatomic, getter=jce_otherChannelNameColorConfig, setter=setJce_otherChannelNameColorConfig:) QLJCEChannelNameColorConfig *jcev2_p_9_o_otherChannelNameColorConfig; // @synthesize jcev2_p_9_o_otherChannelNameColorConfig;
@property(retain, nonatomic, getter=jce_otherPullRefreshConfig, setter=setJce_otherPullRefreshConfig:) QLJCEPullRefreshConfig *jcev2_p_8_o_otherPullRefreshConfig; // @synthesize jcev2_p_8_o_otherPullRefreshConfig;
@property(retain, nonatomic, getter=jce_tabBarConfigs, setter=setJce_tabBarConfigs:) NSDictionary *jcev2_p_7_o_tabBarConfigs__b0x9i_M09ONSStringOQLJCETabBarConfig; // @synthesize jcev2_p_7_o_tabBarConfigs__b0x9i_M09ONSStringOQLJCETabBarConfig;
@property(retain, nonatomic, getter=jce_channelNameColorConfig, setter=setJce_channelNameColorConfig:) QLJCEChannelNameColorConfig *jcev2_p_6_o_channelNameColorConfig; // @synthesize jcev2_p_6_o_channelNameColorConfig;
@property(retain, nonatomic, getter=jce_loadingConfig, setter=setJce_loadingConfig:) QLJCELoadingConfig *jcev2_p_5_o_loadingConfig; // @synthesize jcev2_p_5_o_loadingConfig;
@property(retain, nonatomic, getter=jce_openVipConfig, setter=setJce_openVipConfig:) QLJCEOpenVipConfig *jcev2_p_4_o_openVipConfig; // @synthesize jcev2_p_4_o_openVipConfig;
@property(retain, nonatomic, getter=jce_pullRefreshConfig, setter=setJce_pullRefreshConfig:) QLJCEPullRefreshConfig *jcev2_p_3_o_pullRefreshConfig; // @synthesize jcev2_p_3_o_pullRefreshConfig;
@property(retain, nonatomic, getter=jce_tabBarConfig, setter=setJce_tabBarConfig:) QLJCETabBarConfig *jcev2_p_2_o_tabBarConfig; // @synthesize jcev2_p_2_o_tabBarConfig;
@property(retain, nonatomic, getter=jce_titleBarConfig, setter=setJce_titleBarConfig:) QLJCETitleBarConfig *jcev2_p_1_o_titleBarConfig; // @synthesize jcev2_p_1_o_titleBarConfig;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

