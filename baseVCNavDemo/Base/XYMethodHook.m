//
//  XYMethodHook.m
//  baseVCNavDemo
//
//  Created by 王俊钢 on 2019/1/10.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import "XYMethodHook.h"

@implementation XYMethodHook

/**
 *   用该类的一个方法替换另一个方法： 某一个类的俩哥方法交换
 */
+ (void)methodReplace:(Class)class  originMethod:(SEL)originMethod replaceMethod:(SEL)replaceMethod
{
    Method origin = class_getInstanceMethod(class,originMethod);
    Method replace = class_getInstanceMethod(class, replaceMethod);
    method_exchangeImplementations(origin, replace);
}
/**
 *   用A类的 实例a方法  来和B类的 实例b方法进行交换
 */
+ (void)instanceMethodExchangeOriginClass:(Class)originClass originMethod:(SEL)originMethod exchangeClass:(Class)class exchangeMethod:(SEL)replaceMethod
{
    Method origin = class_getInstanceMethod(originClass,originMethod);
    Method replace = class_getInstanceMethod(class, replaceMethod);
    method_exchangeImplementations(origin, replace);
}
/**
 *   用A类的 类c方法  和B类的 类d 方法交换
 */
+ (void)classMethodExchangeOriginClass:(Class)originClass originMethod:(SEL)originMethod exchangeClass:(Class)class exchangeMethod:(SEL)replaceMethod
{
    Method origin = class_getClassMethod(originClass, originMethod);
    Method replace = class_getClassMethod(class, replaceMethod);
    method_exchangeImplementations(origin, replace);
}

@end
