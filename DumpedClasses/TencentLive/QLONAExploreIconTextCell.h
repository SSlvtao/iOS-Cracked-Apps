//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLONAExploreCollectionViewCell.h"

@class CAShapeLayer, QLSImageView;

@interface QLONAExploreIconTextCell : QLONAExploreCollectionViewCell
{
    QLSImageView *_imageView;
    CAShapeLayer *_borderLayer;
}

+ (struct CGSize)itemSizeWithObj:(id)arg1;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
- (id)imageView;
- (void)__resetBorderLayer;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;

@end

