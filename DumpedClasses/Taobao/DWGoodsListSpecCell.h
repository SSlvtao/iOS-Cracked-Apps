//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class DWContext, UIButton;

@interface DWGoodsListSpecCell : UICollectionViewCell
{
    UIButton *_moreBtn;
    DWContext *_context;
}

@property(nonatomic) __weak DWContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
- (void).cxx_destruct;
- (void)goMoreItems:(id)arg1;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

