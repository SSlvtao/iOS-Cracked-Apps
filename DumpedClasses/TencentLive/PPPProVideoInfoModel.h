//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPPBaseDataModel.h"

#import "NSCopying.h"

@class NSString;

@interface PPPProVideoInfoModel : PPPBaseDataModel <NSCopying>
{
    int playStatus;
    int isJumpMovieStart;
    int isPlayAds;
    NSString *cid;
    NSString *lid;
    NSString *pid;
    NSString *vid;
    long long allTime;
    long long offset;
    NSString *clarity;
}

@property int isPlayAds; // @synthesize isPlayAds;
@property int isJumpMovieStart; // @synthesize isJumpMovieStart;
@property int playStatus; // @synthesize playStatus;
@property(retain, nonatomic) NSString *clarity; // @synthesize clarity;
@property long long offset; // @synthesize offset;
@property long long allTime; // @synthesize allTime;
@property(retain, nonatomic) NSString *vid; // @synthesize vid;
@property(retain, nonatomic) NSString *pid; // @synthesize pid;
@property(retain, nonatomic) NSString *lid; // @synthesize lid;
@property(retain, nonatomic) NSString *cid; // @synthesize cid;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

