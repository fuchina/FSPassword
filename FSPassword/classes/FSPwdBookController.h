//
//  FSPwdBookController.h
//  myhome
//
//  Created by FudonFuchina on 2017/8/13.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

@interface FSPwdBookController : FSBaseController

@property (nonatomic,copy) NSString     *zone;
@property (nonatomic,copy) NSString     *name;

@property (nonatomic,copy) NSString     *password;

// 搜索模式
@property (nonatomic,assign) BOOL       isSearchMode;
@property (nonatomic,strong) NSArray    *searchResults;

@end
