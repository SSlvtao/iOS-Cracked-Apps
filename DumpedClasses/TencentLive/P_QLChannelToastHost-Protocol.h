//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIScrollView, UIView;

@protocol P_QLChannelToastHost <NSObject>
- (double)channelHostNavigationOrigenY;
- (void)showHeaderViewBottomShadow:(_Bool)arg1;
- (double)channelHostHeaderDragrefreshVisibleHeight;
- (int)channelHostLoadingStatus;
- (UIScrollView *)channelToastHostInnerScrollView;
- (UIView *)channelToastHostFloatView;
- (UIView *)channelToastHostView;

@optional
- (UIColor *)backgroundColorForToastView;
@end

