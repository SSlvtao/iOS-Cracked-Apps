//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface QLONABulletinBoardTagsView : UIView
{
    id <QLONABulletinBoardTagsViewDataSource> _dataSource;
    id <QLONABulletinBoardTagsViewDelegate> _delegate;
    double _tagsViewTotoalWidth;
}

@property(nonatomic) double tagsViewTotoalWidth; // @synthesize tagsViewTotoalWidth=_tagsViewTotoalWidth;
@property(nonatomic) __weak id <QLONABulletinBoardTagsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QLONABulletinBoardTagsViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)tagItemClicked:(id)arg1;
- (void)tagsBgClicked:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

