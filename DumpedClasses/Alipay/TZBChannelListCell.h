//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface TZBChannelListCell : UITableViewCell
{
    UILabel *_bankCardNo;
    UILabel *_title;
    UILabel *_desc;
}

+ (double)heightForCell;
@property(retain, nonatomic) UILabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *bankCardNo; // @synthesize bankCardNo=_bankCardNo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)fontForChannelTitle;
- (id)fontForChannelDescription;
- (void)setModel:(id)arg1;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

