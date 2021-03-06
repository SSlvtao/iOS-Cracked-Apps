//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBARDancingFileService : NSObject
{
}

+ (_Bool)createDirectory:(id)arg1;
+ (_Bool)isFilePath:(id)arg1 equalToMd5:(id)arg2;
+ (id)randomResourceWithExtension:(id)arg1 InDirectory:(id)arg2;
+ (void)unzipFileWithZipPathAsync:(id)arg1 unzipPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (void)unzipSuccessAsync:(_Bool)arg1 url:(id)arg2 md5:(id)arg3 tempZipPath:(id)arg4 unzipPath:(id)arg5 start:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7 remainTimes:(int)arg8 tryTimes:(int)arg9;
+ (void)downloadAndUnzipWithUrlAsync:(id)arg1 md5:(id)arg2 tempZipPath:(id)arg3 unzipPath:(id)arg4 start:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6 remainTimes:(int)arg7 tryTimes:(int)arg8;
+ (void)prepareRemoteResourceAndUnzipWithUrlAsync:(id)arg1 md5:(id)arg2 tempZipPath:(id)arg3 unzipPath:(id)arg4 start:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6 remainTimes:(int)arg7 tryTimes:(int)arg8;

@end

