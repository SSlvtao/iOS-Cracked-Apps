//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface LBDebugConsoleInfoDisplayView : UIView
{
    NSMutableArray *_consoleInfos;
    float _maxValuePoint;
    float _offset;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawKeyPoint:(struct CGPoint)arg1;
- (void)drawLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)setDebugInfoArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

