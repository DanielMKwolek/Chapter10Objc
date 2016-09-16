//
//  ItemsViewController.h
//  HomePwner
//
//  Created by Daniel Kwolek on 9/16/16.
//  Copyright © 2016 Arcore. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ItemStore;

@interface ItemsViewController : UITableViewController

@property (nonatomic) ItemStore *itemStore;

@end
