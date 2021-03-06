//
//  GameControllerViewController.h
//  BLEduino
//
//  Created by Ramon Gonzalez on 11/14/13.
//  Copyright (c) 2013 Kytelabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BDControllerService.h"
#import "MFLJoystick.h"

@class GameControllerViewController;
@protocol GameControllerViewControllerDelegate <NSObject>
- (void)gameControllerModuleViewControllerDismissed:(GameControllerViewController *)controller;
@end

@interface GameControllerViewController : UIViewController
<
ControllerServiceDelegate,
JoystickDelegate
>
@property (weak) id <GameControllerViewControllerDelegate> delegate;
- (void)dismissModule;
@end
