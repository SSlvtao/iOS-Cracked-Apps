//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTAnimationView, NSString;

@interface QLLOTAniViewHelper : NSObject
{
    LOTAnimationView *_lotView;
    _Bool _playedInCurrentAppLife;
    id <QLLOTAniViewHelperDelegate> _delegate;
    NSString *_resourceUrl;
}

+ (_Bool)checkAnimationOutRangeWithMaxPlayLimit:(unsigned long long)arg1 withResourceUrl:(id)arg2;
@property(retain, nonatomic) LOTAnimationView *lotView; // @synthesize lotView=_lotView;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(nonatomic) __weak id <QLLOTAniViewHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool playedInCurrentAppLife; // @synthesize playedInCurrentAppLife=_playedInCurrentAppLife;
- (void).cxx_destruct;
- (_Bool)isPlayingAnimation;
- (void)resetAnimation;
- (void)playWithCompletion:(CDUnknownBlockType)arg1;
- (void)playAnimation;
- (void)pauseAnimation;
- (void)setRepeatCount:(unsigned long long)arg1;
- (id)loadAnimationForHostView:(id)arg1 withJsonPath:(id)arg2;
- (void)loadJsonResource;
- (id)initWithResourceUrl:(id)arg1;

@end

