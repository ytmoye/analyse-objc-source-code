//
//  main.m
//  debug-objc
//
//  Created by yutao on 29/12/2017.
//

#import <Foundation/Foundation.h>
#import "YTObject.h"
#import "YTObject+Category.h"
#import <objc/runtime.h>

//union
//{
//    int i;
//    float f;
//} u;

int main(int argc, const char * argv[]) {
//    u.f = 3.14159f;
//    printf("As integer: %08x\n", u.i);
    {
        YTObject *obj1 = [[YTObject alloc] init];
        Class cls = object_getClass(obj1);
        printf("cls:%s <%p>\n", NSStringFromClass(cls).UTF8String, cls);
        Class metaCls = object_getClass(cls);
        printf("metaCls:%s <%p>\n", NSStringFromClass(metaCls).UTF8String, metaCls);
        Class rootMetaCls = object_getClass(metaCls);
        printf("rootMetsCls:%s <%p>\n", NSStringFromClass(rootMetaCls).UTF8String, rootMetaCls);
//        YTObject *obj2 = [[YTObject alloc] init];
        
//        obj1.obj = [[NSObject alloc] init];
//        NSUInteger rc = obj1.retainCount;
//        printf("%lu\n", rc);
        [obj1 retain];
//        [obj1 release];
        [obj1 release];
    }
    
    printf("Done!\n");
    return 0;
}
