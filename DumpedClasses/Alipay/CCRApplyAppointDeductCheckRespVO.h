//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRBaseRespVO.h"

@class CCRLinkInfo, NSString;

@interface CCRApplyAppointDeductCheckRespVO : CCRBaseRespVO
{
    NSString *_availableQuota;
    CCRLinkInfo *_ruleLink;
}

@property(retain, nonatomic) CCRLinkInfo *ruleLink; // @synthesize ruleLink=_ruleLink;
@property(retain, nonatomic) NSString *availableQuota; // @synthesize availableQuota=_availableQuota;
- (void).cxx_destruct;

@end

