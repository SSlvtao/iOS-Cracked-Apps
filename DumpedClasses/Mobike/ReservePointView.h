//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAnnotationView.h"

@class CustomCalloutView, PointHelpModel;

@interface ReservePointView : MMAnnotationView
{
    _Bool _selected;
    PointHelpModel *_ptModel;
    CustomCalloutView *_calloutView;
    id <PointHelpDelegate> _delegate;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) id <PointHelpDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CustomCalloutView *calloutView; // @synthesize calloutView=_calloutView;
@property(retain, nonatomic) PointHelpModel *ptModel; // @synthesize ptModel=_ptModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pointHelpBtnAction:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showPointHelp:(_Bool)arg1;
- (id)getImageUrl:(id)arg1 placeholderImage:(id)arg2;
- (void)updateAnnotation:(id)arg1 withTarget:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

