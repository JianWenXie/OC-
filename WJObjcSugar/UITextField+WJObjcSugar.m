//
//  UITextField+WJObjcSugar.m
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import "UITextField+WJObjcSugar.h"

@implementation UITextField (WJObjcSugar)
/// 实例化 UITextField
///
/// @param placeHolder     占位文本
///
/// @return UITextField

+ (instancetype)wj_textFieldWithPlaceHolder:(NSString *)placeHolder {
    
    UITextField *textField = [[self alloc] init];
    
    textField.borderStyle = UITextBorderStyleRoundedRect;
    textField.placeholder = placeHolder;
    
    return textField;
}

@end
