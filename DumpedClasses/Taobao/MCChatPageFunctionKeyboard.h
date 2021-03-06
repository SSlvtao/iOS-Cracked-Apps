//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIPageControl, UIScrollView;

@interface MCChatPageFunctionKeyboard : UIView <UIScrollViewDelegate>
{
    NSArray *_functionItems;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSArray *functionItems; // @synthesize functionItems=_functionItems;
- (void).cxx_destruct;
- (void)pageChange:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateFunctionItems:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

