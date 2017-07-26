//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIScrollView;

@interface QLShareCommonView : UIView
{
    double _estimatedWidth;
    UIScrollView *_scrollView;
    UIView *_shareBtnsContainer;
    NSMutableArray *_shareButtons;
}

@property(retain, nonatomic) NSMutableArray *shareButtons; // @synthesize shareButtons=_shareButtons;
@property(retain, nonatomic) UIView *shareBtnsContainer; // @synthesize shareBtnsContainer=_shareBtnsContainer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property double estimatedWidth; // @synthesize estimatedWidth=_estimatedWidth;
- (void).cxx_destruct;
- (void)shareClicked:(id)arg1;
- (unsigned long long)actionTypeWithBtnTag:(unsigned long long)arg1;
- (void)showAllShareBtns;
- (id)createButtonWithType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

