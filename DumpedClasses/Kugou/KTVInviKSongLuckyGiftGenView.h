//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KTVInviKSongLuckyGiftViewDelegate.h"

@class NSString, NSURL;

@interface KTVInviKSongLuckyGiftGenView : UIView <KTVInviKSongLuckyGiftViewDelegate>
{
    id <KTVInviKSongLuckyGiftGenViewDelegate> _delegate;
    NSString *_title;
    NSURL *_giftImgURL;
    NSString *_content;
    NSString *_cancelTitle;
    NSString *_otherTitle;
}

@property(copy, nonatomic) NSString *otherTitle; // @synthesize otherTitle=_otherTitle;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSURL *giftImgURL; // @synthesize giftImgURL=_giftImgURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <KTVInviKSongLuckyGiftGenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)luckyGiftViewDidDismiss:(id)arg1;
- (void)luckyGiftView:(id)arg1 didClickedButtonAtIndex:(int)arg2;
- (void)openResLuckyGift;
- (void)dismissResGiftView;
- (void)show;
- (id)initWithTitle:(id)arg1 giftImgURL:(id)arg2 content:(id)arg3 delegate:(id)arg4 cancelBtnTitle:(id)arg5 otherBtnTitle:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

