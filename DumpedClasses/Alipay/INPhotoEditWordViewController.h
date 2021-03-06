//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class INPhotoEditContext, INPhotoEditTextField, INPhotoTextConfig, UIButton, UIImage, UIView;

@interface INPhotoEditWordViewController : UIViewController
{
    id <INPhotoEditWordViewControllerDelegate> _delegate;
    INPhotoTextConfig *_photoTextConfig;
    UIImage *_originImage;
    INPhotoEditContext *_editContext;
    INPhotoEditTextField *_textfield;
    UIButton *_selectColorBtn;
    UIView *_colorSelectBackView;
}

+ (id)inColorWithHexString:(id)arg1;
@property(retain, nonatomic) UIView *colorSelectBackView; // @synthesize colorSelectBackView=_colorSelectBackView;
@property(retain, nonatomic) UIButton *selectColorBtn; // @synthesize selectColorBtn=_selectColorBtn;
@property(retain, nonatomic) INPhotoEditTextField *textfield; // @synthesize textfield=_textfield;
@property(nonatomic) __weak INPhotoEditContext *editContext; // @synthesize editContext=_editContext;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(retain, nonatomic) INPhotoTextConfig *photoTextConfig; // @synthesize photoTextConfig=_photoTextConfig;
@property(nonatomic) __weak id <INPhotoEditWordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)colorSelect:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)bottomTabViewInit;
- (void)tapGestureRecognizer:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

