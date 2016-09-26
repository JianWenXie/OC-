//
//  NSString+WJObjcSugar.m
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import "NSString+WJObjcSugar.h"

@implementation NSString (WJObjcSugar)
- (NSString *)wj_documentDirectory {
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject stringByAppendingPathComponent:self];
}

- (NSString *)wj_cacheDirecotry {
    return [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).firstObject stringByAppendingPathComponent:self];
}

- (NSString *)wj_tmpDirectory {
    return [NSTemporaryDirectory() stringByAppendingPathComponent:self];
}

@end

@implementation NSString (HMBase64)

- (NSString *)wj_base64encode {
    NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding];
    
    return [data base64EncodedStringWithOptions:0];
}

- (NSString *)wj_base64decode {
    NSData *data = [[NSData alloc] initWithBase64EncodedString:self options:0];
    
    return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
}



@end
