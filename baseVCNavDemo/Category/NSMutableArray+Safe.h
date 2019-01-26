//
//  NSMutableArray+Safe.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/16.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableArray (Safe)
- (void)safeAddObject:(id)object;

- (void)safeInsertObject:(id)object atIndex:(NSUInteger)index;

- (void)safeInsertObjects:(NSArray *)objects atIndexes:(NSIndexSet *)indexs;

- (void)safeRemoveObjectAtIndex:(NSUInteger)index;

- (void)safeRemoveObjectsInRange:(NSRange)range;
@end

NS_ASSUME_NONNULL_END
