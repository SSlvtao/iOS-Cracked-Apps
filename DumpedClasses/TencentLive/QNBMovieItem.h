//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QNBMovieItem : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_videoID;
    NSString *_coverID;
    NSString *_channelID;
    long long _columnID;
    NSString *_columnName;
    NSString *_pID;
    NSString *_weiXinPublicAccountID;
}

@property(copy, nonatomic) NSString *weiXinPublicAccountID; // @synthesize weiXinPublicAccountID=_weiXinPublicAccountID;
@property(copy, nonatomic) NSString *pID; // @synthesize pID=_pID;
@property(copy, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
@property(nonatomic) long long columnID; // @synthesize columnID=_columnID;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(copy, nonatomic) NSString *coverID; // @synthesize coverID=_coverID;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
