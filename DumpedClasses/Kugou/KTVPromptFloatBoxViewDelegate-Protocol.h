//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVPromptFloatBoxView;

@protocol KTVPromptFloatBoxViewDelegate <NSObject>
- (void)onDidPanCloseFloatBoxView:(KTVPromptFloatBoxView *)arg1;
- (void)onWillPanCloseFloatBoxView:(KTVPromptFloatBoxView *)arg1;

@optional
- (void)onEndTouchInFloatBoxView:(KTVPromptFloatBoxView *)arg1;
- (void)onBeginTouchInFloatBoxView:(KTVPromptFloatBoxView *)arg1;
@end

