//
//  ScrollViewWithPagingAppDelegate.m
//  ScrollViewWithPaging
//
//  Created by CECID on 18/05/2010.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "ScrollViewWithPagingAppDelegate.h"
#import "ScrollViewWithPagingViewController.h"

@implementation ScrollViewWithPagingAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
