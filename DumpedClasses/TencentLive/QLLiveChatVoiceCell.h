//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLLiveChatBaseCell.h"

@class QLCommonVoiceView, UIImageView;

@interface QLLiveChatVoiceCell : QLLiveChatBaseCell
{
    QLCommonVoiceView *_voiceView;
    UIImageView *_bubbleBgImgView;
}

+ (double)heightOfSubViewWithBaseInfo:(id)arg1 contentLines:(long long)arg2;
@property(retain, nonatomic) UIImageView *bubbleBgImgView; // @synthesize bubbleBgImgView=_bubbleBgImgView;
@property(retain, nonatomic) QLCommonVoiceView *voiceView; // @synthesize voiceView=_voiceView;
- (void).cxx_destruct;
- (void)didUserClick:(id)arg1;
- (void)layoutSubviews;
- (void)refreshInterfaceUI;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

