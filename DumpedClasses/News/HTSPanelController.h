//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HTSPanelControllerWindow, HTSPanelRootViewController, NSArray, NSMutableArray, NSString, SSThemedButton, SSThemedView;

@interface HTSPanelController : NSObject
{
    double _cellWidth;
    _Bool moviePaused;
    NSMutableArray *_collectionViews;
    SSThemedView *_backView;
    SSThemedView *_maskView;
    SSThemedButton *_cancelButton;
    HTSPanelControllerWindow *_backWindow;
    HTSPanelRootViewController *_rootViewController;
    NSArray *_data;
    NSString *_cancelTitle;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) HTSPanelRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) HTSPanelControllerWindow *backWindow; // @synthesize backWindow=_backWindow;
@property(retain, nonatomic) SSThemedButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) SSThemedView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) SSThemedView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) NSMutableArray *collectionViews; // @synthesize collectionViews=_collectionViews;
- (void).cxx_destruct;
- (id)createCollectionViewWithIndex:(int)arg1;
- (id)cellViewWithRow:(int)arg1 index:(int)arg2 item:(id)arg3;
- (id)lineViewWithIndex:(int)arg1 isLast:(_Bool)arg2;
- (void)cancelWithBlock:(CDUnknownBlockType)arg1 animation:(_Bool)arg2;
- (void)cancelWithBlock:(CDUnknownBlockType)arg1;
- (void)cancelButtonAction:(id)arg1;
- (void)buttonClickAction:(id)arg1;
- (void)selectedIconButtonAction:(id)arg1;
- (void)selectedDigIconButtonAction:(id)arg1;
- (void)hideWithBlock:(CDUnknownBlockType)arg1 animation:(_Bool)arg2;
- (void)hideWithBlock:(CDUnknownBlockType)arg1;
- (void)show;
- (void)commonInit;
- (void)willTransitionToSize:(struct CGSize)arg1;
- (void)rootViewWillTransitionToSize:(id)arg1;
- (void)applicationStautsBarDidRotate;
- (id)initWithItems:(id)arg1 cancelTitle:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)initWithItems:(id)arg1 cancelTitle:(id)arg2;
- (void)dealloc;

@end
