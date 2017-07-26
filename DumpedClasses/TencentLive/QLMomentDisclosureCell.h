//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface QLMomentDisclosureCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIImageView *_disclosureView;
}

+ (double)cellDefaultHeight;
@property(retain, nonatomic) UIImageView *disclosureView; // @synthesize disclosureView=_disclosureView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 icon:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

