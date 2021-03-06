//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSArray, NSMutableArray, UIButton, UIScrollView;

@interface JSEmotionBottomView : UIView
{
    NSArray *_images;
    long long _selectIndex;
    CDUnknownBlockType _selectedBlock;
    CDUnknownBlockType _sendBlock;
    UIView *_lineView;
    UIButton *_sendButton;
    CALayer *_buttonLayer;
    UIScrollView *_scrollView;
    NSMutableArray *_emotionListData;
    UIView *_selectView;
}

@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) NSMutableArray *emotionListData; // @synthesize emotionListData=_emotionListData;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CALayer *buttonLayer; // @synthesize buttonLayer=_buttonLayer;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)selectDidClicked:(id)arg1;
- (void)sendButtonDidClicked;
- (id)createBottomButton;
- (void)appendImageUrls:(id)arg1;
- (void)appendImages:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

