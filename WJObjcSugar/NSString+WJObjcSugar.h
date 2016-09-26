//
//  NSString+WJObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (WJObjcSugar)
/// 拼接了`文档目录`的全路径
@property (nullable, nonatomic, readonly) NSString *wj_documentDirectory;
/// 拼接了`缓存目录`的全路径
@property (nullable, nonatomic, readonly) NSString *wj_cacheDirecotry;
/// 拼接了临时目录的全路径
@property (nullable, nonatomic, readonly) NSString *wj_tmpDirectory;

@end

@interface NSString (HMBase64)

/// BASE 64 编码的字符串内容
@property(nullable, nonatomic, readonly) NSString *wj_base64encode;
/// BASE 64 解码的字符串内容
@property(nullable, nonatomic, readonly) NSString *wj_base64decode;

@end
