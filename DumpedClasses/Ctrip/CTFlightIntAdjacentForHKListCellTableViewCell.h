//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightImageView, NSLayoutConstraint, UIImageView, UILabel;

@interface CTFlightIntAdjacentForHKListCellTableViewCell : UITableViewCell
{
    UIImageView *_imageViewBG;
    UILabel *_labelSymbol;
    UILabel *_labelPrice;
    CTFlightImageView *_imageViewIcon;
    UILabel *_labelDepCity;
    UILabel *_labelStopCity;
    UILabel *_labelArrCity;
    CTFlightImageView *_imageViewFirst;
    UIImageView *_imageViewSecond;
    NSLayoutConstraint *_wConstForLabelDepCity;
    NSLayoutConstraint *_wConstForLabelStopCity;
    NSLayoutConstraint *_wConstForLabelArrCity;
}

+ (double)adjacentForHKListCellHeight;
@property(nonatomic) __weak NSLayoutConstraint *wConstForLabelArrCity; // @synthesize wConstForLabelArrCity=_wConstForLabelArrCity;
@property(nonatomic) __weak NSLayoutConstraint *wConstForLabelStopCity; // @synthesize wConstForLabelStopCity=_wConstForLabelStopCity;
@property(nonatomic) __weak NSLayoutConstraint *wConstForLabelDepCity; // @synthesize wConstForLabelDepCity=_wConstForLabelDepCity;
@property(nonatomic) __weak UIImageView *imageViewSecond; // @synthesize imageViewSecond=_imageViewSecond;
@property(nonatomic) __weak CTFlightImageView *imageViewFirst; // @synthesize imageViewFirst=_imageViewFirst;
@property(nonatomic) __weak UILabel *labelArrCity; // @synthesize labelArrCity=_labelArrCity;
@property(nonatomic) __weak UILabel *labelStopCity; // @synthesize labelStopCity=_labelStopCity;
@property(nonatomic) __weak UILabel *labelDepCity; // @synthesize labelDepCity=_labelDepCity;
@property(nonatomic) __weak CTFlightImageView *imageViewIcon; // @synthesize imageViewIcon=_imageViewIcon;
@property(nonatomic) __weak UILabel *labelPrice; // @synthesize labelPrice=_labelPrice;
@property(nonatomic) __weak UILabel *labelSymbol; // @synthesize labelSymbol=_labelSymbol;
@property(nonatomic) __weak UIImageView *imageViewBG; // @synthesize imageViewBG=_imageViewBG;
- (void).cxx_destruct;
- (void)setUpCellWithViewModel:(id)arg1;
- (void)setBackgroundColorHightlight:(_Bool)arg1;
- (void)setBackgroundImageHightlight:(_Bool)arg1;
- (void)setCellHightlight:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initView;
- (void)awakeFromNib;

@end
