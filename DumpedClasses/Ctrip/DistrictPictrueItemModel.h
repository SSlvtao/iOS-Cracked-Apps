//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface DistrictPictrueItemModel : CTBusinessBean <NSCoding>
{
    int pictureId;
    NSString *pictrueUrl;
    NSString *tinyPictrueUrl;
    NSString *pictrueDesc;
    NSString *fpath;
}

@property(copy, nonatomic) NSString *fpath; // @synthesize fpath;
@property(copy, nonatomic) NSString *pictrueDesc; // @synthesize pictrueDesc;
@property(copy, nonatomic) NSString *tinyPictrueUrl; // @synthesize tinyPictrueUrl;
@property(copy, nonatomic) NSString *pictrueUrl; // @synthesize pictrueUrl;
@property(nonatomic) int pictureId; // @synthesize pictureId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

