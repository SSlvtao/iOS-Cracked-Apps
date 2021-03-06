//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBDViewGenerator : NSObject
{
}

+ (id)defaultDViewGenerator;
- (id)generateViewItemWithTemplateItem:(id)arg1 templateDict:(id)arg2 dataDict:(id)arg3;
- (id)generateViewItemWithTemplateItem:(id)arg1 dataDict:(id)arg2 needDownloadTemplate:(_Bool *)arg3 viewItemUpdateBlock:(CDUnknownBlockType)arg4;
- (id)generateViewItemWithTemplateItem:(id)arg1 dataDict:(id)arg2 needDownloadTemplate:(_Bool *)arg3 templateDownloadComplete:(CDUnknownBlockType)arg4;
- (id)generateViewItemWithTemplateItem:(id)arg1 dataDict:(id)arg2;
- (_Bool)needUpdateTemplateWithViewItem:(id)arg1 templateItem:(id)arg2;
- (_Bool)canGenerateViewItemWithTemplateItem:(id)arg1 needDownloadTemplate:(_Bool *)arg2 templateDownloadComplete:(CDUnknownBlockType)arg3;
- (void)registerDefaultDataParser;
- (void)registerDefaultViewConstructors;
- (id)init;

@end

