//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLGradientView.h"

@class NSArray, UIImageView, UILabel;

@interface QLShowRoomButton : QLGradientView
{
    NSArray *_imageArr;
    UIImageView *_iconImageView;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSArray *imageArr; // @synthesize imageArr=_imageArr;
- (void).cxx_destruct;
- (void)setAnimationImageWithImageName:(id)arg1 smallImageRows:(int)arg2 columns:(int)arg3;
- (void)stopShowRoomButtonAniamtion;
- (void)startShowRoomButtonAniamtion;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)setContent:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

