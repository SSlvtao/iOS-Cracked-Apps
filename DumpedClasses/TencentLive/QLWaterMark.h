//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLWaterMarkProtocol.h"

@class NSString, QLWaterMarkInfo;

@interface QLWaterMark : UIView <QLWaterMarkProtocol>
{
    QLWaterMarkInfo *_waterMarkInfo;
}

@property(retain, nonatomic) QLWaterMarkInfo *waterMarkInfo; // @synthesize waterMarkInfo=_waterMarkInfo;
- (void).cxx_destruct;
- (void)showAnimation;
- (id)waterMark;
- (_Bool)clickAble;
- (struct CGRect)waterMarkPosition;
- (id)initWithWaterMarkInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

