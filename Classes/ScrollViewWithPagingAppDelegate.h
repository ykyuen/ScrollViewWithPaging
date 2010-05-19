//
//  ScrollViewWithPagingAppDelegate.h
//  ScrollViewWithPaging
//
//  Created by CECID on 18/05/2010.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ScrollViewWithPagingViewController;

@interface ScrollViewWithPagingAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ScrollViewWithPagingViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ScrollViewWithPagingViewController *viewController;

@end

