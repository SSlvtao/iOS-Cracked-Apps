//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLAppLiveCommentBaseInfo, QLCommonVoiceView, QLRichLabel, UIImageView, UILabel;

@interface QLLiveChatVoiceForwardView : UIView
{
    QLAppLiveCommentBaseInfo *_baseCommentInfo;
    id <QLCommonVoiceViewDataSource> _voiceDataSource;
    UILabel *_fowardLable;
    QLRichLabel *_nameLable;
    QLCommonVoiceView *_voiceView;
    UIImageView *_bubbleBgImgView;
}

+ (double)heightForForwardView:(id)arg1;
@property(retain, nonatomic) UIImageView *bubbleBgImgView; // @synthesize bubbleBgImgView=_bubbleBgImgView;
@property(retain, nonatomic) QLCommonVoiceView *voiceView; // @synthesize voiceView=_voiceView;
@property(retain, nonatomic) QLRichLabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) UILabel *fowardLable; // @synthesize fowardLable=_fowardLable;
@property(nonatomic) __weak id <QLCommonVoiceViewDataSource> voiceDataSource; // @synthesize voiceDataSource=_voiceDataSource;
@property(retain, nonatomic) QLAppLiveCommentBaseInfo *baseCommentInfo; // @synthesize baseCommentInfo=_baseCommentInfo;
- (void).cxx_destruct;
- (void)didUserClick:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1 feedId:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

