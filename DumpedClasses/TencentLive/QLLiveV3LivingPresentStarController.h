//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, QLLiveV3DetailModel, UICollectionView, UILabel;

@interface QLLiveV3LivingPresentStarController : QLBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_starShowCollectionView;
    UILabel *_presentShowText;
    id <QLPresentDelegate> _delegate;
    NSString *_Pid;
    NSMutableArray *_modelArray;
    QLLiveV3DetailModel *_detailModel;
}

@property(retain, nonatomic) QLLiveV3DetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) UICollectionView *starShowCollectionView; // @synthesize starShowCollectionView=_starShowCollectionView;
@property(retain, nonatomic) UILabel *presentShowText; // @synthesize presentShowText=_presentShowText;
@property(copy, nonatomic) NSString *Pid; // @synthesize Pid=_Pid;
@property(nonatomic) id <QLPresentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentToPresentControllerWithActorId:(id)arg1 actorId:(id)arg2 actorName:(id)arg3 actorImg:(id)arg4 idType:(long long)arg5;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)resetPreSentLabelText:(id)arg1;
- (void)resetCollectViewData:(id)arg1;
- (id)titleForError:(id)arg1;
- (id)titleForEmpty;
- (unsigned long long)pageViewUIStyle;
- (void)didReceiveMemoryWarning;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)requestModelDidStartLoad:(id)arg1;
- (void)retryDown:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

