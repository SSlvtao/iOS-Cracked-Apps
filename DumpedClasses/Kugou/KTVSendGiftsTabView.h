//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeView, NSMutableArray;

@interface KTVSendGiftsTabView : UIView
{
    NSMutableArray *titlesArr;
    NSMutableArray *buttonArr;
    KGThemeButton *selectBtn;
    KGThemeView *bottomView;
    _Bool _isAnimate;
    _Bool _isGroup;
    id <KTVSendGiftsTabViewDelegate> _delegate;
    long long _selectIndex;
}

@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) _Bool isAnimate; // @synthesize isAnimate=_isAnimate;
@property(nonatomic) __weak id <KTVSendGiftsTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelectButton:(id)arg1;
- (void)btnClicked:(id)arg1;
- (void)upLoadIndex:(long long)arg1;
- (void)setTabViewWithTitles:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

