//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDBaseCollectionContainerView.h"

@class UIButton, UIView;

@interface DGPSelectedLineView : DDBaseCollectionContainerView
{
    UIButton *_downButton;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIButton *downButton; // @synthesize downButton=_downButton;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
