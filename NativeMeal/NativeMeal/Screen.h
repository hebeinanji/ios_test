//
//  Screen.h
//  goTravel
//
//  Created by JiangZiWei on 16/4/19.
//  Copyright © 2016年 至远科技－17. All rights reserved.
//

#import <Foundation/Foundation.h>
#define INDEX [UIScreen mainScreen].bounds.size.width/37.5
#define UISCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define UISCREEN_HEIHT [UIScreen mainScreen].bounds.size.height
#define WIDTH ([UIScreen mainScreen].bounds.size.width-2*4*[UIScreen mainScreen].bounds.size.width/37.5 - [UIScreen mainScreen].bounds.size.width/37.5)/2
@interface Screen : NSObject

@end
