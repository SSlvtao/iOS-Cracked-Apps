//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EZCreater : NSObject
{
}

+ (id)createSphereWithRadius:(float)arg1 longitudeFov:(float)arg2 latitudeFov:(float)arg3 longitudeStep:(int)arg4 latitudeStep:(int)arg5 s1:(float)arg6 t1:(float)arg7 s2:(float)arg8 t2:(float)arg9;
+ (id)createSphereWithRadius:(float)arg1 longitudeFov:(float)arg2 latitudeFov:(float)arg3 longitudeStep:(int)arg4 latitudeStep:(int)arg5;
+ (id)createSphereWithRadius:(float)arg1;
+ (id)createRectangleWithWidth:(float)arg1 height:(float)arg2 s0:(float)arg3 t0:(float)arg4 s1:(float)arg5 t1:(float)arg6 s2:(float)arg7 t2:(float)arg8 s3:(float)arg9 t3:(float)arg10;
+ (id)createRectangleWithX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4 s1:(float)arg5 t1:(float)arg6 s2:(float)arg7 t2:(float)arg8;
+ (id)createRectangleWithWidth:(float)arg1 height:(float)arg2;
+ (id)createTextureWithHandler:(int)arg1 target:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
+ (id)createBareMaterial;
+ (id)createMaterialWithFilePath:(id)arg1;
+ (id)createEntityWithFilePath:(id)arg1;
+ (id)createEntityWithName:(id)arg1;
+ (id)createCameraWithZoomX:(float)arg1 zoomY:(float)arg2 aspectRatio:(float)arg3 nearPlane:(float)arg4 farPlane:(float)arg5;
+ (id)createCameraWithFieldOfView:(float)arg1 aspectRatio:(float)arg2 nearPlane:(float)arg3 farPlane:(float)arg4;
+ (id)createSceneWithFilePath:(id)arg1;
+ (id)createSceneWithName:(id)arg1;
+ (id)EZEngnieWithInternalPath:(id)arg1;

@end

