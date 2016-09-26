//
//  UIColor+WJObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (WJObjcSugar)
#pragma mark - 颜色函数
/// 使用十六进制数字生成颜色
///
/// @param hex hex，格式 0xFFEEDD
///
/// @return UIColor
+ (nonnull instancetype)wj_colorWithHex:(u_int32_t)hex;

/// 使用指定的 r / g / b 数值生成颜色
///
/// @param red   red
/// @param green green
/// @param blue  blue
///
/// @return UIColor
+ (nonnull instancetype)wj_colorWithRed:(u_int8_t)red green:(u_int8_t)green blue:(u_int8_t)blue;

/// 生成随机颜色
///
/// @return UIColor
+ (nonnull instancetype)wj_randomColor;

#pragma mark - 颜色值
/// 返回当前颜色的 red 的 0～255 值
- (u_int8_t)wj_redValue;
/// 返回当前颜色的 green 的 0～255 值
- (u_int8_t)wj_greenValue;
/// 返回当前颜色的 blue 的 0～255 值
- (u_int8_t)wj_blueValue;
/// 返回当前颜色的 alpha 值
- (CGFloat)wj_alphaValue;
@end
