//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, QLJCEMiniProgramInfo, QLMovieItem, UIImage, UIViewController;

@protocol QLShareDataSource <NSObject>
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;

@optional
@property(readonly, nonatomic) NSData *shareOriImgData;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSubTitle;
- (NSString *)shareContentTail:(unsigned long long)arg1;
@end

