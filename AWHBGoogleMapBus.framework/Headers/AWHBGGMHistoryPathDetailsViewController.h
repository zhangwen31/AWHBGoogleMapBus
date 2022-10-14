//
//  AWHBGGMHistoryPathDetailsViewController.h
//  AWHBGoogleMapBus
//
//  Created by GeDaTing on 2022/4/4.
//

#import <AWHBBasicBusiness/AWHBBasicBusiness.h>
#import <AWHBPublicBusiness/AWHBPBCountDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGGMHistoryPathDetailsViewController : AWHBBBaseViewController
/** */
@property(nonatomic,copy)NSString *plate;
@property(nonatomic,strong)NSMutableArray *pathArray;
@property(nonatomic,strong)AWHBPBCountDataModel *countDataModel;
@property(nonatomic,strong)NSMutableArray *alarmDataArray;
@property(nonatomic,strong)NSMutableArray *stopDataArray;
@property(nonatomic,strong)NSMutableArray *overspeedDataArray;
//速度阈值
@property (nonatomic, assign) CGFloat speedThreshold;
@end

NS_ASSUME_NONNULL_END
