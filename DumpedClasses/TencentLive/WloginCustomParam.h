//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WloginCustomParam : NSObject
{
    NSString *account;
    unsigned int dwAppid;
    unsigned int dwSubAppid;
    NSArray *otherAppidList;
    unsigned int dwBitmap;
    id loginDelegate;
}

@property(retain) id loginDelegate; // @synthesize loginDelegate;
@property unsigned int dwBitmap; // @synthesize dwBitmap;
@property(retain) NSArray *otherAppidList; // @synthesize otherAppidList;
@property unsigned int dwSubAppid; // @synthesize dwSubAppid;
@property unsigned int dwAppid; // @synthesize dwAppid;
@property(retain) NSString *account; // @synthesize account;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

