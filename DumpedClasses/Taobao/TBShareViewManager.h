//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBShareView;

@interface TBShareViewManager : NSObject
{
    TBShareView *_shareView;
    id <TBShareViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TBShareViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBShareView *shareView; // @synthesize shareView=_shareView;
- (void).cxx_destruct;
- (void)showView;
- (void)update;
- (id)init;

@end

