//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTFlightButtonDelegate.h"

@class CTFlightButton, CTInlandFlightListTransferCitySelectItemViewModel, NSString, UILabel;

@interface CTInlandFlightListTransferCitySelectItemView : UIView <CTFlightButtonDelegate>
{
    CTInlandFlightListTransferCitySelectItemViewModel *_itemViewModel;
    id <CTInlandFlightListTransferCitySelectItemViewDelegate> _itemDelegate;
    UILabel *_departCityNameLabel;
    UILabel *_transferTextLabel;
    UILabel *_arriveCityNameLabel;
    UILabel *_transferCityNameLabel;
    CTFlightButton *_clickButton;
}

+ (struct CGSize)setItemViewModel:(id)arg1 maxWidth:(double)arg2 itemView:(id)arg3;
@property(retain, nonatomic) CTFlightButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) UILabel *transferCityNameLabel; // @synthesize transferCityNameLabel=_transferCityNameLabel;
@property(retain, nonatomic) UILabel *arriveCityNameLabel; // @synthesize arriveCityNameLabel=_arriveCityNameLabel;
@property(retain, nonatomic) UILabel *transferTextLabel; // @synthesize transferTextLabel=_transferTextLabel;
@property(retain, nonatomic) UILabel *departCityNameLabel; // @synthesize departCityNameLabel=_departCityNameLabel;
@property(nonatomic) __weak id <CTInlandFlightListTransferCitySelectItemViewDelegate> itemDelegate; // @synthesize itemDelegate=_itemDelegate;
@property(retain, nonatomic) CTInlandFlightListTransferCitySelectItemViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
- (void).cxx_destruct;
- (void)flightButtonHighlighted:(id)arg1 isHighlighted:(_Bool)arg2;
- (void)selectCity:(id)arg1;
- (void)initResource;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

