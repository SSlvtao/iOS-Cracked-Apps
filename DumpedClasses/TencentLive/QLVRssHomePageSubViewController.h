//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLOperationPageViewController.h"

@class QLBaseTabPageViewController;

@interface QLVRssHomePageSubViewController : QLOperationPageViewController
{
    QLBaseTabPageViewController *_homeCtl;
}

@property(nonatomic) __weak QLBaseTabPageViewController *homeCtl; // @synthesize homeCtl=_homeCtl;
- (void).cxx_destruct;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)resetCategoryCode;
- (long long)headerDragRefreshStyle;
- (void)viewDidLoad;
- (long long)qlStausBarStyle;
- (struct CGRect)frameOfPageStatusView;
- (_Bool)navigationBarHidden;
- (double)defaultTopOffsetValue;

@end

