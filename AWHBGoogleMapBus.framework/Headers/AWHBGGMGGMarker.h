//
//  AWHBGGMGGMarker.h
//  AWHBGoogleMapBus
//
//  Created by GeDaTing on 2022/4/4.
//

#import <GoogleMaps/GoogleMaps.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGGMGGMarker : GMSMarker

@property(nonatomic,assign)BOOL select;
@property (nonatomic, strong) AWHBBCarModel *model;

@end

NS_ASSUME_NONNULL_END
