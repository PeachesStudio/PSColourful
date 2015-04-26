//
// Created by liuqin.sheng on 9/2/14.
// Copyright (c) 2014 Peaches Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#define RGBCOLOR(r, g, b)     [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]
#define RGBACOLOR(r, g, b, a)  [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define HEXRGBCOLOR(h)      RGBCOLOR(((h>>16)&0xFF), ((h>>8)&0xFF), (h&0xFF))
#define HEXRGBACOLOR(h, a)   RGBACOLOR(((h>>16)&0xFF), ((h>>8)&0xFF), (h&0xFF), a)

@interface PSHexColor : NSObject
@end