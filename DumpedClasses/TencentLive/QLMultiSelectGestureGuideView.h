//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLGifImageView;

@interface QLMultiSelectGestureGuideView : UIView
{
    QLGifImageView *_gifView;
    UIView *_maskView;
}

+ (_Bool)shouldShowMultiSelectGestureGuideView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) QLGifImageView *gifView; // @synthesize gifView=_gifView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissView;
- (void)showMultiSelectGestureGuide;
- (id)initWithFrame:(struct CGRect)arg1;

@end

