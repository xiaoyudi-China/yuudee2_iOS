//
//  ZJNGeneralLoginView.h
//  Yuudee2
//
//  Created by 朱佳男 on 2018/9/7.
//  Copyright © 2018年 北京道口贷科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZJNGeneralLoginView : UIView

- (void)testFunction;
- (void)testGeneralLogin:(NSInteger )code phone:(NSString *)phone psw:(NSString *)psw
                 success:(void (^) (id json))success
                 failure:(void (^)(NSError *error))failure;
@end
