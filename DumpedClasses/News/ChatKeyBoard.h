//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ChatToolBarDelegate.h"

@class ChatToolBar, NSString, UIColor, UITableView;

@interface ChatKeyBoard : UIView <ChatToolBarDelegate>
{
    _Bool _allowImage;
    _Bool _shouldTableViewContentScrollToBottomWhenKeybordUp;
    _Bool _translucent;
    UITableView *_associateTableView;
    id <ChatKeyBoardDataSource> _dataSource;
    id <ChatKeyBoardDelegate> _delegate;
    ChatToolBar *_chatToolBar;
    NSString *_placeHolder;
    UIColor *_placeHolderColor;
    double _lastChatKeyboardY;
}

+ (id)keyBoardWithParentViewBounds:(struct CGRect)arg1;
+ (id)keyBoardWithNavgationBarTranslucent:(_Bool)arg1;
+ (id)keyBoard;
@property(nonatomic) double lastChatKeyboardY; // @synthesize lastChatKeyboardY=_lastChatKeyboardY;
@property(nonatomic) _Bool translucent; // @synthesize translucent=_translucent;
@property(nonatomic) _Bool shouldTableViewContentScrollToBottomWhenKeybordUp; // @synthesize shouldTableViewContentScrollToBottomWhenKeybordUp=_shouldTableViewContentScrollToBottomWhenKeybordUp;
@property(nonatomic) _Bool allowImage; // @synthesize allowImage=_allowImage;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) ChatToolBar *chatToolBar; // @synthesize chatToolBar=_chatToolBar;
@property(nonatomic) __weak id <ChatKeyBoardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ChatKeyBoardDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UITableView *associateTableView; // @synthesize associateTableView=_associateTableView;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)deleteBackward:(id)arg1 appendText:(id)arg2;
- (double)getSuperViewH;
- (void)keyboardDown;
- (void)keyboardUp;
- (void)chatToolBarTextViewDeleteBackward:(id)arg1;
- (void)chatToolBarTextViewDidChange:(id)arg1;
- (void)chatToolBarSendText:(id)arg1;
- (void)chatToolBarTextViewDidBeginEditing:(id)arg1;
- (void)chatToolBar:(id)arg1 imageBtnPressed:(_Bool)arg2 keyBoardState:(_Bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateAssociateTableViewFrame;
- (void)keyBoardWillChangeFrame:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

