//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CTFlightPopInfoViewCellModel : NSObject
{
    _Bool _canFold;
    _Bool _isFoldOpen;
    _Bool _showImageWithBlankContent;
    long long _cellIndex;
    long long _areaType;
    NSMutableArray *_contentList;
    NSMutableArray *_contentTypeList;
}

@property(nonatomic) _Bool showImageWithBlankContent; // @synthesize showImageWithBlankContent=_showImageWithBlankContent;
@property(nonatomic) _Bool isFoldOpen; // @synthesize isFoldOpen=_isFoldOpen;
@property(nonatomic) _Bool canFold; // @synthesize canFold=_canFold;
@property(retain, nonatomic) NSMutableArray *contentTypeList; // @synthesize contentTypeList=_contentTypeList;
@property(retain, nonatomic) NSMutableArray *contentList; // @synthesize contentList=_contentList;
@property(nonatomic) long long areaType; // @synthesize areaType=_areaType;
@property(nonatomic) long long cellIndex; // @synthesize cellIndex=_cellIndex;
- (void).cxx_destruct;
- (id)init;

@end

