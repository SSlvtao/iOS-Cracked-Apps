//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PPChatMessage, PPChatMessageBoxView, UITableViewCell;

@interface PPChatMessageBaseView : UIView
{
    PPChatMessage *_message;
    PPChatMessageBoxView *_boxView;
    UITableViewCell *_belongCell;
}

+ (double)heightForData:(id)arg1 ofMessage:(id)arg2;
@property(nonatomic) __weak UITableViewCell *belongCell; // @synthesize belongCell=_belongCell;
@property(retain, nonatomic) PPChatMessageBoxView *boxView; // @synthesize boxView=_boxView;
@property(retain, nonatomic) PPChatMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
