//
//  UIScreen+WJObjcSugar.m
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import "UIScreen+WJObjcSugar.h"

@implementation UIScreen (WJObjcSugar)
+ (CGFloat)wj_screenWidth {
    return [UIScreen mainScreen].bounds.size.width;
}

+ (CGFloat)wj_screenHeight {
    return [UIScreen mainScreen].bounds.size.height;
}

+ (CGFloat)wj_scale {
    return [UIScreen mainScreen].scale;
}

@end
