//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CustomTabBar, UIButton, UIImage;

@protocol CustomTabBarDelegate
- (UIButton *)buttonFor:(CustomTabBar *)arg1 atIndex:(unsigned long long)arg2;

@optional
- (void)touchDoubleAtItemAtIndex:(unsigned long long)arg1;
- (void)touchDownAtItemAtIndex:(unsigned long long)arg1;
- (void)touchUpInsideItemAtIndex:(unsigned long long)arg1;
- (UIImage *)buttonSelectedBackgroundImage;
- (UIImage *)backgroundImage;
@end

