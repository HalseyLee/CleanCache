//
//  LHCleanCache.h
//  NursesAndDoctor
//
//  Created by Halsey on 10/9/16.
//  Copyright © 2016 yysky. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^cleanCacheBlock)();

@interface LHCleanCache : NSObject

/**
 *  清理缓存
 */
+(void)cleanCache:(cleanCacheBlock)block;

/**
 *  整个缓存目录的大小
 */
+(NSString *)folderSizeAtPath;


@end
