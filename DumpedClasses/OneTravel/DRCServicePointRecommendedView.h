//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DRCServicePoint, UIButton, UIImageView, UILabel;

@interface DRCServicePointRecommendedView : UIView
{
    _Bool _hasServicePointRecommended;
    _Bool _hintViewHidden;
    CDUnknownBlockType _viewInMapBlock;
    CDUnknownBlockType _raiseTableBlock;
    CDUnknownBlockType _spChoosedBlock;
    UILabel *_lblGuideWords;
    UIImageView *_imgvIcon;
    UIImageView *_imgvHint;
    UILabel *_lblName;
    UILabel *_lblTip;
    UILabel *_lblAddress;
    UILabel *_lblDistance;
    UIImageView *_imgvArrow;
    UIButton *_viewInMapButton;
    DRCServicePoint *_currentServicePoint;
}

+ (double)viewHeightWithServicePoint:(id)arg1 hintViewHidden:(_Bool)arg2;
@property(retain, nonatomic) DRCServicePoint *currentServicePoint; // @synthesize currentServicePoint=_currentServicePoint;
@property(retain, nonatomic) UIButton *viewInMapButton; // @synthesize viewInMapButton=_viewInMapButton;
@property(retain, nonatomic) UIImageView *imgvArrow; // @synthesize imgvArrow=_imgvArrow;
@property(retain, nonatomic) UILabel *lblDistance; // @synthesize lblDistance=_lblDistance;
@property(retain, nonatomic) UILabel *lblAddress; // @synthesize lblAddress=_lblAddress;
@property(retain, nonatomic) UILabel *lblTip; // @synthesize lblTip=_lblTip;
@property(retain, nonatomic) UILabel *lblName; // @synthesize lblName=_lblName;
@property(retain, nonatomic) UIImageView *imgvHint; // @synthesize imgvHint=_imgvHint;
@property(retain, nonatomic) UIImageView *imgvIcon; // @synthesize imgvIcon=_imgvIcon;
@property(retain, nonatomic) UILabel *lblGuideWords; // @synthesize lblGuideWords=_lblGuideWords;
@property(nonatomic) _Bool hintViewHidden; // @synthesize hintViewHidden=_hintViewHidden;
@property(nonatomic) _Bool hasServicePointRecommended; // @synthesize hasServicePointRecommended=_hasServicePointRecommended;
@property(copy, nonatomic) CDUnknownBlockType spChoosedBlock; // @synthesize spChoosedBlock=_spChoosedBlock;
@property(copy, nonatomic) CDUnknownBlockType raiseTableBlock; // @synthesize raiseTableBlock=_raiseTableBlock;
@property(copy, nonatomic) CDUnknownBlockType viewInMapBlock; // @synthesize viewInMapBlock=_viewInMapBlock;
- (void).cxx_destruct;
- (void)setupSubViewsConstraints;
- (void)updateSpRecommendedViewWithServicePoint:(id)arg1 replaceDistance:(id)arg2 hintViewHidden:(_Bool)arg3 viewInMapButtonHidden:(_Bool)arg4 errorMsg:(id)arg5 tip:(id)arg6;
- (void)updateSpRecommendedViewWithServicePoint:(id)arg1 replaceDistance:(id)arg2 hintViewHidden:(_Bool)arg3 viewInMapButtonHidden:(_Bool)arg4 errorMsg:(id)arg5;
- (void)updateSpRecommendedViewWithServicePoint:(id)arg1 hintViewHidden:(_Bool)arg2 viewInMapButtonHidden:(_Bool)arg3 errorMsg:(id)arg4;
- (void)updateSpRecommendedViewWithServicePoint:(id)arg1 errorMsg:(id)arg2;
- (id)init;

@end
