//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface STTableViewSectionItem : NSObject
{
    NSString *_headerTitle;
    NSString *_footerTitle;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (id)initWithSectionHeaderTitle:(id)arg1 footerTitle:(id)arg2 items:(id)arg3;
- (id)initWithSectionTitle:(id)arg1 items:(id)arg2;

@end
