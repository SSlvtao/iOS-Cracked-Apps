//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLUserCenterItemCell.h"

#import "P_QLPageItemCellShowUp.h"

@class NSString, QLJCEDynamicItemInfo, QLSImageView, UILabel;

@interface QLUserCenterStarThemeCell : QLUserCenterItemCell <P_QLPageItemCellShowUp>
{
    QLSImageView *_starThemeHeadView;
    QLJCEDynamicItemInfo *_replaceInfo;
    QLSImageView *_rightIconView;
    UILabel *_titleLbl;
}

@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) QLSImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) QLJCEDynamicItemInfo *replaceInfo; // @synthesize replaceInfo=_replaceInfo;
- (void).cxx_destruct;
- (void)reportShowUp;
- (id)modelTitle;
- (id)modelHeaderImage;
- (void)layoutSubviews;
- (void)refreshInterfaceUI;
- (void)refreshStarThemeState:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

