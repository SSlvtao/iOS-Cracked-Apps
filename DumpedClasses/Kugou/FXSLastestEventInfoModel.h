//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSArray<FXSLastestEventInfo>;

@interface FXSLastestEventInfoModel : FXBaseJSONModel
{
    NSArray<FXSLastestEventInfo> *_currentList;
    NSArray<FXSLastestEventInfo> *_thirtyList;
    NSArray<FXSLastestEventInfo> *_rankVOList;
    long long _starValue;
}

@property(nonatomic) long long starValue; // @synthesize starValue=_starValue;
@property(retain, nonatomic) NSArray<FXSLastestEventInfo> *rankVOList; // @synthesize rankVOList=_rankVOList;
@property(retain, nonatomic) NSArray<FXSLastestEventInfo> *thirtyList; // @synthesize thirtyList=_thirtyList;
@property(retain, nonatomic) NSArray<FXSLastestEventInfo> *currentList; // @synthesize currentList=_currentList;
- (void).cxx_destruct;

@end

