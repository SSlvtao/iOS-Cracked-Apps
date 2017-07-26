//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, QLThemeHorizMenu, UIView;

@protocol QLThemeHorizMenuDatasource <NSObject>

@optional
- (UIView *)themeHorizMenu:(QLThemeHorizMenu *)arg1 viewForFooterInSection:(long long)arg2;
- (UIView *)themeHorizMenu:(QLThemeHorizMenu *)arg1 viewForHeaderInSection:(long long)arg2;
- (double)interSpaceForthemeHorizMenu:(QLThemeHorizMenu *)arg1;
- (struct UIEdgeInsets)contentInsetForThemeHorizMenu:(QLThemeHorizMenu *)arg1;
- (struct CGSize)themeHorizMenu:(QLThemeHorizMenu *)arg1 imageSizeForIndex:(unsigned long long)arg2;
- (NSDictionary *)messageInfosForThemeHorizMenu:(QLThemeHorizMenu *)arg1;
- (NSArray *)itemsForThemeHorizMenu:(QLThemeHorizMenu *)arg1;
- (unsigned long long)numberOfItemsForThemeHorizMenu:(QLThemeHorizMenu *)arg1;
@end

