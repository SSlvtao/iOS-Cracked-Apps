//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTourVisaUploadMaterialModel, CTTourVisaUploadMaterialView, NSMutableArray;

@protocol CTTourVisaUploadMaterialViewDelegate <NSObject>

@optional
- (void)visaUploadMaterialView:(CTTourVisaUploadMaterialView *)arg1 cancelVisaMaterialArray:(NSMutableArray *)arg2;
- (void)visaUploadMaterialView:(CTTourVisaUploadMaterialView *)arg1 scanVisaMaterial:(CTTourVisaUploadMaterialModel *)arg2 visaMaterialType:(long long)arg3;
- (void)visaUploadMaterialView:(CTTourVisaUploadMaterialView *)arg1 visaMaterialChange:(_Bool)arg2 visaMaterialUploadCount:(long long)arg3 deleteVisaMaterialArray:(NSMutableArray *)arg4 reusedVisaMaterialArray:(NSMutableArray *)arg5 deleteReusedVisaMaterialArray:(NSMutableArray *)arg6;
- (void)visaUploadMaterialView:(CTTourVisaUploadMaterialView *)arg1 choosePhotoWithUploadedCount:(long long)arg2;
@end

