//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class NSMutableArray, NSString, UILabel;

@interface FMCardPicsCell : UITableViewCell <FMComponentCellProtocol>
{
    UILabel *_dividerLabel;
    NSMutableArray *_imageViewsArray;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) NSMutableArray *imageViewsArray; // @synthesize imageViewsArray=_imageViewsArray;
@property(retain, nonatomic) UILabel *dividerLabel; // @synthesize dividerLabel=_dividerLabel;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

