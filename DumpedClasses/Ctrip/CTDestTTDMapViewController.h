//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTDestHorizFlowViewDataSource.h"
#import "CTDestHorizFlowViewDelegate.h"
#import "CTGoogleMapViewDelegate.h"
#import "CTLocationDelegate.h"
#import "MKMapViewDelegate.h"

@class CTDestAnnotation, CTDestHorizFlowView, CTDestMapPoiInfoView, CTDestMapView, CTDestTTDMapItem, CTGoogleMapView, CTLocationClient, NSArray, NSMutableArray, NSString, UIButton, UILabel;

@interface CTDestTTDMapViewController : CTRootViewController <MKMapViewDelegate, CTLocationDelegate, CTDestHorizFlowViewDataSource, CTDestHorizFlowViewDelegate, CTGoogleMapViewDelegate>
{
    long long loadOnceToken;
    _Bool needsLoadAutomatically;
    _Bool needsZoomToUserLocation;
    _Bool googleMapZoommed;
    _Bool googleMapCenterChanged;
    _Bool _fromSearchResultList;
    _Bool _isSearchDisabled;
    _Bool _isInTravel;
    _Bool _isShowChina;
    _Bool _isTopHotel;
    _Bool _userSelected;
    _Bool _transitionFlip;
    _Bool _isInChina;
    _Bool _isGoogleMap;
    _Bool _hideNavBarWhenLeave;
    NSMutableArray *_switchBtns;
    NSArray *_multiplePoiList;
    NSArray *_schedulePoiList;
    NSArray *_defaultPOIList;
    long long _sourcePOIType;
    CTDestTTDMapItem *_currentPOIItem;
    long long _districtId;
    UIButton *_backBtn;
    NSMutableArray *_displayArray;
    CTDestAnnotation *_currentAnnotation;
    CTDestTTDMapItem *_currentGoogleItem;
    CTDestHorizFlowView *_cardFlowView;
    double _mapScaling;
    long long _mapType;
    NSString *_isFrom;
    id <CTDestTTDMapViewControllerMapDelegate> _annotationMapDelegate;
    CTDestMapView *_mapView;
    CTDestMapPoiInfoView *_poiInfoView;
    UIButton *_navButton;
    UIButton *_zoomInButton;
    UIButton *_zoomOutButton;
    UIButton *_userLocationForFinanceButton;
    CTGoogleMapView *_googleMapView;
    NSMutableArray *_scheduleArray;
    UIButton *_userLocationBtn;
    UIButton *_showSelectedPoiBtn;
    UILabel *_toastView;
    NSString *_requestToken;
    unsigned long long _mainReqeustOption;
    unsigned long long _subRequestOptions;
    unsigned long long _currentReqeustOptions;
    long long _buttonOptions;
    CTDestTTDMapItem *_currentScheduleItem;
    CTLocationClient *_locationClient;
    UIButton *_aroundSearchButton;
}

+ (void)showTicketsGroundMap:(int)arg1 parentViewController:(id)arg2;
+ (void)showDistrictMap:(long long)arg1 isInTravel:(_Bool)arg2 isInChina:(_Bool)arg3 parentViewController:(id)arg4;
+ (void)showScheduleMap:(id)arg1 withPoiList:(id)arg2 isInChina:(_Bool)arg3 isFromPage:(id)arg4 mapScaling:(double)arg5;
+ (void)showPOIMapWithMapItem:(id)arg1 isSearchDisabled:(_Bool)arg2 isInChina:(_Bool)arg3 parentViewController:(id)arg4;
+ (void)showPOIMapWithMapItem:(id)arg1 isInChina:(_Bool)arg2 parentViewController:(id)arg3;
+ (void)showPOILogCode:(long long)arg1;
+ (void)showMultiplePoiMap:(id)arg1 isInChina:(_Bool)arg2 parentViewController:(id)arg3;
+ (void)showPOIMapWithDefaultList:(id)arg1 sourcePOIType:(long long)arg2 fromSearchResultList:(_Bool)arg3 isInChina:(_Bool)arg4 parentViewController:(id)arg5;
@property(nonatomic) _Bool hideNavBarWhenLeave; // @synthesize hideNavBarWhenLeave=_hideNavBarWhenLeave;
@property(nonatomic) _Bool isGoogleMap; // @synthesize isGoogleMap=_isGoogleMap;
@property(nonatomic) _Bool isInChina; // @synthesize isInChina=_isInChina;
@property(retain, nonatomic) UIButton *aroundSearchButton; // @synthesize aroundSearchButton=_aroundSearchButton;
@property(retain, nonatomic) CTLocationClient *locationClient; // @synthesize locationClient=_locationClient;
@property(retain, nonatomic) CTDestTTDMapItem *currentScheduleItem; // @synthesize currentScheduleItem=_currentScheduleItem;
@property(nonatomic) _Bool transitionFlip; // @synthesize transitionFlip=_transitionFlip;
@property(nonatomic) _Bool userSelected; // @synthesize userSelected=_userSelected;
@property(nonatomic) long long buttonOptions; // @synthesize buttonOptions=_buttonOptions;
@property(nonatomic) unsigned long long currentReqeustOptions; // @synthesize currentReqeustOptions=_currentReqeustOptions;
@property(nonatomic) unsigned long long subRequestOptions; // @synthesize subRequestOptions=_subRequestOptions;
@property(nonatomic) unsigned long long mainReqeustOption; // @synthesize mainReqeustOption=_mainReqeustOption;
@property(retain, nonatomic) NSString *requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) UILabel *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UIButton *showSelectedPoiBtn; // @synthesize showSelectedPoiBtn=_showSelectedPoiBtn;
@property(retain, nonatomic) UIButton *userLocationBtn; // @synthesize userLocationBtn=_userLocationBtn;
@property(retain, nonatomic) NSMutableArray *scheduleArray; // @synthesize scheduleArray=_scheduleArray;
@property(retain, nonatomic) CTGoogleMapView *googleMapView; // @synthesize googleMapView=_googleMapView;
@property(retain, nonatomic) UIButton *userLocationForFinanceButton; // @synthesize userLocationForFinanceButton=_userLocationForFinanceButton;
@property(retain, nonatomic) UIButton *zoomOutButton; // @synthesize zoomOutButton=_zoomOutButton;
@property(retain, nonatomic) UIButton *zoomInButton; // @synthesize zoomInButton=_zoomInButton;
@property(retain, nonatomic) UIButton *navButton; // @synthesize navButton=_navButton;
@property(retain, nonatomic) CTDestMapPoiInfoView *poiInfoView; // @synthesize poiInfoView=_poiInfoView;
@property(retain, nonatomic) CTDestMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <CTDestTTDMapViewControllerMapDelegate> annotationMapDelegate; // @synthesize annotationMapDelegate=_annotationMapDelegate;
@property(retain, nonatomic) NSString *isFrom; // @synthesize isFrom=_isFrom;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) double mapScaling; // @synthesize mapScaling=_mapScaling;
@property(retain, nonatomic) CTDestHorizFlowView *cardFlowView; // @synthesize cardFlowView=_cardFlowView;
@property(retain, nonatomic) CTDestTTDMapItem *currentGoogleItem; // @synthesize currentGoogleItem=_currentGoogleItem;
@property(retain, nonatomic) CTDestAnnotation *currentAnnotation; // @synthesize currentAnnotation=_currentAnnotation;
@property(retain, nonatomic) NSMutableArray *displayArray; // @synthesize displayArray=_displayArray;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic) _Bool isTopHotel; // @synthesize isTopHotel=_isTopHotel;
@property(nonatomic) _Bool isShowChina; // @synthesize isShowChina=_isShowChina;
@property(nonatomic) _Bool isInTravel; // @synthesize isInTravel=_isInTravel;
@property(nonatomic) long long districtId; // @synthesize districtId=_districtId;
@property(nonatomic) _Bool isSearchDisabled; // @synthesize isSearchDisabled=_isSearchDisabled;
@property(retain, nonatomic) CTDestTTDMapItem *currentPOIItem; // @synthesize currentPOIItem=_currentPOIItem;
@property(nonatomic) _Bool fromSearchResultList; // @synthesize fromSearchResultList=_fromSearchResultList;
@property(nonatomic) long long sourcePOIType; // @synthesize sourcePOIType=_sourcePOIType;
@property(retain, nonatomic) NSArray *defaultPOIList; // @synthesize defaultPOIList=_defaultPOIList;
@property(retain, nonatomic) NSArray *schedulePoiList; // @synthesize schedulePoiList=_schedulePoiList;
@property(retain, nonatomic) NSArray *multiplePoiList; // @synthesize multiplePoiList=_multiplePoiList;
@property(retain, nonatomic) NSMutableArray *switchBtns; // @synthesize switchBtns=_switchBtns;
- (void).cxx_destruct;
- (void)locationClient:(id)arg1 locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)locationClient:(id)arg1 locationFail:(int)arg2;
- (void)afterCancelLoadingWithView:(id)arg1;
- (void)onInfoWindowClicked:(id)arg1;
- (void)onAnotationClicked:(id)arg1;
- (void)googleMapRegionDidChanged;
- (void)mapZoomChanged:(int)arg1;
- (void)mapCenterChanged:(double)arg1 longitude:(double)arg2;
- (void)loadGoogleMapFail;
- (void)loadGoogleMapFinish;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 destMapViewDelegate:(id)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initMapItems;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)backBarButtonClicked:(id)arg1;
- (void)loadPOITypeSwitchBtn;
- (void)poiTypeSwitchBtnDidClicked:(id)arg1;
- (void)aroundBtnDidClicked:(id)arg1;
- (void)hidePoiSearchBtn;
- (void)showPoiSearchBtn;
- (void)searchForMapRegionDidChanged;
- (void)requestNearbyPOIListWithLocationCoordinate:(struct CLLocationCoordinate2D)arg1 searchOptions:(unsigned long long)arg2 Distance:(id)arg3;
- (void)requestNearbyPOIListWithSearchOptions:(unsigned long long)arg1;
- (id)getGoogleVisibleAnnotationsWithSouthWest:(struct CLLocationCoordinate2D)arg1 andNorthEast:(struct CLLocationCoordinate2D)arg2;
- (void)handleNearbyPOIListReponse:(id)arg1;
- (void)removeAnnotationsWithPoiType:(long long)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)showPoiInfoView;
- (void)navButtonClicked:(id)arg1;
- (void)addAnnotations:(id)arg1 needsZoomToFitAll:(_Bool)arg2 needsCleanInvisibleAnnotations:(_Bool)arg3;
- (void)addScheduleAnnotations;
- (id)filterAnnotations:(id)arg1 poiType:(long long)arg2;
- (id)filterInvalidMapItems:(id)arg1;
- (void)cleanInvisibleItemsWithVisibleAnnotations:(id)arg1;
- (void)cleanInvisibleAnnotations;
- (void)zoomToUserLocation;
- (void)zoomOut;
- (void)zoomIn;
- (void)showSelectedPoi;
- (void)zoomMapToFitAnnotations:(id)arg1;
- (id)logStr:(unsigned long long)arg1;
- (long long)poiTypeWithAnnotationType:(unsigned long long)arg1;
- (unsigned long long)searchOptionWithPOIType:(long long)arg1;
- (void)showToast:(id)arg1 autoDismiss:(_Bool)arg2;
- (void)gotoPOIDetailWithAnnotationModel:(id)arg1;
- (id)pageCode;
- (id)ctd_horizFlowView:(id)arg1 cellAtIndex:(unsigned long long)arg2;
- (void)ctd_reloadDataFinished:(id)arg1;
- (unsigned long long)ctd_numberOfCellsInHorizFlowView:(id)arg1;
- (void)ctd_horizFlowView:(id)arg1 didSelectCellAtIndex:(unsigned long long)arg2;
- (void)updateMapWithAnnotation:(id)arg1;
- (void)updateGoogleMapWithAnnotation:(id)arg1;
- (void)visibleCellsChanged;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)ctd_gapForCellsInHorizFlowView:(id)arg1;
- (double)ctd_horizFlowView:(id)arg1 widthForCellAtIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
