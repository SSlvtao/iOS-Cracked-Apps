//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMContainerViewController.h"

#import "RCTViewControllerProtocol.h"

@class NMBarButtonItem, NSString, RCTEventDispatcher, RCTNavItem, UIView, UIViewController;

@interface NMRCTWrapperViewController : NMContainerViewController <RCTViewControllerProtocol>
{
    UIView *_contentView;
    UIViewController *_controller;
    RCTNavItem *_navItem;
    UIView *_wrapperView;
    NMBarButtonItem *_backBarButtonItem;
    RCTEventDispatcher *_eventDispatcher;
    double _previousTopLayoutLength;
    double _previousBottomLayoutLength;
    id <UILayoutSupport> _currentTopLayoutGuide;
    id <UILayoutSupport> _currentBottomLayoutGuide;
    id <RCTWrapperViewControllerNavigationListener> _navigationListener;
}

@property(nonatomic) __weak id <RCTWrapperViewControllerNavigationListener> navigationListener; // @synthesize navigationListener=_navigationListener;
@property(readonly, nonatomic) id <UILayoutSupport> currentBottomLayoutGuide; // @synthesize currentBottomLayoutGuide=_currentBottomLayoutGuide;
@property(readonly, nonatomic) id <UILayoutSupport> currentTopLayoutGuide; // @synthesize currentTopLayoutGuide=_currentTopLayoutGuide;
@property(retain, nonatomic) RCTNavItem *navItem; // @synthesize navItem=_navItem;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)arg1;
- (void)backAction:(id)arg1;
- (void)resetNavItem;
- (void)prepareNavItem:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)initWithContentView:(id)arg1;
- (id)initWithNavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

