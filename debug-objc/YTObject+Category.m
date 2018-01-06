//
//  YTObject+Category.m
//  debug-objc
//
//  Created by yutao on 30/12/2017.
//

#import "YTObject+Category.h"
#import <objc/runtime.h>

static NSString * const kObj = @"kObj";

@implementation YTObject (Category)

- (void)yt_categoryFunc
{
    
}

- (void)setObj:(NSObject *)obj
{
    objc_setAssociatedObject(self, &kObj, obj, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (NSObject *)obj
{
    return objc_getAssociatedObject(self, &kObj);
}

@end
