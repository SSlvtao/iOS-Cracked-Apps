//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DCFilterModel<Optional>, DCRoleFilterModel<Optional>, NSArray<Optional><DCContactItemModel>, NSNumber<Optional>, NSString<Optional>;

@interface DCContactFollowsViewControllerModel : TRBaseModel
{
    DCRoleFilterModel<Optional> *_filterRoles;
    DCFilterModel<Optional> *_filterMapping;
    NSArray<Optional><DCContactItemModel> *_list;
    NSString<Optional> *_subtitle;
    NSString<Optional> *_title;
    NSNumber<Optional> *_hasNextPage;
    NSNumber<Optional> *_contactPrivacySwitch;
}

@property(copy, nonatomic) NSNumber<Optional> *contactPrivacySwitch; // @synthesize contactPrivacySwitch=_contactPrivacySwitch;
@property(copy, nonatomic) NSNumber<Optional> *hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString<Optional> *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSArray<Optional><DCContactItemModel> *list; // @synthesize list=_list;
@property(copy, nonatomic) DCFilterModel<Optional> *filterMapping; // @synthesize filterMapping=_filterMapping;
@property(copy, nonatomic) DCRoleFilterModel<Optional> *filterRoles; // @synthesize filterRoles=_filterRoles;
- (void).cxx_destruct;

@end
