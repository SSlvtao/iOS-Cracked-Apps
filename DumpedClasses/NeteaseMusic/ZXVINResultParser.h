//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZXResultParser.h"

@interface ZXVINResultParser : ZXResultParser
{
}

+ (void)initialize;
- (id)countryCode:(id)arg1;
- (int)modelYear:(unsigned short)arg1;
- (unsigned short)checkChar:(int)arg1;
- (int)vinPositionWeight:(int)arg1;
- (int)vinCharValue:(unsigned short)arg1;
- (_Bool)checkChecksum:(id)arg1;
- (id)parse:(id)arg1;

@end
