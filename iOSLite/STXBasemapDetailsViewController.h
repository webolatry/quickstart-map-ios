//
//  STXBasemapDetailsViewController.h
//  iOSLite
//
//  Created by Nicholas Furness on 5/23/12.
//  Copyright (c) 2012 ESRI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ArcGIS/ArcGIS.h>

@interface STXBasemapDetailsViewController : UIViewController
@property (nonatomic, strong) AGSPortalItem *portalItem;
@end