//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLJCEONAStarIntroduction, UILabel;

@interface QLStarPersonalIntroCell : QLBaseTabelViewCell
{
    QLJCEONAStarIntroduction *_intro;
    UILabel *_briefInfo;
    UILabel *_detailedInfo;
}

+ (double)getCellHeightByText:(id)arg1 andText2:(id)arg2;
+ (double)getHeightByText:(id)arg1;
+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) UILabel *detailedInfo; // @synthesize detailedInfo=_detailedInfo;
@property(retain, nonatomic) UILabel *briefInfo; // @synthesize briefInfo=_briefInfo;
@property(retain, nonatomic) QLJCEONAStarIntroduction *intro; // @synthesize intro=_intro;
- (void).cxx_destruct;
- (void)singleClick;
- (void)setBriefInfo:(id)arg1 andDetailedInfo:(id)arg2;
- (void)reportShowUp;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

