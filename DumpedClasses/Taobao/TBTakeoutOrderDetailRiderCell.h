//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, TBLCRiderLocationManager, TBTakeoutOrderDetailRiderModel, UIButton, UIImageView, UILabel, UIView;

@interface TBTakeoutOrderDetailRiderCell : UITableViewCell
{
    TBTakeoutOrderDetailRiderModel *_model;
    CDUnknownBlockType _handler;
    TBLCRiderLocationManager *_rider;
    UIImageView *_iconView;
    UILabel *_statusLabel;
    UIButton *_contactButton;
    NSString *_phoneNumber;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) UIButton *contactButton; // @synthesize contactButton=_contactButton;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) TBLCRiderLocationManager *rider; // @synthesize rider=_rider;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak TBTakeoutOrderDetailRiderModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)contact:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

