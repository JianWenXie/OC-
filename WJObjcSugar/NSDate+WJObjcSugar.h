//
//  NSDate+WJObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (WJObjcSugar)

#pragma mark - 单例
+ (nonnull NSDateFormatter *)wj_sharedDateFormatter;
+ (nonnull NSCalendar *)wj_sharedCalendar;

#pragma mark - 日期方法
/// 返回指定时间差值的日期字符串
///
/// @param delta 时间差值
///
/// @return 日期字符串，格式：yyyy-MM-dd HH:mm:ss
+ (nonnull NSString *)wj_dateStringWithDelta:(NSTimeInterval)delta;

/// 返回日期格式字符串
///
/// 具体格式如下：
///     - 刚刚(一分钟内)
///     - X分钟前(一小时内)
///     - X小时前(当天)
///     - MM-dd HH:mm(一年内)
///     - yyyy-MM-dd HH:mm(更早期)
@property (nonnull, nonatomic, readonly) NSString *wj_dateDescription;
@end
