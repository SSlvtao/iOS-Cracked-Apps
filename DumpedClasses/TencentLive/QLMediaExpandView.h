//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface QLMediaExpandView : UIButton
{
    id <QLMediaMovieViewlayerProtocol> _mainMovieViewLayerDelegate;
    long long _playerLayerId;
}

@property(nonatomic) long long playerLayerId; // @synthesize playerLayerId=_playerLayerId;
@property(nonatomic) __weak id <QLMediaMovieViewlayerProtocol> mainMovieViewLayerDelegate; // @synthesize mainMovieViewLayerDelegate=_mainMovieViewLayerDelegate;
- (void).cxx_destruct;
- (void)cleanResource;
- (_Bool)hasCurrentView;
- (void)controlMediaPlayerLayer:(long long)arg1;
- (void)operateMediaPlayerLayer:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

