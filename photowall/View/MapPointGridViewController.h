//
//  MapPointGridViewController.h
//  photowall
//
//  Created by Spirit on 4/2/17.
//  Copyright © 2017 Picowork. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageUIViewController.h"

@class UserManager;
@class MapPointManager;

@interface MapPointGridViewController : PageUIViewController<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>


@property (nonatomic, weak) IBOutlet UICollectionView* photosView;

@property (nonatomic) NSString* posterId;
@property (nonatomic, weak) UserManager* userManager;
@property (nonatomic, weak) MapPointManager* photoManager;

- (void)refreshPhotos;

@end
