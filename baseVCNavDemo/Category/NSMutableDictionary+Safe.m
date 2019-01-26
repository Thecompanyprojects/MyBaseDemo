//
//  NSMutableDictionary+Safe.m
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/16.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import "NSMutableDictionary+Safe.h"

@implementation NSMutableDictionary (Safe)

- (void)safeSetObject:(id)aObj forKey:(id<NSCopying>)aKey
{
    if (aObj && ![aObj isKindOfClass:[NSNull class]] && aKey) {
        [self setObject:aObj forKey:aKey];
    } else {
        return;
    }
}

- (id)safeObjectForKey:(id<NSCopying>)aKey
{
    if (aKey != nil) {
        return [self objectForKey:aKey];
    } else {
        return nil;
    }
}

@end
