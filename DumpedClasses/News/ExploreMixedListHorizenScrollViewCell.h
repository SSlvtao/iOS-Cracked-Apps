//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NewsListHorizenScrollViewCellBase.h"

#import "ExploreMixedListBaseViewDelegate.h"

@class NSString;

@interface ExploreMixedListHorizenScrollViewCell : NewsListHorizenScrollViewCellBase <ExploreMixedListBaseViewDelegate>
{
}

- (void)mixListViewCancelRequest:(id)arg1;
- (void)mixListViewFinishLoad:(id)arg1 isFinish:(_Bool)arg2 isUserPull:(_Bool)arg3;
- (void)mixListViewDidStartLoad:(id)arg1;
- (void)cellWillEnterBackground;
- (void)cellWillEnterForground;
- (void)isCurrentDisplayWhenEndDecelerating:(_Bool)arg1;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)buildListView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

