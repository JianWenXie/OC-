//
//  UIScreen+WJObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (WJObjcSugar)
/// 屏幕宽度
+ (CGFloat)wj_screenWidth;
/// 屏幕高度
+ (CGFloat)wj_screenHeight;
/// 分辨率
+ (CGFloat)wj_scale;
@end
