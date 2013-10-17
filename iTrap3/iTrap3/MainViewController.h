//
//  MainViewController.h
//  iTrap3
//
//  Created by Prentice on 10/16/13.
//  Copyright (c) 2013 iNevitable Development. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
