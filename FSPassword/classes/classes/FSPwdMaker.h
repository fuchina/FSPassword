//
//  FSPwdMaker.h
//  Expand
//
//  Created by Fudongdong on 2017/8/22.
//  Copyright © 2017年 china. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, FSPasswordType) {
    FSPasswordTypeDefault = 0,                              // 8个符号，两大写，两小写，两数字，两特符
    FSPasswordTypeSixNumber = 1,                            // 6个数字
    FSPasswordTypeEightNumber = 2,                          // 8个数字
    FSPasswordTypeCharNumber = 3,                           // 8个符号，两大写，两小写，四数字
    FSPasswordTypeTenChar = 4,                              // 10个符号，两大写，两小写，三数字，三特符
    FSPasswordThreeHanzi = 5,                               // 返回三个汉字
    FSPasswordSixChars = 6,                               // 返回八个字母
};

@interface FSPwdMaker : NSObject

// seed为 1688等任何符号，link为核心密码
+ (NSString *)passwordWithType:(FSPasswordType)type seed:(NSString *)seed link:(NSString *)link;

+ (NSArray *)hundredHanzis;

@end
