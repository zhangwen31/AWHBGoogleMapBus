//
//  AWHBGGMGGMarkerContentView.h
//  AWHBGoogleMapBus
//
//  Created by 王恒 on 2022/9/7.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGGMGGMarkerContentView : UIView
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UILabel *countLab;
@property (nonatomic, strong) UILabel *countLabel;
@property (nonatomic, strong) UILabel *speedLab;
@property (nonatomic, strong) AWHBBCarModel *model;

@end

NS_ASSUME_NONNULL_END
