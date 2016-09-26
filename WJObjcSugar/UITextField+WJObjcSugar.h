//
//  UITextField+WJObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (WJObjcSugar)
+ (nonnull instancetype)wj_textFieldWithPlaceHolder:(nonnull NSString *)placeHolder;
@end
