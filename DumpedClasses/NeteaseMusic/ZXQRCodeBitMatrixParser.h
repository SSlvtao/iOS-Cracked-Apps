//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZXBitMatrix, ZXQRCodeFormatInformation, ZXQRCodeVersion;

@interface ZXQRCodeBitMatrixParser : NSObject
{
    _Bool _shouldMirror;
    ZXBitMatrix *_bitMatrix;
    ZXQRCodeFormatInformation *_parsedFormatInfo;
    ZXQRCodeVersion *_parsedVersion;
}

@property(retain, nonatomic) ZXQRCodeVersion *parsedVersion; // @synthesize parsedVersion=_parsedVersion;
@property(retain, nonatomic) ZXQRCodeFormatInformation *parsedFormatInfo; // @synthesize parsedFormatInfo=_parsedFormatInfo;
@property(nonatomic) _Bool shouldMirror; // @synthesize shouldMirror=_shouldMirror;
@property(readonly, nonatomic) ZXBitMatrix *bitMatrix; // @synthesize bitMatrix=_bitMatrix;
- (void).cxx_destruct;
- (void)mirror;
- (void)setMirror:(_Bool)arg1;
- (void)remask;
- (id)readCodewordsWithError:(id *)arg1;
- (int)copyBit:(int)arg1 j:(int)arg2 versionBits:(int)arg3;
- (id)readVersionWithError:(id *)arg1;
- (id)readFormatInformationWithError:(id *)arg1;
- (id)initWithBitMatrix:(id)arg1 error:(id *)arg2;

@end
