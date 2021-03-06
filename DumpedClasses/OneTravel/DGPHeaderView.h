//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DGPHeaderAndTableContainerData, UILabel;

@interface DGPHeaderView : UIView
{
    DGPHeaderAndTableContainerData *_data;
    UILabel *_totalDurationLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *totalDurationLabel; // @synthesize totalDurationLabel=_totalDurationLabel;
@property(retain, nonatomic) DGPHeaderAndTableContainerData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)reloadData;
- (void)configConstraints;
- (void)setupSubviews;
- (id)initWithData:(id)arg1;

@end

