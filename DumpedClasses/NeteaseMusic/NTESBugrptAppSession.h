//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTESBugrptDataBaseModel.h"

@class NSArray, NSString;

@interface NTESBugrptAppSession : NTESBugrptDataBaseModel
{
    NSString *_sessionId;
    NSArray *_events;
}

@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)description;

@end

