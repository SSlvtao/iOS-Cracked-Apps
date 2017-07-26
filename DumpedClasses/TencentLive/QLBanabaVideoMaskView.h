//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, QLBanabaItem, UITableView;

@interface QLBanabaVideoMaskView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    QLBanabaItem *_commentItem;
    NSMutableArray *_datas;
    _Bool _parentBanabaItemHasVoice;
    CDUnknownBlockType _dissMissMaskBlock;
    UITableView *_commentTableView;
}

@property(retain, nonatomic) UITableView *commentTableView; // @synthesize commentTableView=_commentTableView;
@property(copy, nonatomic) CDUnknownBlockType dissMissMaskBlock; // @synthesize dissMissMaskBlock=_dissMissMaskBlock;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)__handleTapAction:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

