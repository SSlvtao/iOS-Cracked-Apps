//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface TMNoviceGuide : NSObject <NSCoding>
{
    _Bool _isDisplayed;
    int direction;
    int type;
    id object;
}

@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) int direction; // @synthesize direction;
@property(nonatomic) id object; // @synthesize object;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

