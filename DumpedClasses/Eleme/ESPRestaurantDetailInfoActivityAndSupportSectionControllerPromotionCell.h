//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ESPIcon, UIImageView, UILabel;

@interface ESPRestaurantDetailInfoActivityAndSupportSectionControllerPromotionCell : UICollectionViewCell
{
    ESPIcon *_icon;
    UIImageView *_iconImageView;
    UILabel *_label;
}

+ (double)heightForIcon:(id)arg1;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) ESPIcon *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadSubviews;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
