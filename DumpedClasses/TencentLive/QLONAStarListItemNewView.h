//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QLJCEActorInfo, QLSImageView, UIImageView, UILabel;

@interface QLONAStarListItemNewView : UICollectionViewCell
{
    QLSImageView *_avartarImg;
    UILabel *_indexLabel;
    UIImageView *_maskborderView;
    UIImageView *_posImage;
    UILabel *_nameLabel;
    QLJCEActorInfo *_actorInfo;
}

@property(retain, nonatomic) QLJCEActorInfo *actorInfo; // @synthesize actorInfo=_actorInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setActor:(id)arg1 atIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

