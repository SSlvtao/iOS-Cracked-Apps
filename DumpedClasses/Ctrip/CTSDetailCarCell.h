//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSNCardDetailBaseCell.h"

@class CTImageView;

@interface CTSDetailCarCell : CTSNCardDetailBaseCell
{
    CTImageView *_iconImageView;
}

@property(retain, nonatomic) CTImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)getShareCardWxModelWithShareUrlModel:(id)arg1;
- (id)getCalenddarModel;
- (void)setCellWithModel:(id)arg1 delegate:(id)arg2;
- (id)init;

@end
