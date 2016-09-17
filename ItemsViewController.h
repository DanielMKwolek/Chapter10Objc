//
//  ItemsViewController.h
//  HomePwner
//
//  Created by Daniel Kwolek on 9/16/16.
//  Copyright © 2016 Arcore. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ItemStore;
@class ImageStore;

@interface ItemsViewController : UITableViewController

@property (nonatomic) ItemStore *itemStore;
@property (nonatomic) ImageStore *imageStore;

@end
