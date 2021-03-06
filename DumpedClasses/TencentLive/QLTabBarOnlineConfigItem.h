//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface QLTabBarOnlineConfigItem : NSObject
{
    unsigned long long _pageType;
    NSString *_tabName;
    NSString *_selImgUrl;
    NSString *_unSelImgUrl;
    long long _requestType;
    NSString *_dataKey;
    UIImage *_selImg;
    UIImage *_unSelImg;
}

+ (id)defaultItemWithType:(unsigned long long)arg1;
+ (id)itemWithPageType:(unsigned long long)arg1 tabName:(id)arg2 requestType:(long long)arg3 dataKey:(id)arg4 selImg:(id)arg5 unselImg:(id)arg6;
+ (id)itemWithJceObj:(id)arg1;
@property(retain, nonatomic) UIImage *unSelImg; // @synthesize unSelImg=_unSelImg;
@property(retain, nonatomic) UIImage *selImg; // @synthesize selImg=_selImg;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *unSelImgUrl; // @synthesize unSelImgUrl=_unSelImgUrl;
@property(copy, nonatomic) NSString *selImgUrl; // @synthesize selImgUrl=_selImgUrl;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;
- (_Bool)isValidItem;
- (_Bool)isValidPageType:(unsigned long long)arg1;
- (id)description;

@end

