//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTCoreTextLabel, UIButton, UIImageView, UILabel;

@interface CTHotelCouponSelectCell : CTCustomeGroupTableViewCell
{
    UIImageView *mTopImgView;
    UILabel *mContentLabel;
    UILabel *mTimeLabel;
    CTCoreTextLabel *mPriceLabel;
    UIButton *_mSelectBtn;
}

@property(retain, nonatomic) UIButton *mSelectBtn; // @synthesize mSelectBtn=_mSelectBtn;
- (void).cxx_destruct;
- (void)fillCellWithModel:(id)arg1 index:(long long)arg2 arrayCount:(long long)arg3 selectModel:(id)arg4;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

