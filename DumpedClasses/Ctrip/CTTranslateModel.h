//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTranslateLanguagesModel, NSDictionary, Reachability;

@interface CTTranslateModel : NSObject
{
    Reachability *_hostReachability;
    CTTranslateLanguagesModel *_languageModel;
    NSDictionary *_translateBaiduLanguageDic;
    NSDictionary *_translateLanguageDic;
}

+ (void)translateImage:(id)arg1 catchImageFrame:(struct CGRect)arg2 sourceLanguageIndex:(long long)arg3 destLanguageIndex:(long long)arg4 isFromPhoto:(_Bool)arg5 resultBlock:(CDUnknownBlockType)arg6;
+ (void)translateText:(id)arg1 sourceLanguage:(id)arg2 destLanguage:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
+ (void)translateText:(id)arg1 sourceLanguageIndex:(long long)arg2 destLanguageIndex:(long long)arg3 resultBlock:(CDUnknownBlockType)arg4;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *translateLanguageDic; // @synthesize translateLanguageDic=_translateLanguageDic;
@property(retain, nonatomic) NSDictionary *translateBaiduLanguageDic; // @synthesize translateBaiduLanguageDic=_translateBaiduLanguageDic;
@property(retain, nonatomic) CTTranslateLanguagesModel *languageModel; // @synthesize languageModel=_languageModel;
@property(retain, nonatomic) Reachability *hostReachability; // @synthesize hostReachability=_hostReachability;
- (void).cxx_destruct;
- (id)getGrayImage:(id)arg1;
- (id)image:(id)arg1 rotation:(long long)arg2;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (id)image:(id)arg1 clipImageInRect:(struct CGRect)arg2;
- (id)init;

@end
