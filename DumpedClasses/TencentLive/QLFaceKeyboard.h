//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GMGridViewDataSource.h"
#import "UIScrollViewDelegate.h"

@class NSString, QLKeyboardScrollView, QLMomentPageControl, UIButton, UIImageView;

@interface QLFaceKeyboard : UIView <UIScrollViewDelegate, GMGridViewDataSource>
{
    _Bool _isEditViewOrNot;
    _Bool _isHorizonal;
    int _emojiType;
    QLKeyboardScrollView *_kScrollView;
    QLMomentPageControl *_pageControl;
    UIButton *_sendButton;
    UIImageView *_faceToolView;
    double _faceBoardViewHeight;
    id <QLFaceKeyboardDelegate> _delegate;
}

+ (id)getInstance;
@property(nonatomic) _Bool isHorizonal; // @synthesize isHorizonal=_isHorizonal;
@property(nonatomic) _Bool isEditViewOrNot; // @synthesize isEditViewOrNot=_isEditViewOrNot;
@property(nonatomic) __weak id <QLFaceKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double faceBoardViewHeight; // @synthesize faceBoardViewHeight=_faceBoardViewHeight;
@property(nonatomic) int emojiType; // @synthesize emojiType=_emojiType;
@property(retain, nonatomic) UIImageView *faceToolView; // @synthesize faceToolView=_faceToolView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) QLMomentPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) QLKeyboardScrollView *kScrollView; // @synthesize kScrollView=_kScrollView;
- (void).cxx_destruct;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

