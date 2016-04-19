//
//  UIImage+HUQRcode.h
//  LibTest2
//
//  Created by huweiya on 16/4/15.
//  Copyright © 2016年 bj_5i5j. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (HUQRcode)
+ (UIImage *)imageOfQRFromURL: (NSString *)networkAddress codeSize: (CGFloat)codeSize;

+ (UIImage *)excludeFuzzyImageFromCIImage: (CIImage *)image size: (CGFloat)size;


+(UIImage *)imageOfQRFromURL: (NSString *)networkAddress codeSize: (CGFloat)codeSize red: (NSUInteger)red green: (NSUInteger)green blue: (NSUInteger)blue insertImage: (UIImage *)insertImage roundRadius:(CGFloat)roundRadius;

@end
