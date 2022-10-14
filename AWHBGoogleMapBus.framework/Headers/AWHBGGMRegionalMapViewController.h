//
//  AWHBGGMRegionalMapViewController.h
//  AWHBGoogleMapBus
//
//  Created by GeDaTing on 2022/4/4.
//

#import <AWHBBasicBusiness/AWHBBasicBusiness.h>
#import <CoreLocation/CLLocation.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBGGMRegionalMapViewController : AWHBBBaseViewController
/** */
@property(nonatomic,strong)NSArray *carListArr;
@property(nonatomic,copy)NSString *tabOpinion;
@property(nonatomic,copy)NSString *titleStr;
@property (nonatomic, assign) CLLocationCoordinate2D coor;//导航终点位置
@end

NS_ASSUME_NONNULL_END
