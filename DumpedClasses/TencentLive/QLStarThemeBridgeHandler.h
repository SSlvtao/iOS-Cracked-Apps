//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBridgeHandler.h"

@class NSString, QLStarThemeItem;

@interface QLStarThemeBridgeHandler : QLBridgeHandler
{
    _Bool _isBack;
    NSString *_jumpUrl;
    QLStarThemeItem *_themeItem;
}

@property(retain, nonatomic) QLStarThemeItem *themeItem; // @synthesize themeItem=_themeItem;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) _Bool isBack; // @synthesize isBack=_isBack;
- (void).cxx_destruct;
- (void)excuteDownloadFaild:(id)arg1;
- (void)excuteDownloadFinish:(id)arg1;
- (void)excuteDownloadProcess:(id)arg1;
- (void)setStarThemeSuccess;
- (void)registGetLocalStarTheme;
- (void)registSetStarTheme;
- (void)registHandlers;
- (void)removeCommonBridge;
- (void)dealloc;

@end

