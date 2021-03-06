//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "NSCoding.h"

@class NSMutableArray<HLTabListItemModel>, NSString;

@interface HLBaseDataModel : TBJSONModel <NSCoding>
{
    NSString *_hotUrl;
    NSString *_findUrl;
    NSMutableArray<HLTabListItemModel> *_subscribedList;
    NSMutableArray<HLTabListItemModel> *_unScribedList;
}

@property(retain, nonatomic) NSMutableArray<HLTabListItemModel> *unScribedList; // @synthesize unScribedList=_unScribedList;
@property(retain, nonatomic) NSMutableArray<HLTabListItemModel> *subscribedList; // @synthesize subscribedList=_subscribedList;
@property(copy, nonatomic) NSString *findUrl; // @synthesize findUrl=_findUrl;
@property(retain, nonatomic) NSString *hotUrl; // @synthesize hotUrl=_hotUrl;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

