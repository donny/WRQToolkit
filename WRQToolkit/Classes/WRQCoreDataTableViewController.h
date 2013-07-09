//
//  WRQCoreDataTableViewController.h
//  WRQToolkit
//
//  Created by Donny Kurniawan on 10/07/2013.
//  Copyright (c) 2013 Worqbench. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "WRQTableViewController.h"

@interface WRQCoreDataTableViewController : WRQTableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
