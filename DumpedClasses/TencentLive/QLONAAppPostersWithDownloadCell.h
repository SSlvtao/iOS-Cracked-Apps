//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLJCEONAMultAppPoster;

@interface QLONAAppPostersWithDownloadCell : QLBaseTabelViewCell
{
    QLJCEONAMultAppPoster *_multAppPoster;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
+ (int)getThumbStyleWithMultiAppPoster:(id)arg1 showNumber:(long long *)arg2;
+ (double)heightOfCellWithUserInfo:(id)arg1 style:(int)arg2;
@property(retain, nonatomic) QLJCEONAMultAppPoster *multAppPoster; // @synthesize multAppPoster=_multAppPoster;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)createViews;
- (void)reportShowUp;
- (void)startLoadModel;
- (void)setObject:(id)arg1;

@end

