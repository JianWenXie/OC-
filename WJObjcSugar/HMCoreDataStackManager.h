//
//  HMCoreDataStackManager.h
//  手动创建CoreDataStack
//
//  Created by hm04 on 16/9/25.
//  Copyright © 2016年 hm04. All rights reserved.
//

#import <Foundation/Foundation.h>

//导入CoreData框架
#import <CoreData/CoreData.h>

#define kHMCoreDataStackManager [HMCoreDataStackManager shareInstance]

#define kFileName @"sqlit"
@interface HMCoreDataStackManager : NSObject

//单利实现
+ (HMCoreDataStackManager *)shareInstance;

//管理对象上下文
@property(nonatomic,strong)NSManagedObjectContext *managedObjectContext;

//模型对象
@property(nonatomic,strong)NSManagedObjectModel *managedObjectModel;


//存储调度器
@property(nonatomic,strong)NSPersistentStoreCoordinator *persistentStoreCoordinator;


//保存
- (void)save;

// 清除数据库
- (void)deleteAllEntiies;

@end
