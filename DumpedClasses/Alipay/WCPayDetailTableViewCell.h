//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface WCPayDetailTableViewCell : UITableViewCell
{
    UILabel *_monthLable;
    UILabel *_payMonthAmountLabel;
    UILabel *_payMonthRateLabel;
    UILabel *_payMoneyLeftLabel;
}

+ (float)cellHeight;
- (void).cxx_destruct;
- (id)getLabel;
- (void)reset;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

