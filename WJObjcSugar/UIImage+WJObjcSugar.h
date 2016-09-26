//
//  UIImage+WJObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (WJObjcSugar)

/// 生成指定颜色的一个`点`的图像
///
/// @param color 颜色
///
/// @return 1 * 1 图像
+ (nonnull UIImage *)wj_singleDotImageWithColor:(nonnull UIColor *)color;


@end
