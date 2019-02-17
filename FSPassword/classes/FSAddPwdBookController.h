//
//  FSAddPwdBookController.h
//  myhome
//
//  Created by FudonFuchina on 2017/8/13.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSPwdBookModel.h"

@interface FSAddPwdBookController : FSBaseController

@property (nonatomic,copy) NSString         *password;

@property (nonatomic,copy) NSString         *zone;
@property (nonatomic,strong) FSPwdBookModel *model;

@property (nonatomic,copy) void (^addCallback)(FSAddPwdBookController *bVC);
@property (nonatomic,copy) void (^updateCallback)(FSAddPwdBookController *bVC,FSPwdBookModel *bModel);
@property (nonatomic,copy) void (^changeZone)(FSAddPwdBookController *bVC,FSPwdBookModel *model);

@end
