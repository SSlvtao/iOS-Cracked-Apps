//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class NSString;

@interface QQPluginFeedCount : QQGroupPropertyModel
{
    int _pluginID;
    int _relevantFeedCount;
    int _irrelevantFeedCount;
    _Bool _showInTab;
    NSString *_tipsText;
    NSString *_tipsIconUrl;
}

- (id)init;

// Remaining properties
@property(nonatomic) int irrelevantFeedCount; // @dynamic irrelevantFeedCount;
@property(nonatomic) int pluginID; // @dynamic pluginID;
@property(nonatomic) int relevantFeedCount; // @dynamic relevantFeedCount;
@property(nonatomic) _Bool showInTab; // @dynamic showInTab;
@property(retain, nonatomic) NSString *tipsIconUrl; // @dynamic tipsIconUrl;
@property(retain, nonatomic) NSString *tipsText; // @dynamic tipsText;

@end

