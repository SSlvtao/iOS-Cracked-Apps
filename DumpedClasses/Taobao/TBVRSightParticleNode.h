//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUINode.h"

@class TBVRUIManager, VUIParticleSystemNode;

@interface TBVRSightParticleNode : VUINode
{
    TBVRUIManager *_manager;
    VUIParticleSystemNode *_eyeParticle1;
    VUIParticleSystemNode *_eyeParticle2;
    VUIParticleSystemNode *_eyeParticle3;
}

@property(retain, nonatomic) VUIParticleSystemNode *eyeParticle3; // @synthesize eyeParticle3=_eyeParticle3;
@property(retain, nonatomic) VUIParticleSystemNode *eyeParticle2; // @synthesize eyeParticle2=_eyeParticle2;
@property(retain, nonatomic) VUIParticleSystemNode *eyeParticle1; // @synthesize eyeParticle1=_eyeParticle1;
@property(nonatomic) __weak TBVRUIManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)addEyeParticle;
- (void)stepParticleAtAxis:(long long)arg1 particle:(id)arg2;
- (void)onRenderAtAxis:(long long)arg1 toParticleNode:(id)arg2;
- (void)setupParticle:(id)arg1 atAxis:(long long)arg2;
- (id)getEyeDirectionForAxis:(long long)arg1;
- (id)initWithManager:(id)arg1;

@end

