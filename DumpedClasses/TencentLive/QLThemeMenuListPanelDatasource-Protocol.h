//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, QLThemeMenuItemCell, QLThemeMenuListPanel, UICollectionViewLayout;

@protocol QLThemeMenuListPanelDatasource <NSObject>
- (struct CGSize)themeMenuListPanel:(QLThemeMenuListPanel *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
- (QLThemeMenuItemCell *)themeMemuItemCellForIndexPath:(NSIndexPath *)arg1;
- (NSArray *)itemsForthemeMenuPanel:(QLThemeMenuListPanel *)arg1;
- (unsigned long long)numberOfItemsForThemeMenuPanel:(QLThemeMenuListPanel *)arg1;
@end

