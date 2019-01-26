//
//  XYMethodHook.h
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/10.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <objc/message.h>

NS_ASSUME_NONNULL_BEGIN

@interface XYMethodHook : NSObject
/**
 *   用该类的一个方法替换另一个方法： 某一个类的俩哥方法交换
 */
+ (void)methodReplace:(Class)class  originMethod:(SEL)originMethod replaceMethod:(SEL)replaceMethod;
/**
 /**
 *   用A类的 实例a方法  来和B类的 实例b方法进行交换
 */
+ (void)instanceMethodExchangeOriginClass:(Class)originClass originMethod:(SEL)originMethod exchangeClass:(Class)class exchangeMethod:(SEL)replaceMethod;
/**
 *   用A类的 类c方法  和B类的 类d 方法交换
 */
+ (void)classMethodExchangeOriginClass:(Class)originClass originMethod:(SEL)originMethod exchangeClass:(Class)class exchangeMethod:(SEL)replaceMethod;

@end

NS_ASSUME_NONNULL_END
