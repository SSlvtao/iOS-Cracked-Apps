//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HGPageScrollView, HGPageView, NSString, UIView;

@protocol HGPageScrollViewDataSource <NSObject>
- (HGPageView *)pageScrollView:(HGPageScrollView *)arg1 viewForPageAtIndex:(long long)arg2;

@optional
- (void)autoRequestDeleteShowItem;
- (void)setExposureItem;
- (NSString *)pageScrollView:(HGPageScrollView *)arg1 subtitleForPageAtIndex:(long long)arg2;
- (NSString *)pageScrollView:(HGPageScrollView *)arg1 titleForPageAtIndex:(long long)arg2;
- (UIView *)pageScrollView:(HGPageScrollView *)arg1 headerViewForPageAtIndex:(long long)arg2;
- (long long)numberOfPagesInScrollView:(HGPageScrollView *)arg1;
@end

