//
//  YTObject.h
//  debug-objc
//
//  Created by yutao on 29/12/2017.
//

#import <Foundation/Foundation.h>

@protocol YTObjectDelegate <NSObject>
- (void)delegateFunc;
@end

@interface YTObject : NSObject <YTObjectDelegate>

@property (nonatomic, strong) NSObject *testObj;

- (void)instanceFunc;
+ (void)clssFunc;

@end
