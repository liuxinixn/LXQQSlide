//
//  LXLeftController.h
//  LXQQSlide
//
//  Created by chenergou on 2017/11/1.
//  Copyright © 2017年 漫漫. All rights reserved.
//

#import "LXBasicController.h"
typedef void (^TypeDidClick) (NSString *type,Class targetClass);
@interface LXLeftController : LXBasicController
@property(nonatomic,copy)TypeDidClick typeClick;
@end
