//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TADUtility : NSObject
{
}

+ (id)defaultSplashImage;
+ (id)tad_getIPAdress;
+ (id)tad_osversion;
+ (id)tad_appShortVersion;
+ (id)tad_appBundleName;
+ (id)filterReapeatCookies:(id)arg1 inDomain:(id)arg2;
+ (id)arrayForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)numberForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)stringForKey:(id)arg1 inDictionary:(id)arg2;
+ (double)doubleForKey:(id)arg1 inDictionary:(id)arg2;
+ (long long)integerForKey:(id)arg1 inDictionary:(id)arg2;
+ (double)floatForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)dictionary:(id)arg1 safeGetStringForKey:(id)arg2;
+ (void)dictionary:(id)arg1 safeSetObject:(id)arg2 forKey:(id)arg3;
+ (id)truncateWithChineseCharacterCount:(long long)arg1 fromString:(id)arg2 withTail:(_Bool)arg3;
+ (id)composeURLQueryForDictionary:(id)arg1;
+ (id)composeQueryForDictionary:(id)arg1;
+ (id)parseURLQuery:(id)arg1 withParameterDecoded:(_Bool)arg2;
+ (id)screenHeight;
+ (id)screenWidth;
+ (id)uuid;
+ (id)replaceHttpSchemeToHTTPS:(id)arg1;
+ (_Bool)useSFSafariViewControllerToOpenLandingView;

@end

