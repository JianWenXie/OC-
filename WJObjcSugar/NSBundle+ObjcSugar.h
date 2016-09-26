//
//  NSBundle+ObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSBundle (ObjcSugar)
/// 当前版本号字符串
+ (nullable NSString *)wj_currentVersion;

/// 与当前屏幕尺寸匹配的启动图像
+ (nullable UIImage *)wj_launchImage;

@end
