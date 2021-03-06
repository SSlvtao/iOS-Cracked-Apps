//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Ant3DSource.h"

#import "Ant3DViewUpdateListener.h"

@class Ant3DView, NSString;

@interface Ant3DSceneSource : Ant3DSource <Ant3DViewUpdateListener>
{
    Ant3DView *_scene;
    _Bool _started;
}

- (void).cxx_destruct;
- (void)viewDidUpdated:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWith3DView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

