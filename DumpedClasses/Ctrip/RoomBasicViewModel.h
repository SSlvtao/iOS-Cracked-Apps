//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString;

@interface RoomBasicViewModel : CTViewModel
{
    _Bool _hasInfo;
    NSString *_itemTitle;
    NSString *_itemValue;
    NSString *_additionalInfo;
}

@property(copy, nonatomic) NSString *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(copy, nonatomic) NSString *itemValue; // @synthesize itemValue=_itemValue;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(nonatomic) _Bool hasInfo; // @synthesize hasInfo=_hasInfo;
- (void).cxx_destruct;
- (id)init;

@end
