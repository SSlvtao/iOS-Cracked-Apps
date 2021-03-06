//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class NSMutableArray;

@interface KTVUserSpaceAlbumVM : KFViewModelObject
{
    long long _userId;
    long long _total;
    unsigned long long _page;
    NSMutableArray *_albums;
    long long _modifyTime;
}

@property(nonatomic) long long modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSMutableArray *albums; // @synthesize albums=_albums;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)deleteAlbumWithIndex:(unsigned long long)arg1;
- (void)addOldAlbum:(id)arg1;
- (void)addAlbum:(id)arg1;
- (id)imageWithIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfImage;
- (void)reload;
- (void)loadMore;
- (void)update;
- (id)init;

@end

