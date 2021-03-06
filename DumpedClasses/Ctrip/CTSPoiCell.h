//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSCustomActionCell.h"

#import "CTSCardStatusViewDelegate.h"

@class CTImageView, CTSCardStatusView, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface CTSPoiCell : CTSCustomActionCell <CTSCardStatusViewDelegate>
{
    id <CTSPoiCellDelegate> _delegate;
    UIView *_realContentView;
    UILabel *_poiNameLabel;
    UILabel *_poiAddressLabel;
    CTImageView *_poiIconImageView;
    UILabel *_ticketNoLabel;
    CTSCardStatusView *_statusBgView;
    UIImageView *_maskImageView;
    UILabel *_poiLocalNameLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_statusViewHeightConstraint;
    NSLayoutConstraint *_localPoiNameTopConstraint;
    NSLayoutConstraint *_poiAddressTopConstraint;
    NSLayoutConstraint *_poiTextHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *poiTextHeightConstraint; // @synthesize poiTextHeightConstraint=_poiTextHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *poiAddressTopConstraint; // @synthesize poiAddressTopConstraint=_poiAddressTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *localPoiNameTopConstraint; // @synthesize localPoiNameTopConstraint=_localPoiNameTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *statusViewHeightConstraint; // @synthesize statusViewHeightConstraint=_statusViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak UILabel *poiLocalNameLabel; // @synthesize poiLocalNameLabel=_poiLocalNameLabel;
@property(nonatomic) __weak UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(nonatomic) __weak CTSCardStatusView *statusBgView; // @synthesize statusBgView=_statusBgView;
@property(nonatomic) __weak UILabel *ticketNoLabel; // @synthesize ticketNoLabel=_ticketNoLabel;
@property(nonatomic) __weak CTImageView *poiIconImageView; // @synthesize poiIconImageView=_poiIconImageView;
@property(nonatomic) __weak UILabel *poiAddressLabel; // @synthesize poiAddressLabel=_poiAddressLabel;
@property(nonatomic) __weak UILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
@property(nonatomic) __weak UIView *realContentView; // @synthesize realContentView=_realContentView;
@property(nonatomic) __weak id <CTSPoiCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)needShowStatusView;
- (_Bool)needShowOrderServiceButton;
- (id)getOperationView;
- (id)getTopConstraint;
- (id)customizedContentView;
- (double)cellHeight;
- (void)cardStatusViewHandler;
- (void)constraintsHandler;
- (void)setCellWithModel:(id)arg1 index:(id)arg2 delegate:(id)arg3;
- (void)buttonTaped:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

