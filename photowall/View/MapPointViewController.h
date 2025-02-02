//
//  MapPointViewController.h
//  photowall
//
//  Created by Spirit on 4/2/17.
//  Copyright © 2017 Picowork. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "PageUIViewController.h"

@class UserManager;
@class MapPointManager;
@class AccountManager;
@class MapPointLocation;
@class MapPointMKMapView;

enum MapPointViewMode
{
    notThisPage=0,//if not on this page
    emptyAndReadyForEdit=1, //if there is not map in the center (selected area)
    onEdit=2,//onEditMap
    forceExistmapPoint=3 //if there have uploadTargetMapPoint in the map
};

@interface MapPointViewController : PageUIViewController<MKMapViewDelegate,UIGestureRecognizerDelegate>

//show the view or edit page
@property (weak, nonatomic) IBOutlet UIView* bottomViewContainer;

@property (weak, nonatomic) IBOutlet MapPointMKMapView* mapView;

@property (weak, nonatomic) UserManager* userManager;

@property (weak, nonatomic) MapPointManager* photoManager;

@property AccountManager* accountManager;

//update the mode
@property(nonatomic) enum MapPointViewMode mapPointViewMode;

@property (weak, nonatomic) IBOutlet UILabel *mapPointerLabel;


//get map Location
-(MapPointLocation *) getPositionFromMapViewCenter;

//Notofied by rootView
- (void)PressButtonDown;
//Notified by rootView
- (void)PressButtonUp;

//update view
-(void)updateView:(enum MapPointViewMode ) type;


@end
