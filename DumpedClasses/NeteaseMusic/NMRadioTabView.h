//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface NMRadioTabView : UIView
{
    NSMutableArray *_itemArray;
    long long _currentIndex;
    long long _lastIndex;
    id <NMRadioTabViewDelegate> _delegate;
    NSMutableArray *_normalImagesArray;
    NSMutableArray *_highlightedImagesArray;
    NSMutableArray *_normalNightImagesArray;
    NSMutableArray *_highlightedNightImagesArray;
}

@property(nonatomic) __weak id <NMRadioTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCurrentIndexWithoutCallback:(long long)arg1;
@property(nonatomic) long long currentIndex; // @dynamic currentIndex;
- (void)buttonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)setNightMode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
