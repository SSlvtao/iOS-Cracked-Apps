//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLSImageView, RCLabel, UIActivityIndicatorView;

@interface QLMyWalletEntryView : UIView
{
    id <QLMyWalletEntryViewDelegate> _delegate;
    QLSImageView *_backgroundImageView;
    QLSImageView *_rightImageView;
    RCLabel *_htmlLabel;
    UIActivityIndicatorView *_indicator;
    unsigned long long _myWalletEntryType;
}

@property(nonatomic) unsigned long long myWalletEntryType; // @synthesize myWalletEntryType=_myWalletEntryType;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) RCLabel *htmlLabel; // @synthesize htmlLabel=_htmlLabel;
@property(retain, nonatomic) QLSImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) QLSImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak id <QLMyWalletEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)getBackgroundViewFrame;
- (void)taskEntryViewAnimation:(CDUnknownBlockType)arg1;
- (void)signedEntryViewAnimation:(CDUnknownBlockType)arg1;
- (void)updateSignedEntryType:(unsigned long long)arg1;
- (void)updateObject:(id)arg1 withType:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

