//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface APMidasReporter : NSObject
{
    NSMutableArray *datalist;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableArray *datalist; // @synthesize datalist;
- (void).cxx_destruct;
- (id)getReportData:(id)arg1;
- (void)callDataReportCgi:(id)arg1;
- (void)doReport;
- (id)getLogRecord:(id)arg1;
- (void)insertData:(id)arg1 withSAction:(id)arg2 withSToken:(id)arg3 Extends:(id)arg4;
- (void)doOneReport:(id)arg1 withSAction:(id)arg2 Extends:(id)arg3;
- (id)buildCommonDataBody:(id)arg1 withSType:(id)arg2 withSAction:(id)arg3 withSToken:(id)arg4 Extends:(id)arg5;
- (void)releaseInstance;

@end

