//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ShadowInfoTypeModel : CTBusinessBean
{
    int _shadowID;
    NSString *_shadowCtx;
}

@property(copy, nonatomic) NSString *shadowCtx; // @synthesize shadowCtx=_shadowCtx;
@property(nonatomic) int shadowID; // @synthesize shadowID=_shadowID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
