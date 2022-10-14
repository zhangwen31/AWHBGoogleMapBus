//
//  AWHBGGMPathTrackViewController.h
//  AWHBGoogleMapBus
//
//  Created by GeDaTing on 2022/4/4.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCountDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGGMPathTrackViewController : UIViewController

@property(nonatomic,strong)NSMutableArray *pathArray;
@property(nonatomic,strong)AWHBPBCountDataModel *countDataModel;
@property(nonatomic,copy)NSString *startAddr;
@property(nonatomic,copy)NSString *startTime;
@property(nonatomic,copy)NSString *endTime;
@property(nonatomic,copy)NSString *endAddr;

@end

NS_ASSUME_NONNULL_END
