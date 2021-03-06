//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface FCFeedBottomView : UIView
{
    NSString *_time;
    NSString *_from;
    long long _commentNum;
    long long _likeNum;
    long long _useNum;
    UILabel *_timeIcon;
    UILabel *_timeLabel;
    UILabel *_fromTitleLabel;
    UIButton *_fromContentButton;
    UILabel *_commentIcon;
    UILabel *_commentNumber;
    UILabel *_likeIcon;
    UILabel *_likeNumber;
    UIImageView *_userNumIcon;
    UILabel *_userNumber;
}

@property(retain, nonatomic) UILabel *userNumber; // @synthesize userNumber=_userNumber;
@property(retain, nonatomic) UIImageView *userNumIcon; // @synthesize userNumIcon=_userNumIcon;
@property(retain, nonatomic) UILabel *likeNumber; // @synthesize likeNumber=_likeNumber;
@property(retain, nonatomic) UILabel *likeIcon; // @synthesize likeIcon=_likeIcon;
@property(retain, nonatomic) UILabel *commentNumber; // @synthesize commentNumber=_commentNumber;
@property(retain, nonatomic) UILabel *commentIcon; // @synthesize commentIcon=_commentIcon;
@property(retain, nonatomic) UIButton *fromContentButton; // @synthesize fromContentButton=_fromContentButton;
@property(retain, nonatomic) UILabel *fromTitleLabel; // @synthesize fromTitleLabel=_fromTitleLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *timeIcon; // @synthesize timeIcon=_timeIcon;
@property(nonatomic) long long useNum; // @synthesize useNum=_useNum;
@property(nonatomic) long long likeNum; // @synthesize likeNum=_likeNum;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;
- (void)addTargetToSource:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)componentsFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

