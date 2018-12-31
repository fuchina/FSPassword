//
//  FSPwdCounterController.h
//  myhome
//
//  Created by FudonFuchina on 2017/2/26.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, FSCodeType) {
    FSCodeTypeDecode,
    FSCodeTypeCode,
    FSCodeTypeFourNumbers,
    FSCodeTypeSixNumbers,
    FSCodeTypeEightNumbers,
    FSCodeTypeNumberChars,
    FSCodeTypeCharNumbers,
    FSCodeTypeThreeChars,
    FSCodeTypeSixSystems,
};

@interface FSPwdCounterController : UIViewController

@property (nonatomic,assign) NSInteger  type;
@property (nonatomic,copy) void (^callback)(FSPwdCounterController *bVC);

@end
