//
//  UIView+WJObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (WJObjcSugar)

#pragma mark - Frame
/// 视图原点
@property (nonatomic) CGPoint wj_viewOrigin;
/// 视图尺寸
@property (nonatomic) CGSize wj_viewSize;

#pragma mark - Frame Origin
/// frame 原点 x 值
@property (nonatomic) CGFloat wj_x;
/// frame 原点 y 值
@property (nonatomic) CGFloat wj_y;

#pragma mark - Frame Size
/// frame 尺寸 width
@property (nonatomic) CGFloat wj_width;
/// frame 尺寸 height
@property (nonatomic) CGFloat wj_height;

#pragma mark - 截屏
/// 当前视图内容生成的图像
@property (nonatomic, readonly, nullable)UIImage *wj_capturedImage;

@end
