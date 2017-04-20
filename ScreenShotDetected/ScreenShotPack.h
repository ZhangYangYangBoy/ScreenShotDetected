//
//  ScreenShotPack.h
//  ScreenShotDetected
//
//  Created by Tech-zhangyangyang on 2017/4/20.
//  Copyright © 2017年 Tech-zhangyangyang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppDelegate.h"

@interface ScreenShotPack : NSObject

+ (instancetype)sharedSingleOne;
- (void)embedApplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

@end
