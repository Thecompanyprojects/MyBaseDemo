//
//  NSDictionary+Safe.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/16.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (Safe)
- (id)safeObjectForKey:(NSString *)key;

- (void)safeSetValue:(id)object forKey:(id)key;

- (id)objectForKeyCustom:(id)aKey;

- (id)safeKeyForValue:(id)value;

@end

NS_ASSUME_NONNULL_END
