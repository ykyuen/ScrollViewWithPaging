//
//  MyViewController.h
//  ScrollViewWithPaging
//
//  Created by CECID on 18/05/2010.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MyViewController : UIViewController {
	UILabel *pageNumberLabel;
    int pageNumber;
}

@property (nonatomic, retain) IBOutlet UILabel *pageNumberLabel;

- (id)initWithPageNumber:(int)page;

@end
