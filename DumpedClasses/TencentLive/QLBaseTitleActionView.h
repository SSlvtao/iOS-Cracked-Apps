//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, QLJCEAction, UIImageView, UILabel;

@interface QLBaseTitleActionView : UIView
{
    UILabel *_titleLbl;
    UILabel *_subTitleLbl;
    UIImageView *_arrowView;
    QLJCEAction *_titleAction;
    NSArray *_markList;
}

@property(retain, nonatomic) NSArray *markList; // @synthesize markList=_markList;
@property(retain, nonatomic) QLJCEAction *titleAction; // @synthesize titleAction=_titleAction;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *subTitleLbl; // @synthesize subTitleLbl=_subTitleLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
- (void).cxx_destruct;
- (void)setObjectWithTitle:(id)arg1 subTitle:(id)arg2 action:(id)arg3;
- (void)didTapArrowView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

