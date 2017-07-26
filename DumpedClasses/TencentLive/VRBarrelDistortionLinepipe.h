//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VRDirector, VRrenderingcache;

@interface VRBarrelDistortionLinepipe : NSObject
{
    int NUMBER_OF_SLICES;
    _Bool inited;
    float *vertices;
    float *textures;
    float *texturesLeft;
    float *texturesRight;
    short *indices;
    int mIndicesNum;
    unsigned long long vCount;
    unsigned long long tCount;
    unsigned int programHandle;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int _transformUniform;
    unsigned int _mvmatrixUniform;
    unsigned int _textureUinform2D;
    unsigned int _colorRenderBuffer;
    unsigned int _frameBuffer;
    int mOriginalRenderBufferId;
    int mOriginalFrameBufferId;
    int mVRMODE;
    int angle;
    int mScreenWidth;
    int mScreenHeight;
    float fovy;
    float aspectRatio;
    unsigned char isSetup;
    unsigned char isT;
    int _backingWidth;
    int _backingHeight;
    VRDirector *mDirector;
    VRrenderingcache *mDrawingCache;
    unsigned char _isEnableDis;
}

@property(nonatomic) unsigned char isEnableDis; // @synthesize isEnableDis=_isEnableDis;
- (void).cxx_destruct;
- (void)checkError:(id)arg1 outPut:(_Bool)arg2;
- (void)checkError:(id)arg1;
- (void)barrelDistortion:(double)arg1 andB:(double)arg2 andC:(double)arg3 andPt:(struct VRPointF *)arg4;
- (void)applyBarrelDistortion:(int)arg1 andVertex:(float *)arg2;
- (void)generateMesh;
- (void)draw:(int)arg1;
- (void)commit;
- (float *)getTex:(int)arg1;
- (void)takeover:(int)arg1 andHeight:(int)arg2 andType:(int)arg3;
- (void)setupBuffers:(id)arg1 layer:(id)arg2;
- (void)setup;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)initShader;
- (id)init;

@end

