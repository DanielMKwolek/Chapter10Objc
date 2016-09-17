//
//  DetailViewController.h
//  HomePwner
//
//  Created by Daniel Kwolek on 9/16/16.
//  Copyright © 2016 Arcore. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Item;
@class ImageStore;

@interface DetailViewController : UIViewController

@property (nonatomic) Item *item;
@property (nonatomic) ImageStore *imageStore;

@end
