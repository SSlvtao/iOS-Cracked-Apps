//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TADiABItem.h"

@class NSIndexPath, UITableView, UIView;

@interface TADiABFocusItem : TADiABItem
{
    UITableView *_tableView;
    NSIndexPath *_indexPath;
    UIView *_firtstCell;
}

+ (id)itemWithView:(id)arg1 ParentView:(id)arg2 AdItem:(id)arg3 TableView:(id)arg4 CellView:(id)arg5 IndexPath:(id)arg6;
@property(nonatomic) __weak UIView *firtstCell; // @synthesize firtstCell=_firtstCell;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (float)percentageOfView:(id)arg1 ShownInParentView:(id)arg2;
- (float)percentageShownInScreen;
- (id)initWithView:(id)arg1 ParentView:(id)arg2 AdItem:(id)arg3 TableView:(id)arg4 CellView:(id)arg5 IndexPath:(id)arg6;

@end

