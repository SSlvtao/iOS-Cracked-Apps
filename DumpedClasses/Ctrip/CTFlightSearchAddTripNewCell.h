//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightRadioView, UIButton;

@interface CTFlightSearchAddTripNewCell : UITableViewCell
{
    id <CTFlightSearchAddTripDelegate> _delegate;
    CTFlightRadioView *_bgView;
    UIButton *_flightMoreLine;
}

@property(retain, nonatomic) UIButton *flightMoreLine; // @synthesize flightMoreLine=_flightMoreLine;
@property(nonatomic) __weak CTFlightRadioView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <CTFlightSearchAddTripDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBackgroundStyleType;
- (void)addTrip:(id)arg1;
- (void)awakeFromNib;

@end
