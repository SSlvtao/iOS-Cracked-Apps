//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer;

@interface TB3DBizLoadingView : UIView
{
    float _progress;
    UIView *_contentView;
    CAShapeLayer *_progressLayer;
}

@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)setupProgressLayer;
- (void)setupCenterImage:(id)arg1;
- (void)setupContentView;
- (id)initWithTitle:(id)arg1 centerImage:(id)arg2;

@end

