//
//  UINavigationController+WJObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (WJObjcSugar)
/// 自定义全屏拖拽返回手势
@property (nonatomic, strong, readonly) UIPanGestureRecognizer *wj_popGestureRecognizer;


@end
