//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLUserCenterGridItemCell.h"

#import "QLONAPosterViewActionDelegata.h"

@class NSArray, NSString;

@interface QLUserCenterAttentionStyleCell : QLUserCenterGridItemCell <QLONAPosterViewActionDelegata>
{
    _Bool _isDoingRedPTAnimation;
    NSArray *_attentionList;
}

@property(nonatomic) _Bool isDoingRedPTAnimation; // @synthesize isDoingRedPTAnimation=_isDoingRedPTAnimation;
@property(retain, nonatomic) NSArray *attentionList; // @synthesize attentionList=_attentionList;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)preProcessPoster:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)attentionListUpdated:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)upStateChanged:(id)arg1;
- (void)clearNewComingBadge:(id)arg1;
- (void)doRemoveTipAnimation;
- (void)resetAnimationFlag;
- (void)showAttentionStateAnimation;
- (void)refreshInterfaceUI;
- (id)modelSubTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

