//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HLGuideViewProtocol.h"

@class NSString;

@interface HLGuideViewAdapter : NSObject <HLGuideViewProtocol>
{
    id <HLGuideViewProtocol> _guideViewService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <HLGuideViewProtocol> guideViewService; // @synthesize guideViewService=_guideViewService;
- (void).cxx_destruct;
- (void)saveGuideViewState;
- (void)showGuideView:(_Bool)arg1;
- (_Bool)shouldShowGuideView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

