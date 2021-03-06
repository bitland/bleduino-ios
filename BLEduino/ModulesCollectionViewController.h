//
//  ModulesCollectionViewController.h
//  BLEduino
//
//  Created by Ramon Gonzalez on 10/1/13.
//  Copyright (c) 2013 Kytelabs. All rights reserved.
//

#import <UIKit/UIKit.h>

//Modules
#import "LCDTableViewController.h"
#import "KeyboardModuleTableViewController.h"
#import "GameControllerViewController.h"
#import "RadioControlledViewController.h"
#import "PowerRelayViewController.h"
#import "LEDModuleTableViewController.h"
#import "BDNotificationService.h"
#import "BDBleBridgeService.h"

@interface ModulesCollectionViewController : UICollectionViewController
<
UICollectionViewDelegateFlowLayout,
LCDTableViewControllerDelegate,
KeyboardModuleTableViewControllerDelegate,
GameControllerViewControllerDelegate,
RadioControlledViewControllerDelegate,
PowerRelayViewControllerDelegate,
LEDModuleTableViewControllerDelegate
>
@property (nonatomic, strong) NSArray *modules;
@property (nonatomic, strong) NSArray *modulesImages;

//Services that run in the background.
@property (strong) BDNotificationService *notifications;
@property (strong) BDBleBridgeService *bleBridge;

- (IBAction)showMenu;
- (void)showStatusBar;

@end
