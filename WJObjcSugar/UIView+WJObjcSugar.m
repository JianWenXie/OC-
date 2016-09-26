//
//  UIView+WJObjcSugar.m
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//

#import "UIView+WJObjcSugar.h"

@implementation UIView (WJObjcSugar)
#pragma mark - Frame
@dynamic wj_viewOrigin,wj_viewSize,wj_x,wj_y,wj_height,wj_width;
- (CGPoint)wj_viewOrigin {
    return self.frame.origin;
}

- (void)setwj_viewOrigin:(CGPoint)wj_viewOrigin {
    CGRect newFrame = self.frame;
    newFrame.origin = wj_viewOrigin;
    self.frame = newFrame;
}

- (CGSize)wj_viewSize {
    return self.frame.size;
}

- (void)setwj_viewSize:(CGSize)wj_viewSize {
    CGRect newFrame = self.frame;
    newFrame.size = wj_viewSize;
    self.frame = newFrame;
}

#pragma mark - Frame Origin
- (CGFloat)wj_x {
    return self.frame.origin.x;
}

- (void)setwj_x:(CGFloat)wj_x {
    CGRect newFrame = self.frame;
    newFrame.origin.x = wj_x;
    self.frame = newFrame;
}

- (CGFloat)wj_y {
    return self.frame.origin.y;
}

- (void)setwj_y:(CGFloat)wj_y {
    CGRect newFrame = self.frame;
    newFrame.origin.y = wj_y;
    self.frame = newFrame;
}

#pragma mark - Frame Size
- (CGFloat)wj_width {
    return self.frame.size.width;
}

- (void)setwj_width:(CGFloat)wj_width {
    CGRect newFrame = self.frame;
    newFrame.size.width = wj_width;
    self.frame = newFrame;
}

- (CGFloat)wj_height {
    return self.frame.size.height;
}

- (void)setwj_height:(CGFloat)wj_height {
    CGRect newFrame = self.frame;
    newFrame.size.height = wj_height;
    self.frame = newFrame;
}

#pragma mark - 截屏
- (UIImage *)wj_capturedImage {
    
    UIGraphicsBeginImageContextWithOptions(self.bounds.size, YES, 0);
    
    UIImage *result = nil;
    if ([self drawViewHierarchyInRect:self.bounds afterScreenUpdates:YES]) {
        result = UIGraphicsGetImageFromCurrentImageContext();
    }
    
    UIGraphicsEndImageContext();
    
    return result;
}

@end
