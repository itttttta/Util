//
//  Macros.h
//  Util
//
//  Created by 汪达 on 16/6/15.
//  Copyright © 2016年 wd. All rights reserved.
//

#ifndef Macros_h
#define Macros_h

#import "MyUI.h"


//.打印开关控制
//----------------------------------------------------------------------------------------------
#define DEBUGLOG
#ifdef DEBUGLOG
#       define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#       define DLog(...)
#endif

//窗口
#define kKeyWindow [UIApplication sharedApplication].keyWindow


//颜色
//主题色
#define KTHEME_COLOR                       [UIColor redColor]

#define KCOLOR_Clear                        [UIColor clearColor]

#define KCOLOR_WHITE                        [UIColor whiteColor]
#define KCOLOR_BLACK                        [UIColor blackColor]
#define KCOLOR_CLEAR                        [UIColor clearColor]
#define KCOLOR_GRAY                         [UIColor grayColor]

#define KCOLOR_BACKGROUND_WHITE             [UIColor colorWithHex:@"#f5f5f5"]//e9f6fe

/**
 *  margin
 */
#define KMARGIN_5                    5
#define KMARGIN_8                    8
#define KMARGIN_10                   10
#define KMARGIN_20                   20
#define KCORNER_RADIUS_3             3
#define KCORNER_RADIUS_5             5
#define KBORDER_WIDTH_001            0.01f
#define KBORDER_WIDTH_03             0.3f
#define KBORDER_WIDTH_01             0.1f
#define KBORDER_WIDTH_1              1.f
#define ROUND_PER_CENT               0.6f

//字体
/**
 *  font
 */
#define KSYSTEM_FONT_8                      [UIFont systemFontOfSize:8]
#define KSYSTEM_FONT_10                     [UIFont systemFontOfSize:10]
#define KSYSTEM_FONT_12                     [UIFont systemFontOfSize:12]
#define KSYSTEM_FONT_13                     [UIFont systemFontOfSize:13]
#define KSYSTEM_FONT_14                     [UIFont systemFontOfSize:14]
#define KSYSTEM_FONT_15                     [UIFont systemFontOfSize:15]
#define KSYSTEM_FONT_18                     [UIFont systemFontOfSize:18]
#define KSYSTEM_FONT_20                     [UIFont systemFontOfSize:20]
#define KSYSTEM_FONT_(a)                    [UIFont systemFontOfSize:a]

#define KSYSTEM_FONT_BOLD_(a)               [UIFont boldSystemFontOfSize:a]
#define KICON_FONT_(a)                      [UIFont fontWithName:@"iconfont" size:a]

//
#define KSFS(b) [NSString stringWithFormat:@"%@",(b =  b ? b :@"")]



//屏幕宽度与高度
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

#define KSCREEN_WIDTH               [[UIScreen mainScreen] bounds].size.width
#define KSCREEN_HEIGHT              [[UIScreen mainScreen] bounds].size.height
#define KTabBar_HEIGHT              self.tabBarController.tabBar.height
#define KNav_Height (self.navigationController.navigationBar.height + 20)


#define kBOUNDS_WIDTH               self.bounds.size.width
#define KBOUNDS_HEIGHT              self.bounds.size.height

/**
 *  Height
 */
#define KHEIGHT_20                   20
#define KHEIGHT_30                   30
#define KHEIGHT_40                   40
#define KHEIGHT_50                   50
#define KHEIGHT_60                   60
#define KHEIGHT_80                   80
#define KHEIGHT_100                  100
#define KHEIGHT_120                  120
#define KHEIGHT_(a)                  a


//判断机型
#define iPhone4                     ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640,960), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone5                     ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640,1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6                     ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750,1334), [[UIScreen mainScreen] currentMode].size) : NO)

#define iPhone6Plus                 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242,2208), [[UIScreen mainScreen] currentMode].size) : NO)


// block self
#define WEAKSELF typeof(self) __weak weakSelf = self;
#define STRONGSELF typeof(weakSelf) __strong strongSelf = weakSelf;

#define dispatch_main_async_safe(block)\
if ([NSThread isMainThread]) {\
block();\
} else {\
dispatch_async(dispatch_get_main_queue(), block);\
}

// device verson float value
#define CURRENT_SYS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]



#endif /* Macros_h */
