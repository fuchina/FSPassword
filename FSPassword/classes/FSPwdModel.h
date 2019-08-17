//
//  FSPwdModel.h
//  FSAccount
//
//  Created by FudonFuchina on 2019/8/5.
//

#import "FSAppModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface FSPwdModel : FSAppModel

+ (NSMutableArray *)searchText:(NSString *)text password:(NSString *)password;

@end

NS_ASSUME_NONNULL_END
