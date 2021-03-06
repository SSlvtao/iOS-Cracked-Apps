//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMLocationDO, NSArray, NSMutableArray, NSMutableDictionary;

@interface FMLocationViewDO : NSObject
{
    NSArray *_hotLocations;
    int _selectedStatus;
    unsigned long long _hotSelectedIndex;
    int _style;
    FMLocationDO *_locationDetail;
    _Bool _selectCityEnd;
    _Bool _globalNational;
    unsigned long long _level;
    NSMutableDictionary *_citiesLevel;
    NSMutableArray *_selectCities;
}

@property(nonatomic) _Bool globalNational; // @synthesize globalNational=_globalNational;
@property(nonatomic) _Bool selectCityEnd; // @synthesize selectCityEnd=_selectCityEnd;
@property(retain, nonatomic) NSMutableArray *selectCities; // @synthesize selectCities=_selectCities;
@property(retain, nonatomic) NSMutableDictionary *citiesLevel; // @synthesize citiesLevel=_citiesLevel;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(retain, nonatomic) FMLocationDO *locationDetail; // @synthesize locationDetail=_locationDetail;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) unsigned long long hotSelectedIndex; // @synthesize hotSelectedIndex=_hotSelectedIndex;
@property(nonatomic) int selectedStatus; // @synthesize selectedStatus=_selectedStatus;
@property(retain, nonatomic) NSArray *hotLocations; // @synthesize hotLocations=_hotLocations;
- (void).cxx_destruct;
- (void)dealloc;
- (id)gpsString;
- (id)gpsString:(_Bool)arg1;
- (id)init;

@end

