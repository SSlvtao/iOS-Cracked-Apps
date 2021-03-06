//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBTaoPasswordLoadingView, TPResult, UIButton, UIWindow;

@interface TBTaoPasswordContainerView : UIView
{
    _Bool _animating;
    _Bool _afterLoading;
    _Bool _isReload;
    id <TBTaoPasswordContainerDelegate> _delegate;
    UIWindow *_keyWindow;
    TBTaoPasswordLoadingView *_loadingView;
    UIView *_currentView;
    UIButton *_closeButton;
    unsigned long long _viewType;
    TPResult *_model;
}

@property(retain, nonatomic) TPResult *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) TBTaoPasswordLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic) __weak id <TBTaoPasswordContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloading;
- (void)showViewNoLoading;
- (void)showViewFromLoading;
- (void)dismiss;
- (void)loading;
- (void)show:(_Bool)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)update:(id)arg1 withModelClass:(Class)arg2;
- (id)init;

@end

