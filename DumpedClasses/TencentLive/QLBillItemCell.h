//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface QLBillItemCell : UITableViewCell
{
    UIView *_bottomLine;
    UILabel *_leftTitleLbl;
    UILabel *_rightTitleLbl;
    UIImageView *_iconView;
}

@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *rightTitleLbl; // @synthesize rightTitleLbl=_rightTitleLbl;
@property(retain, nonatomic) UILabel *leftTitleLbl; // @synthesize leftTitleLbl=_leftTitleLbl;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

