//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXUtility : NSObject
{
}

+ (void)customMonitorInfo:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)returnKeyType:(long long)arg1;
+ (unsigned long long)getSubStringNumber:(id)arg1 subString:(id)arg2;
+ (id)timeToString:(id)arg1;
+ (id)dateToString:(id)arg1;
+ (id)timeStringToDate:(id)arg1;
+ (id)dateStringToDate:(id)arg1;
+ (id)uuidString;
+ (id)md5:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)urlByDeletingParameters:(id)arg1;
+ (_Bool)notStat;
+ (void)setNotStat:(_Bool)arg1;
+ (void)delete:(id)arg1;
+ (id)load:(id)arg1;
+ (void)save:(id)arg1 data:(id)arg2;
+ (id)getKeychainQuery:(id)arg1;
+ (id)getDeviceID;
+ (double)defaultPixelScaleFactor;
+ (struct CGSize)portraitScreenSize;
+ (id)registeredDeviceName;
+ (id)deviceName;
+ (id)globalCache;
+ (id)libraryDirectory;
+ (id)cacheDirectory;
+ (id)documentDirectory;
+ (_Bool)isFileExist:(id)arg1;
+ (void)getIconfont:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)fontWithSize:(double)arg1 textWeight:(double)arg2 textStyle:(unsigned long long)arg3 fontFamily:(id)arg4 scaleFactor:(double)arg5;
+ (id)fontWithSize:(double)arg1 textWeight:(double)arg2 textStyle:(unsigned long long)arg3 fontFamily:(id)arg4 scaleFactor:(double)arg5 useCoreText:(_Bool)arg6;
+ (id)fontWithSize:(double)arg1 textWeight:(double)arg2 textStyle:(unsigned long long)arg3 fontFamily:(id)arg4;
+ (id)gradientLayerFromColors:(id)arg1 locations:(id)arg2 frame:(struct CGRect)arg3 gradientType:(long long)arg4;
+ (id)linearGradientWithBackgroundImage:(id)arg1;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (_Bool)isBlankString:(id)arg1;
+ (id)copyJSONObject:(id)arg1;
+ (id)JSONString:(id)arg1;
+ (id)JSONObject:(id)arg1 error:(id *)arg2;
+ (id)objectFromJSON:(id)arg1;
+ (id)userAgent;
+ (id)getDebugEnvironment;
+ (id)getEnvironment;
+ (void)_performBlock:(CDUnknownBlockType)arg1;
+ (void)performBlock:(CDUnknownBlockType)arg1 onThread:(id)arg2;

@end

