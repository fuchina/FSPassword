//
//  FSMoreZoneImageCell.h
//  FSImage
//
//  Created by fudon on 2016/10/12.
//  Copyright © 2016年 Fudongdong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSIPModel.h"

@interface FSMoreZoneImageCell : UITableViewCell

@property (nonatomic,strong) FSIPModel               *model;
@property (nonatomic,strong) NSArray<FSIPModel *>    *models;

@end
