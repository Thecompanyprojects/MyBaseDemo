//
//  NSArray+Safe.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/16.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (Safe)

- (id)safeObjectAtIndex:(NSUInteger)index;

- (NSArray *)safeSubarrayWithRange:(NSRange)range;

- (NSUInteger)safeIndexOfObject:(id)anObject;

@end

NS_ASSUME_NONNULL_END
