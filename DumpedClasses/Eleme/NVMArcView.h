//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface NVMArcView : UIView
{
    UIColor *_color;
    double _leftArcEndPointAdjustment;
    double _rightArcEndPointAdjustment;
}

@property(nonatomic) double rightArcEndPointAdjustment; // @synthesize rightArcEndPointAdjustment=_rightArcEndPointAdjustment;
@property(nonatomic) double leftArcEndPointAdjustment; // @synthesize leftArcEndPointAdjustment=_leftArcEndPointAdjustment;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
