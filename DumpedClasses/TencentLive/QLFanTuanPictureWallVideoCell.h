//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "QLPlayerViewScrollMgrProtocol.h"

@class NSString, QLJCEVideoImage, QLVideoPlayerView;

@interface QLFanTuanPictureWallVideoCell : UICollectionViewCell <QLPlayerViewScrollMgrProtocol>
{
    QLVideoPlayerView *_playerView;
    QLJCEVideoImage *_videoImage;
}

@property(retain, nonatomic) QLJCEVideoImage *videoImage; // @synthesize videoImage=_videoImage;
@property(retain, nonatomic) QLVideoPlayerView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (id)getVideoView;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

