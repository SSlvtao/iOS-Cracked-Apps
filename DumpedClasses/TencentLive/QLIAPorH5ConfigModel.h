//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLOnlineConfigBaseModel.h"

@class NSDictionary;

@interface QLIAPorH5ConfigModel : QLOnlineConfigBaseModel
{
    NSDictionary *_dicConfig;
}

@property(retain) NSDictionary *dicConfig; // @synthesize dicConfig=_dicConfig;
- (void).cxx_destruct;
- (_Bool)getBoolValueForKey:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)refreshModel;

@end

