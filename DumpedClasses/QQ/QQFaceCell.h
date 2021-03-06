//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface QQFaceCell : NSObject
{
    int _state;
    struct CGRect _frame;
    UIImage *_image;
    id _data;
    UIImage *_soundIcon;
    NSString *_associateImagePath;
    int _emojiType;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *associateImagePath; // @dynamic associateImagePath;
@property(retain, nonatomic) id data; // @dynamic data;
@property(nonatomic) int emojiType; // @dynamic emojiType;
@property(nonatomic) struct CGRect frame; // @dynamic frame;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) int state; // @dynamic state;

@end

