//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class CTIntFlightDeliveryReceiverCellModel, NSLayoutConstraint, NSString, UILabel, UITextField;

@interface CTIntFlightDeliveryReceiverCell : UITableViewCell <UITextFieldDelegate>
{
    CTIntFlightDeliveryReceiverCellModel *_cellModel;
    id <CTIntFlightDeliveryReceiverCellDelegate> _delegate;
    NSLayoutConstraint *_separateLineHeight;
    UILabel *_titleLabel;
    UITextField *_pTextField;
}

+ (double)heightOfDeliveryReceiverCell:(id)arg1;
@property(nonatomic) __weak UITextField *pTextField; // @synthesize pTextField=_pTextField;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *separateLineHeight; // @synthesize separateLineHeight=_separateLineHeight;
@property(nonatomic) __weak id <CTIntFlightDeliveryReceiverCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTIntFlightDeliveryReceiverCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)textFieldDidChange;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setupDeliveryReceiverCell:(id)arg1 delegate:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

