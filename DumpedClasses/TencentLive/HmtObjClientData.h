//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HmtObjMMA.h"

@class NSString;

@interface HmtObjClientData : HmtObjMMA
{
    NSString *hmt_agent_attribute_str__idfa;
    NSString *hmt_agent_attribute_str__imei;
    NSString *hmt_agent_attribute_str__openudid;
    NSString *hmt_agent_attribute_str__duid;
    NSString *hmt_agent_attribute_str__androidid;
    NSString *hmt_agent_attribute_str__mac;
    NSString *hmt_agent_attribute_str_cell_id;
    NSString *hmt_agent_attribute_boo_is_mobile_device;
    NSString *hmt_agent_attribute_boo_have_wifi;
    NSString *hmt_agent_attribute_str_lac;
    NSString *hmt_agent_attribute_str_network;
    NSString *hmt_agent_attribute_boo_have_bt;
    NSString *hmt_agent_attribute_str_phone_type;
    NSString *hmt_agent_attribute_boo_have_gps;
    NSString *hmt_agent_attribute_str_model;
    NSString *hmt_agent_attribute_str_manufacturer;
    NSString *hmt_agent_attribute_str_producer;
    NSString *hmt_agent_attribute_str_mccmnc;
    NSString *hmt_agent_attribute_str_lon;
    NSString *hmt_agent_attribute_str_lat;
    NSString *hmt_agent_attribute_str_imsi;
    NSString *hmt_agent_attribute_boo_have_gravity;
    NSString *hmt_agent_attribute_boo_is_jail_break;
    NSString *hmt_agent_attribute_str_package_name;
}

+ (_Bool)postClientData:(CDUnknownBlockType)arg1;
+ (_Bool)postNoCacheClientData:(CDUnknownBlockType)arg1;
@property(retain) NSString *hmt_agent_attribute_str_package_name; // @synthesize hmt_agent_attribute_str_package_name;
@property(retain) NSString *hmt_agent_attribute_boo_is_jail_break; // @synthesize hmt_agent_attribute_boo_is_jail_break;
@property(retain) NSString *hmt_agent_attribute_boo_have_gravity; // @synthesize hmt_agent_attribute_boo_have_gravity;
@property(retain) NSString *hmt_agent_attribute_str_imsi; // @synthesize hmt_agent_attribute_str_imsi;
@property(retain) NSString *hmt_agent_attribute_str_lat; // @synthesize hmt_agent_attribute_str_lat;
@property(retain) NSString *hmt_agent_attribute_str_lon; // @synthesize hmt_agent_attribute_str_lon;
@property(retain) NSString *hmt_agent_attribute_str_mccmnc; // @synthesize hmt_agent_attribute_str_mccmnc;
@property(retain) NSString *hmt_agent_attribute_str_producer; // @synthesize hmt_agent_attribute_str_producer;
@property(retain) NSString *hmt_agent_attribute_str_manufacturer; // @synthesize hmt_agent_attribute_str_manufacturer;
@property(retain) NSString *hmt_agent_attribute_str_model; // @synthesize hmt_agent_attribute_str_model;
@property(retain) NSString *hmt_agent_attribute_boo_have_gps; // @synthesize hmt_agent_attribute_boo_have_gps;
@property(retain) NSString *hmt_agent_attribute_str_phone_type; // @synthesize hmt_agent_attribute_str_phone_type;
@property(retain) NSString *hmt_agent_attribute_boo_have_bt; // @synthesize hmt_agent_attribute_boo_have_bt;
@property(retain) NSString *hmt_agent_attribute_str_network; // @synthesize hmt_agent_attribute_str_network;
@property(retain) NSString *hmt_agent_attribute_str_lac; // @synthesize hmt_agent_attribute_str_lac;
@property(retain) NSString *hmt_agent_attribute_boo_have_wifi; // @synthesize hmt_agent_attribute_boo_have_wifi;
@property(retain) NSString *hmt_agent_attribute_boo_is_mobile_device; // @synthesize hmt_agent_attribute_boo_is_mobile_device;
@property(retain) NSString *hmt_agent_attribute_str_cell_id; // @synthesize hmt_agent_attribute_str_cell_id;
@property(retain) NSString *hmt_agent_attribute_str__mac; // @synthesize hmt_agent_attribute_str__mac;
@property(retain) NSString *hmt_agent_attribute_str__androidid; // @synthesize hmt_agent_attribute_str__androidid;
@property(retain) NSString *hmt_agent_attribute_str__duid; // @synthesize hmt_agent_attribute_str__duid;
@property(retain) NSString *hmt_agent_attribute_str__openudid; // @synthesize hmt_agent_attribute_str__openudid;
@property(retain) NSString *hmt_agent_attribute_str__imei; // @synthesize hmt_agent_attribute_str__imei;
@property(retain) NSString *hmt_agent_attribute_str__idfa; // @synthesize hmt_agent_attribute_str__idfa;
- (void).cxx_destruct;
- (_Bool)sendNoCache:(CDUnknownBlockType)arg1;
- (_Bool)send:(CDUnknownBlockType)arg1;
- (void)initHMTAgentObject;
- (id)init;

@end

