//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKHorizMenu, NSString, UIColor, UIFont, UIImage;

@protocol MKHorizMenuDataSource <NSObject>
- (NSString *)horizMenu:(MKHorizMenu *)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForMenu:(MKHorizMenu *)arg1;
- (UIColor *)backgroundColorForMenu:(MKHorizMenu *)arg1;
- (UIImage *)selectedItemImageForMenu:(MKHorizMenu *)arg1;

@optional
- (unsigned long long)itemCountOfCenterForHorizMenu:(MKHorizMenu *)arg1;
- (UIColor *)selectedItemNaviMaskColorForHorizMenu:(MKHorizMenu *)arg1;
- (UIColor *)selectedItemTitleColorForHorizMenu:(MKHorizMenu *)arg1;
- (UIFont *)buttonFontForHorizMenu:(MKHorizMenu *)arg1;
- (NSString *)horizMenu:(MKHorizMenu *)arg1 subTtitleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)eachItemWidthForMenu:(MKHorizMenu *)arg1;
@end

