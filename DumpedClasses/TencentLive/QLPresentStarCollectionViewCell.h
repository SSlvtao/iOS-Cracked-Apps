//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QLSImageView, UILabel;

@interface QLPresentStarCollectionViewCell : UICollectionViewCell
{
    QLSImageView *_StarImage;
    UILabel *_StarName;
}

@property(retain, nonatomic) UILabel *StarName; // @synthesize StarName=_StarName;
@property(retain, nonatomic) QLSImageView *StarImage; // @synthesize StarImage=_StarImage;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

