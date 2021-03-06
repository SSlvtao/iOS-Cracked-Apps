//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CTTourSearchPosition, NSArray;

@interface CTTourSearchModel : NSObject <NSCoding, NSCopying>
{
    _Bool _UseGroupFilter;
    NSArray *_Tabs;
    NSArray *_Filters;
    NSArray *_RecommendProducts;
    NSArray *_Products;
    NSArray *_AggregateProducts;
    long long _PageIndex;
    long long _TotalCount;
    long long _GotoTab;
    CTTourSearchPosition *_CurrentPoi;
    long long _UserGroup;
    NSArray *_PoiPath;
    NSArray *_ParentPath;
    NSArray *_NameValuePairs;
    NSArray *_PreferFilters;
    NSArray *_ValidFilters;
}

+ (id)modelCustomPropertyMapper;
+ (id)modelPropertyBlacklist;
+ (id)modelContainerPropertyGenericClass;
@property(retain) NSArray *ValidFilters; // @synthesize ValidFilters=_ValidFilters;
@property(retain) NSArray *PreferFilters; // @synthesize PreferFilters=_PreferFilters;
@property(retain) NSArray *NameValuePairs; // @synthesize NameValuePairs=_NameValuePairs;
@property _Bool UseGroupFilter; // @synthesize UseGroupFilter=_UseGroupFilter;
@property(retain) NSArray *ParentPath; // @synthesize ParentPath=_ParentPath;
@property(retain) NSArray *PoiPath; // @synthesize PoiPath=_PoiPath;
@property long long UserGroup; // @synthesize UserGroup=_UserGroup;
@property(retain, nonatomic) CTTourSearchPosition *CurrentPoi; // @synthesize CurrentPoi=_CurrentPoi;
@property long long GotoTab; // @synthesize GotoTab=_GotoTab;
@property long long TotalCount; // @synthesize TotalCount=_TotalCount;
@property long long PageIndex; // @synthesize PageIndex=_PageIndex;
@property(retain) NSArray *AggregateProducts; // @synthesize AggregateProducts=_AggregateProducts;
@property(retain) NSArray *Products; // @synthesize Products=_Products;
@property(retain) NSArray *RecommendProducts; // @synthesize RecommendProducts=_RecommendProducts;
@property(retain) NSArray *Filters; // @synthesize Filters=_Filters;
@property(retain) NSArray *Tabs; // @synthesize Tabs=_Tabs;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

