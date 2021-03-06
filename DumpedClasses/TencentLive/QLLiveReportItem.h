//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLMovieCoreReportItemsProtocal.h"

@class NSString;

@interface QLLiveReportItem : NSObject <QLMovieCoreReportItemsProtocal>
{
    NSString *_feedid;
    NSString *_feedUserid;
    NSString *_buttonType;
    NSString *_feedType;
    NSString *_chatType;
}

@property(retain, nonatomic) NSString *chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSString *feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) NSString *buttonType; // @synthesize buttonType=_buttonType;
@property(retain, nonatomic) NSString *feedUserid; // @synthesize feedUserid=_feedUserid;
@property(retain, nonatomic) NSString *feedid; // @synthesize feedid=_feedid;
- (void).cxx_destruct;
- (id)movieCoreReportCGIItems;
- (id)movieCoreReportItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

