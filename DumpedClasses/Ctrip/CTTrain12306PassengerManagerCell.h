//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface CTTrain12306PassengerManagerCell : CTCustomeGroupTableViewCell
{
    UILabel *_labelName;
    UIImageView *_imagePassengerType;
    UILabel *_labelPassport;
    UILabel *_labelCheckStatus;
    NSLayoutConstraint *_nameLabelTop;
    NSLayoutConstraint *_passengerTypeTop;
}

@property(retain, nonatomic) NSLayoutConstraint *passengerTypeTop; // @synthesize passengerTypeTop=_passengerTypeTop;
@property(retain, nonatomic) NSLayoutConstraint *nameLabelTop; // @synthesize nameLabelTop=_nameLabelTop;
@property(retain, nonatomic) UILabel *labelCheckStatus; // @synthesize labelCheckStatus=_labelCheckStatus;
@property(retain, nonatomic) UILabel *labelPassport; // @synthesize labelPassport=_labelPassport;
@property(retain, nonatomic) UIImageView *imagePassengerType; // @synthesize imagePassengerType=_imagePassengerType;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
- (void).cxx_destruct;
- (void)setupContentWithPassenger:(id)arg1;
- (void)awakeFromNib;

@end

