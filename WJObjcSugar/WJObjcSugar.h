//
//  WJObjcSugar.h
//  语法糖
//
//  Created by fox on 16/9/26.
//  Copyright © 2016年 谢文坚. All rights reserved.
//
#warning D为前缀
//-------------------打印日志-------------------------
/**
 *
 *重写NSLog,Debug模式下打印日志和当前行数
 */
#if DEBUG
#define kLog(FORMAT, ...) fprintf(stderr,"\nfunction:%s line:%d content:%s\n", __FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif

/**
 *
 *Show Alert, brackets is the parameters.       宏定义一个弹窗方法,括号里面是方法的参数 @return Show Alert
 */

#define kshowAlert    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Warning." message:nil delegate:self cancelButtonTitle:@"cancel" otherButtonTitles: @"OK"];[alert show];

/** print 打印rect,size,point */
#ifdef DEBUG
#define kLogPoint(point)    NSLog(@"%s = { x:%.4f, y:%.4f }", #point, point.x, point.y)
#define kLogSize(size)      NSLog(@"%s = { w:%.4f, h:%.4f }", #size, size.width, size.height)
#define kLogRect(rect)      NSLog(@"%s = { x:%.4f, y:%.4f, w:%.4f, h:%.4f }", #rect, rect.origin.x, rect.origin.y, rect.size.width, rect.size.height)
#endif

/*********************打印坐标系列************************/
/**
 * 当前屏幕宽
 */
#define kWidth   [UIScreen mainScreen].bounds.size.width
/**
 *  当前屏幕高
 */
#define kheight [UIScreen mainScreen].bounds.size.height
/* 当前屏幕宽 */
#define kmwidth ([UIScreen mainScreen].bounds.size.width)
/* 当前屏幕高 */
#define kmheight ([UIScreen mainScreen].bounds.size.height)
/* 当前设备宽 */
#define kApp_width [[UIScreen mainScreen]applicationFrame].size.width
/* 当前屏幕高 */
#define kApp_height [[UIScreen mainScreen]applicationFrame].size.height
/**
 *  TabBarHeight
 */
#define kTabBarHeight 64

/**
 *  导航栏的高度
 */
#define kNavigationHeight 49

/**
 *  随机色
 */
#define karcCol [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]

#define kRDegreesToRadian(x) (M_PI * (x) / 180.0)
#define kRRadianToDegrees(radian) (radian*180.0)/(M_PI)


/*----------------------------------打印结束  --------------------*/
//LOAD LOCAL IMAGE FILE     读取本地图片
#define kloadImage(file,ext) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:ext]]


//DEFINE IMAGE      定义UIImage对象//    imgView.image = IMAGE(@"Default.png");
#define kimage(A) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:A ofType:nil]]
//清除背景色
#define kclearcolor [UIColor clearColor]



/** 快速查询一段代码的执行时间 */
#define kICK NSDate *startTime = [NSDate date];
#define kOCK NSLog(@"Time:%f", -[startTime timeIntervalSinceNow]);


#define kScreenWidth    [UIScreen mainScreen].bounds.size.width
#define kScreenHeight   [UIScreen mainScreen].bounds.size.height
#define kScreenBounds   [UIScreen mainScreen].bounds



#import "UIScreen+WJObjcSugar.h"
#import "UIView+WJObjcSugar.h"
#import "UILabel+WJObjcSugar.h"
#import "UIButton+WJObjcSugar.h"
#import "UITextField+WJObjcSugar.h"

#import "UIColor+WJObjcSugar.h"
#import "UIImage+WJObjcSugar.h"

#import "NSBundle+ObjcSugar.h"
#import "NSDate+WJObjcSugar.h"
#import "NSString+WJObjcSugar.h"
#import "NSArray+Log.h"
#import "UINavigationController+WJObjcSugar.h"
#import "singleton.h" // 单例
