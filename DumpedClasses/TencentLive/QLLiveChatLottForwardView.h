//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLAppLiveCommentBaseInfo, QLRichLabel, QLSImageView, UILabel;

@interface QLLiveChatLottForwardView : UIView
{
    QLAppLiveCommentBaseInfo *_baseCommentInfo;
    UILabel *_fowardLable;
    QLRichLabel *_nameLable;
    QLRichLabel *_contentLable;
    UIView *_seperatorLine;
    QLSImageView *_contentImg;
    QLRichLabel *_title;
    QLRichLabel *_desc;
}

+ (double)heightForForwardView:(id)arg1;
@property(retain, nonatomic) QLRichLabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) QLRichLabel *title; // @synthesize title=_title;
@property(retain, nonatomic) QLSImageView *contentImg; // @synthesize contentImg=_contentImg;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) QLRichLabel *contentLable; // @synthesize contentLable=_contentLable;
@property(retain, nonatomic) QLRichLabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) UILabel *fowardLable; // @synthesize fowardLable=_fowardLable;
@property(retain, nonatomic) QLAppLiveCommentBaseInfo *baseCommentInfo; // @synthesize baseCommentInfo=_baseCommentInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

