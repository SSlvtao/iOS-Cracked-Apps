//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLHomeVIPTipsObj : NSObject
{
    int _tipsType;
    NSString *_jumpURL;
    NSString *_tipsIcon;
    NSString *_tipsText;
    NSString *_tipsDate;
}

@property(copy, nonatomic) NSString *tipsDate; // @synthesize tipsDate=_tipsDate;
@property(nonatomic) int tipsType; // @synthesize tipsType=_tipsType;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(copy, nonatomic) NSString *tipsIcon; // @synthesize tipsIcon=_tipsIcon;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
- (void).cxx_destruct;

@end

