//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HLFeedCell.h"

@class UIButton;

@interface HLVideoFeedCell : HLFeedCell
{
    UIButton *_videoBtn;
}

@property(retain, nonatomic) UIButton *videoBtn; // @synthesize videoBtn=_videoBtn;
- (void).cxx_destruct;
- (void)onVideoBtnClickHandler:(id)arg1;
- (void)updateCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

