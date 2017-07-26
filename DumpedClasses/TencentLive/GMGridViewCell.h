//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImage;

@interface GMGridViewCell : UIView
{
    _Bool _editing;
    _Bool _inShakingMode;
    _Bool _inFullSizeMode;
    _Bool highlighted;
    UIView *_contentView;
    UIView *_fullSizeView;
    unsigned long long _defaultFullsizeViewResizingMask;
    UIButton *_deleteButton;
    CDUnknownBlockType _deleteBlock;
    NSString *reuseIdentifier;
    struct CGSize _fullSize;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(nonatomic) __weak UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) unsigned long long defaultFullsizeViewResizingMask; // @synthesize defaultFullsizeViewResizingMask=_defaultFullsizeViewResizingMask;
@property(readonly, nonatomic, getter=isInFullSizeMode) _Bool inFullSizeMode; // @synthesize inFullSizeMode=_inFullSizeMode;
@property(retain, nonatomic) UIView *fullSizeView; // @synthesize fullSizeView=_fullSizeView;
@property(nonatomic) struct CGSize fullSize; // @synthesize fullSize=_fullSize;
@property(readonly, nonatomic, getter=isInShakingMode) _Bool inShakingMode; // @synthesize inShakingMode=_inShakingMode;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)stepToFullsizeWithAlpha:(double)arg1;
- (void)switchToFullSizeMode:(_Bool)arg1;
- (void)shake:(_Bool)arg1;
- (void)prepareForReuse;
- (void)actionDelete;
@property(retain, nonatomic) UIImage *deleteButtonIcon; // @dynamic deleteButtonIcon;
@property(nonatomic) struct CGPoint deleteButtonOffset; // @dynamic deleteButtonOffset;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

