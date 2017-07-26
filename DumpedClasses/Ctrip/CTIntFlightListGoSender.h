//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTIntFlightListBaseSender.h"

@interface CTIntFlightListGoSender : CTIntFlightListBaseSender
{
}

+ (id)getInstance;
- (id)sendIntl90LowPriceWithCacheBean:(id)arg1 departCityCode:(id)arg2 arriveCityCode:(id)arg3;
- (id)sendSearchIntFlightListAsyncWithIntFlightListGoCacheBean:(id)arg1;
- (id)sendFlightSearchGoTripFromVoiceInquire:(id)arg1 dicParam:(id)arg2;
- (id)sendIntlFlightSearchGoTripFromUrl:(id)arg1 urlData:(id)arg2;
- (id)sendIntMultiFlightListRefreshWithCacheBean:(id)arg1;
- (id)sendIntFlightListRefreshWithIntFlightListGoCacheBean:(id)arg1;
- (id)sendMultiSearchIntFlightListMoreWithCacheBean:(id)arg1;
- (id)sendSearchIntFlightListMoreWithIntFlightListGoCacheBean:(id)arg1;
- (id)sendIntlFlightSearchGoTripWithIntFlightListGoCacheBean:(id)arg1 departCityCode:(id)arg2 arriveCityCode:(id)arg3 departDate:(id)arg4 returnDate:(id)arg5 tripType:(int)arg6 intFlightFilterModel:(id)arg7 sortType:(int)arg8 adultNumber:(int)arg9 childNumber:(int)arg10 babyNumber:(int)arg11 uuid:(id)arg12;
- (id)sendIntlFlightAdjacentWithListGoCacheBean:(id)arg1 departCity:(id)arg2 arriveCity:(id)arg3 departDate:(id)arg4 arriveDate:(id)arg5 tripType:(int)arg6 filterModel:(id)arg7 includingTax:(_Bool)arg8 adultNumber:(unsigned long long)arg9 childNumber:(unsigned long long)arg10 babyNumber:(unsigned long long)arg11 uuid:(id)arg12;

@end
