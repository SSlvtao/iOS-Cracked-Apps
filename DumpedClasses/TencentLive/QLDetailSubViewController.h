//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

@class NSString, QLNewMovieDetailViewController;

@interface QLDetailSubViewController : QLBaseTableViewController
{
    QLNewMovieDetailViewController *_detailCtl;
    NSString *_ctlTitle;
}

@property(copy, nonatomic) NSString *ctlTitle; // @synthesize ctlTitle=_ctlTitle;
@property(nonatomic) __weak QLNewMovieDetailViewController *detailCtl; // @synthesize detailCtl=_detailCtl;
- (void).cxx_destruct;
- (id)pageDescription;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

