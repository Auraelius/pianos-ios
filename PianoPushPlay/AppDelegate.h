//
//  AppDelegate.h
//  PianoPushPlay
//
//  Created by James Stiehl on 1/20/15.
//  Copyright (c) 2015 James Stiehl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HttpModule.h"
#import "FindPianosViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) HttpModule *request;

@end

