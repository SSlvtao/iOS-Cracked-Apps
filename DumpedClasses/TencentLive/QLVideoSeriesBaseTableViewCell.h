//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSIndexPath, UIButton;

@interface QLVideoSeriesBaseTableViewCell : UITableViewCell
{
    UIButton *_contentVideoInfoView;
    UIButton *_videoTitleButton;
    double _cellWidth;
    NSIndexPath *_indexPath;
    CDUnknownBlockType _clickActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickActionBlock; // @synthesize clickActionBlock=_clickActionBlock;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UIButton *videoTitleButton; // @synthesize videoTitleButton=_videoTitleButton;
@property(retain, nonatomic) UIButton *contentVideoInfoView; // @synthesize contentVideoInfoView=_contentVideoInfoView;
- (void).cxx_destruct;
- (double)paddingViewX;
- (void)layoutSubviews;
- (void)selectedAction;
- (void)dismissView;
- (void)setCellClickActionBlock:(CDUnknownBlockType)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setCellTitle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

