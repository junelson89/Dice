//
//  DiceAppDelegate.h
//  Dice
//
//  Created by Jordan Nelson on 9/27/11.
//  Copyright 2011 Magical Software LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DiceViewController;

@interface DiceAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet DiceViewController *viewController;

@end
