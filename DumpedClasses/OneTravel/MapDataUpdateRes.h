//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSArray, NSMutableArray, NSString;

@interface MapDataUpdateRes : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasRet_:1;
    unsigned int hasMsg_:1;
    int ret;
    NSString *msg;
    NSMutableArray *updateUrlsArray;
    NSMutableArray *updateFilesArray;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) NSMutableArray *updateFilesArray; // @synthesize updateFilesArray;
@property(retain) NSMutableArray *updateUrlsArray; // @synthesize updateUrlsArray;
@property(retain) NSString *msg; // @synthesize msg;
@property int ret; // @synthesize ret;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)updateFilesAtIndex:(unsigned long long)arg1;
@property(readonly) NSArray *updateFiles; // @dynamic updateFiles;
- (id)updateUrlsAtIndex:(unsigned long long)arg1;
@property(readonly) NSArray *updateUrls; // @dynamic updateUrls;
- (id)defaultInstance;
- (id)init;
- (void)setHasMsg:(_Bool)arg1;
- (_Bool)hasMsg;
- (void)setHasRet:(_Bool)arg1;
- (_Bool)hasRet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

