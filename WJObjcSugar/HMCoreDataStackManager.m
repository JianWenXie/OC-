//
//  HMCoreDataStackManager.m
//  手动创建CoreDataStack
//
//  Created by hm04 on 16/9/25.
//  Copyright © 2016年 hm04. All rights reserved.
//

#import "HMCoreDataStackManager.h"

@implementation HMCoreDataStackManager

+ (HMCoreDataStackManager *)shareInstance
{
    static HMCoreDataStackManager *manager = nil;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[HMCoreDataStackManager alloc] init];
        
    });
    
    return manager;
}

-(NSURL*)getDocumentUrlPath
{
    return [[[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask] lastObject];
}


//懒加载NSManagedObjectContext
- (NSManagedObjectContext *)managedObjectContext
{
    if (_managedObjectContext != nil) {
        return _managedObjectContext;
    }
    //初始化NSManagedObjectContext  参数:CoreData环境线程   一般开发中使用NSMainQueueConcurrencyType主线   NSMainQueueConcurrencyType:储存无延迟  NSPrivateQueueConcurrencyType:分支线程  存储有延迟
    _managedObjectContext = [[NSManagedObjectContext alloc] initWithConcurrencyType:NSMainQueueConcurrencyType];
    
    
    //设置存储调度器
    [_managedObjectContext setPersistentStoreCoordinator:self.persistentStoreCoordinator];
    
    
    return _managedObjectContext;
    
}

//懒加载NSManagedObjectModel
- (NSManagedObjectModel *)managedObjectModel
{
    if(_managedObjectModel != nil)
    {
        return _managedObjectModel;
    }
    
//    //初始化NSManagedObjectModel  参数是:模型文件的路径  后缀不能是xcdatamodeld  只能是momd
//    _managedObjectModel = [[NSManagedObjectModel alloc] initWithContentsOfURL:[[NSBundle mainBundle] URLForResource:@"Teacher" withExtension:@"momd"]];
    
    //合并模型文件
    //参数是模型文件的bundle数组  如果是nil  自动获取所有bundle的模型文件
    _managedObjectModel = [NSManagedObjectModel mergedModelFromBundles:nil];
    
    return _managedObjectModel;
}


//懒加载NSPersistentStoreCoordinator
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator
{
    if(_persistentStoreCoordinator != nil)
    {
        return _persistentStoreCoordinator;
    }
    
    //初始化NSPersistentStoreCoordinator 参数是要存储的模型
    _persistentStoreCoordinator = [[NSPersistentStoreCoordinator alloc] initWithManagedObjectModel:self.managedObjectModel];
    
    //添加存储器
    /**
     * type:一般使用数据库存储方式NSSQLiteStoreType
     * configuration:配置信息  一般无需配置
     * URL:要保存的文件路径
     * options:参数信息 一般无需设置
     */
    
    //拼接url路径
    NSURL *url = [[self getDocumentUrlPath] URLByAppendingPathComponent:@"sqlit.db" isDirectory:YES];
    
    [_persistentStoreCoordinator addPersistentStoreWithType:NSSQLiteStoreType configuration:nil URL:url options:nil error:nil];
    
    return _persistentStoreCoordinator;
}

- (void)save
{
    [self.managedObjectContext save:nil];
}

- (void)deleteAllEntiies {
    
    // 获取与数据文件相关的三个文件
    NSString *path1 = [NSString stringWithFormat:@"%@/Documents/%@.db",NSHomeDirectory(),kFileName];
    NSString *path2 = [NSString stringWithFormat:@"%@/Documents/%@.db-shm",NSHomeDirectory(),kFileName];
    NSString *path3 = [NSString stringWithFormat:@"%@/Documents/%@.db-wal",NSHomeDirectory(),kFileName];
    NSError *error = nil;
    
    
    //删除文件
    [[NSFileManager defaultManager] removeItemAtPath:path1 error:&error];
    [[NSFileManager defaultManager] removeItemAtPath:path2 error:&error];
    [[NSFileManager defaultManager] removeItemAtPath:path3 error:&error];
    
    
    if (error == nil) {
        NSLog(@"数据清除成功");
    }
    else
    {
        
        NSLog(@"数据清除失败:%@",error.description);
    }


}

@end
