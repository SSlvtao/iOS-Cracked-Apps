//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMidasBaseViewCtrl.h"

@class UIButton, UILabel;

@interface APMidasMCardBalanceCtrl : APMidasBaseViewCtrl
{
    UILabel *balanceLable;
    UIButton *chargeBtn;
}

@property(retain, nonatomic) UIButton *chargeBtn; // @synthesize chargeBtn;
@property(nonatomic) __weak UILabel *balanceLable; // @synthesize balanceLable;
- (void).cxx_destruct;
- (void)onCharge;
- (void)onSubmit:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateBalanceInfo;
- (void)viewDidLoad;

@end

