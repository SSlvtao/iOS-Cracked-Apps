//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMomentMediaView.h"

@class QLStarCommentVoiceView;

@interface QLMomentVoiceMediaView : QLMomentMediaView
{
    QLStarCommentVoiceView *_voiceView;
}

+ (struct CGSize)sizeOfSelf:(id)arg1;
@property(retain, nonatomic) QLStarCommentVoiceView *voiceView; // @synthesize voiceView=_voiceView;
- (void).cxx_destruct;
- (void)setVoiceMediaViewWithMediaObject:(id)arg1 feedUserType:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

