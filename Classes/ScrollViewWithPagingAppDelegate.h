//
//  ScrollViewWithPagingAppDelegate.h
//  ScrollViewWithPaging
//
//  Created by Yuen Ying Kit on 18/05/2010.
//  Url: http://ykyuen.wordpress.com/2010/05/22/iphone-uiscrollview-with-paging-example/
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

