//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField;

@interface QQReadInJoyVideoCommentSendingView : UIView <UITextFieldDelegate>
{
    UIButton *_cancelButton;
    UIButton *_sendButton;
    UITextField *_commentTextField;
    UILabel *_textCountLabel;
    UILabel *_textTotalCountLabel;
    UIView *_containerView;
    UIView *_backgroundView;
    id <QQReadInJoyVideoCommentSendingViewDelegate> _delegate;
    CDUnknownBlockType _cancelAction;
    CDUnknownBlockType _sendAction;
    CDUnknownBlockType _dismissAction;
}

@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
@property(copy, nonatomic) CDUnknownBlockType sendAction; // @synthesize sendAction=_sendAction;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
@property(nonatomic) __weak id <QQReadInJoyVideoCommentSendingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *textTotalCountLabel; // @synthesize textTotalCountLabel=_textTotalCountLabel;
@property(retain, nonatomic) UILabel *textCountLabel; // @synthesize textCountLabel=_textCountLabel;
@property(retain, nonatomic) UITextField *commentTextField; // @synthesize commentTextField=_commentTextField;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)didSend:(id)arg1;
- (void)send;
- (void)cancel;
- (void)didCancel:(id)arg1;
- (void)dismissKeyboard:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)keyboardWillShowOrHide:(_Bool)arg1 notification:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChanged:(id)arg1;
- (void)dealloc;
- (id)initWithDraft:(id)arg1 cancelAction:(CDUnknownBlockType)arg2 sendAction:(CDUnknownBlockType)arg3 keyboardDismissAction:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

