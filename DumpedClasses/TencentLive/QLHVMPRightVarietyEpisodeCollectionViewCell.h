//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSIndexPath;

@interface QLHVMPRightVarietyEpisodeCollectionViewCell : UICollectionViewCell
{
    NSIndexPath *_indexPath;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)infoButtonClicked:(id)arg1;
- (void)setCellClickBlock:(CDUnknownBlockType)arg1;
- (id)markLabelFromSource:(id)arg1;
- (void)configData:(id)arg1;
- (void)titleHighlight:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

