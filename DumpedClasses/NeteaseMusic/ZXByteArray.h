//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZXByteArray : NSObject
{
    unsigned int _length;
    char *_array;
}

@property(readonly, nonatomic) unsigned int length; // @synthesize length=_length;
@property(readonly, nonatomic) char *array; // @synthesize array=_array;
- (id)description;
- (void)dealloc;
- (id)initWithBytes:(BOOL)arg1;
- (id)initWithLength:(unsigned int)arg1;

@end

