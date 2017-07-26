//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, QLPlaceHolderTextView, UIButton, UILabel, UITextField, UITextView, UIView;

@interface QLFandomTopicInputCell : UITableViewCell <UITextFieldDelegate, UITextViewDelegate>
{
    UITextField *titleView;
    QLPlaceHolderTextView *contentTextView;
    id <QLFandomInputCellDelegate> _delegate;
    UIView *_emotionSwitchView;
    UIButton *_faceSendButton;
    UIButton *_keyboardButton;
    UIView *_bgView;
    UITextView *_textView;
    UILabel *_enteredNumLabel;
    UILabel *_countNumLabel;
}

@property(retain, nonatomic) UILabel *countNumLabel; // @synthesize countNumLabel=_countNumLabel;
@property(retain, nonatomic) UILabel *enteredNumLabel; // @synthesize enteredNumLabel=_enteredNumLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property(retain, nonatomic) UIButton *faceSendButton; // @synthesize faceSendButton=_faceSendButton;
@property(retain, nonatomic) UIView *emotionSwitchView; // @synthesize emotionSwitchView=_emotionSwitchView;
@property(nonatomic) id <QLFandomInputCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QLPlaceHolderTextView *contentTextView; // @synthesize contentTextView;
@property(retain, nonatomic) UITextField *titleView; // @synthesize titleView;
- (void).cxx_destruct;
- (void)keyBoardDidPressSendButton;
- (struct _NSRange)nsrangeInTextRange:(id)arg1;
- (void)replaceTextInRange:(id)arg1 withText:(id)arg2;
- (id)cutText:(id)arg1;
- (void)backSpaceString;
- (void)didSelecteQQFace:(id)arg1 andIsSelecteDelete:(_Bool)arg2;
- (void)didSelecteEmoji:(id)arg1 andIsSelecteDelete:(_Bool)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)getContent;
- (void)updateContentMaxCharacter:(id)arg1;
- (void)setContent:(id)arg1;
- (void)updateTitleMaxCharacter:(id)arg1;
- (void)setTopicTitle:(id)arg1;
- (id)getTitle;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)clickKeyBoardBtn:(id)arg1;
- (void)clickEmojiBtn:(id)arg1;
- (_Bool)isHorizontal;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

