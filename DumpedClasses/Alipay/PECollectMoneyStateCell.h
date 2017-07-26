//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PECollectMessage, UIImageView, UILabel, UIView;

@interface PECollectMoneyStateCell : UITableViewCell
{
    _Bool _stateUpdated;
    id <PECollectMoneyStateCellDelegate> _delegate;
    PECollectMessage *_collectMsg;
    long long _disMode;
    UIView *_customContentView;
    UIImageView *_headImgView;
    UILabel *_userNameLabel;
    UILabel *_stateLabel;
    UIView *_topLine;
    UIView *_btmLine;
    UILabel *_amountLabel;
}

+ (double)cellHeight;
@property(nonatomic) _Bool stateUpdated; // @synthesize stateUpdated=_stateUpdated;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UIView *btmLine; // @synthesize btmLine=_btmLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(nonatomic) long long disMode; // @synthesize disMode=_disMode;
@property(retain, nonatomic) PECollectMessage *collectMsg; // @synthesize collectMsg=_collectMsg;
@property(nonatomic) __weak id <PECollectMoneyStateCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)headTap;
- (id)lineWithLocY:(double)arg1;
- (void)updateSepratorLine;
- (id)buildLabel:(id)arg1 fontSize:(double)arg2;
- (id)collectState;
- (void)updateCollectState:(id)arg1;
- (void)updateAmount;
- (void)updateCell;
- (void)reloadData:(id)arg1 disMode:(long long)arg2;
- (id)collectAmountLabel;
- (id)initWithReuseIdentifier:(id)arg1;

@end
