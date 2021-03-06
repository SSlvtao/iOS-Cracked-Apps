//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOTextCellView.h"

@class ArkCardsListView, UIButton;

@interface QQAIOTextArkCellView : QQAIOTextCellView
{
    _Bool _arkButtonInited;
    _Bool _isDisableInput;
    UIButton *_arkButton;
    ArkCardsListView *_cardListView;
}

@property(retain, nonatomic) ArkCardsListView *cardListView; // @synthesize cardListView=_cardListView;
@property(nonatomic) _Bool isDisableInput; // @synthesize isDisableInput=_isDisableInput;
@property(retain, nonatomic) UIButton *arkButton; // @synthesize arkButton=_arkButton;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)emotionLabelHandleArkKeyWord:(struct _NSRange)arg1;
- (void)reportKeywordClickedWithCardModel:(id)arg1;
- (void)onScrollEndAnimation:(id)arg1;
- (void)arkButtonDidTap:(id)arg1;
- (void)scrollToSelectedCardWithKeywordRange:(struct _NSRange)arg1 cardModels:(id)arg2;
- (void)showArkViewWithKeywordRange:(struct _NSRange)arg1;
- (void)displayArkView;
- (void)checkArkAIButton;
- (void)initArkAIUI:(id)arg1 appName:(id)arg2 equalInputText:(_Bool)arg3 contextMatchType:(int)arg4;
- (_Bool)needParseArkAI;
- (void)updateArkButtonImage:(id)arg1;
- (void)checkCardListView;
- (void)createArkButton;
- (void)drawContent:(struct CGRect)arg1;
- (void)willDrawBubble;
- (void)setAioModel:(id)arg1;

@end

