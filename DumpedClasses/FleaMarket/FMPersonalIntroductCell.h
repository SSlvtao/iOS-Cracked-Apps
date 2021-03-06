//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class NSString, UIImageView, UILabel;

@interface FMPersonalIntroductCell : UITableViewCell <FMComponentCellProtocol>
{
    UILabel *_contentLabel;
    UILabel *_loginNoteLabel;
    UIImageView *_arrowView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *loginNoteLabel; // @synthesize loginNoteLabel=_loginNoteLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (void)autoLayoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

