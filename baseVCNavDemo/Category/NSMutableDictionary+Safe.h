//
//  NSMutableDictionary+Safe.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/16.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableDictionary (Safe)
- (void)safeSetObject:(id)aObj forKey:(id<NSCopying>)aKey;

- (id)safeObjectForKey:(id<NSCopying>)aKey;
@end

NS_ASSUME_NONNULL_END
