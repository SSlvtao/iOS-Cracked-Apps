//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleAlertView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIImageView, UITextField;

@interface SimpleInputAlertView : SimpleAlertView <UITextFieldDelegate>
{
    UIImageView *_bgImageView;
    UITextField *_inputTextField;
    double _topOffset;
}

@property(readonly, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
- (void).cxx_destruct;
- (void)cancelButtonClick:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)dismiss;
- (void)show;
- (void)reDrawSubView;
- (void)layoutSubviews;
- (id)initWithOverlayImage:(id)arg1 contentBackground:(id)arg2 buttonNormalImage:(id)arg3 buttonHighlightImage:(id)arg4 delegate:(id)arg5 title:(id)arg6 message:(id)arg7 buttonArray:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

