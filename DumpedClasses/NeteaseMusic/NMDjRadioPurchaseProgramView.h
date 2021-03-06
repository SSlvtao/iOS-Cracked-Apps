//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMActionSheetBackgroundView, NMTableViewContainer, UIButton, UILabel, UITableView;

@interface NMDjRadioPurchaseProgramView : UIView
{
    NMActionSheetBackgroundView *_bgView;
    UIView *_bottomView;
    UIView *_line1;
    UILabel *_selectCountLabel;
    UIButton *_buyButton;
    NMTableViewContainer *_tableViewContainer;
    long long _count;
    long long _money;
    UITableView *_tableView;
    id <NMDjRadioPurchaseProgramViewDelegate><UITableViewDataSource><UITableViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NMDjRadioPurchaseProgramViewDelegate><UITableViewDataSource><UITableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)updateSelectCount:(long long)arg1 totalMoney:(long long)arg2;
- (void)buyButtonClicked:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)refreshView:(id)arg1;
- (id)init;

@end

