//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTFlightImageViewDelegate.h"

@class CTFlightImageView, NSLayoutConstraint, NSString, UIButton;

@interface CTFlightMianActivityView : UIView <CTFlightImageViewDelegate>
{
    int _type;
    id <CTFlightMianActivityViewDelegate> _deletePopDelegate;
    CTFlightImageView *_activityImageView;
    UIView *_activityBackView;
    UIButton *_cancleButton;
    NSLayoutConstraint *_cancelBtnCons_Top;
    UIView *_backColorView;
    NSLayoutConstraint *_backViewHeightCons;
    NSLayoutConstraint *_backViewWidthCons;
    NSLayoutConstraint *_imageViewLayoutConstraintHeight;
    CTFlightImageView *_buttonImageView;
    NSLayoutConstraint *_buttonImageLayoutHeight;
    UIButton *_shareButton;
}

@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSLayoutConstraint *buttonImageLayoutHeight; // @synthesize buttonImageLayoutHeight=_buttonImageLayoutHeight;
@property(retain, nonatomic) CTFlightImageView *buttonImageView; // @synthesize buttonImageView=_buttonImageView;
@property(retain, nonatomic) NSLayoutConstraint *imageViewLayoutConstraintHeight; // @synthesize imageViewLayoutConstraintHeight=_imageViewLayoutConstraintHeight;
@property(retain, nonatomic) NSLayoutConstraint *backViewWidthCons; // @synthesize backViewWidthCons=_backViewWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *backViewHeightCons; // @synthesize backViewHeightCons=_backViewHeightCons;
@property(retain, nonatomic) UIView *backColorView; // @synthesize backColorView=_backColorView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSLayoutConstraint *cancelBtnCons_Top; // @synthesize cancelBtnCons_Top=_cancelBtnCons_Top;
@property(retain, nonatomic) UIButton *cancleButton; // @synthesize cancleButton=_cancleButton;
@property(retain, nonatomic) UIView *activityBackView; // @synthesize activityBackView=_activityBackView;
@property(retain, nonatomic) CTFlightImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
@property(nonatomic) __weak id <CTFlightMianActivityViewDelegate> deletePopDelegate; // @synthesize deletePopDelegate=_deletePopDelegate;
- (void).cxx_destruct;
- (void)flightImageViewLoadSuccessToSetFrame:(id)arg1;
- (struct CGSize)getFlightBackViewSize;
- (void)doTapAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)brithdayAndMedalImage:(id)arg1 type:(int)arg2;
- (void)activityMessageImage:(id)arg1 type:(int)arg2;
- (void)brithdayTapAction:(id)arg1;
- (void)setPopMassageInfomationWithMessageModel:(id)arg1;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

