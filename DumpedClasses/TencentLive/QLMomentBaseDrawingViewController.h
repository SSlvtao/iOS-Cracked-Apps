//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "KKMediaPlayerTopViewControlProtocolEx.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, QLActionToolBar, QLDrawActionButton, QLMomentDrawView, QLMomentDrawingMgr, QLMomentImageCell, QLMomentTextCell, UIImage, UIImageView, UILabel, UIScrollView, UITableView, UIView;

@interface QLMomentBaseDrawingViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate, KKMediaPlayerTopViewControlProtocolEx>
{
    double screenWidth;
    double screenHeight;
    _Bool hasEdited;
    int curMode;
    UIImageView *imageView;
    UIScrollView *scrollView;
    QLActionToolBar *bottomBar;
    QLActionToolBar *topBar;
    QLDrawActionButton *cancelBtn;
    QLDrawActionButton *okBtn;
    float scaleSize;
    float scaleSize2;
    UIImageView *textAndImageLayer;
    UITableView *textTableView;
    UITableView *imgTableView;
    UITableView *imgGroupTableView;
    QLMomentTextCell *textCell;
    QLMomentImageCell *imageCell;
    long long textCellCount;
    long long imageGroupCellCount;
    long long imageCellCount;
    long long lastSelectTextIndex;
    long long lastSelectImgIndex;
    _Bool isTextTableViewHideByUser;
    _Bool isImgTableViewHideByUser;
    _Bool isDrawToolBarHideByUser;
    QLMomentDrawView *drawView;
    QLDrawActionButton *undoBtn;
    QLDrawActionButton *eraseBtn;
    QLDrawActionButton *drawBtn;
    UIView *drawToolContainer;
    UIView *okCancelContainer;
    UILabel *navTitle;
    NSMutableArray *textImageArr;
    NSMutableArray *emojiImageArr;
    QLMomentDrawingMgr *drawMgr;
    NSMutableArray *textArr;
    NSMutableArray *textResourceArr;
    NSMutableArray *imgResourceArr;
    _Bool textReadFromNet;
    _Bool emojiReadFromNet;
    UIImage *_image;
    id _delegate;
    UIImage *_bgImage;
}

@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)deleteTextAction;
- (void)deleteImageAction;
- (_Bool)shouldStopPlay;
- (_Bool)isLandscape;
- (long long)calColor:(id)arg1;
- (void)loadTextAndEmojiImages;
- (void)updateEditState;
- (void)changeDrawingState:(int)arg1;
- (void)brushDraw;
- (void)eraseDraw;
- (void)undoDraw;
- (void)snapshot;
- (void)hideObject:(id)arg1 inLayer:(long long)arg2;
- (void)addObject:(id)arg1 inLayer:(long long)arg2;
- (void)setSelectedStatus:(id)arg1;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)completeEdit;
- (void)cancelEdit;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)doubleTapGestureHandle:(id)arg1;
- (void)singleTapGestureHandle:(id)arg1;
- (void)didSelectEditItem:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)createImageView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithScreenState:(int)arg1 withEditMode:(int)arg2 withFrame:(struct CGRect)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

