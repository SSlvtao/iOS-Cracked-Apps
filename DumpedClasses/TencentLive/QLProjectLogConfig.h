//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "P_QNBLogConfig.h"

@class NSString;

@interface QLProjectLogConfig : NSObject <P_QNBLogConfig>
{
}

- (void)doNBLog:(unsigned long long)arg1 fileName:(const char *)arg2 line:(unsigned int)arg3 message:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

