//
//  UMWKHybrid.h
//  UMHybrid
//
//  Created by wangkai on 16-4-1.
//  Copyright (c) 2016年 tendcloud. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface UMWKHybrid : NSObject

+ (BOOL)execute:(NSString *)parameters webView:(WKWebView *)webView;


@end
