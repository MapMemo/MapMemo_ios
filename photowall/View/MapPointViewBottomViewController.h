//
//  MapPointViewBottomViewController.h
//  photowall
//
//  Created by andy840119 on 2017/06/04.
//  Copyright © 2017年 Picowork. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MapPointViewController;
@class MapPoint;

@interface MapPointViewBottomViewController : UIViewController

@property (weak, nonatomic)MapPointViewController *mapPointViewController;

- (void)setExistMapPoint:(MapPoint *)targetMapPoint;

@end
