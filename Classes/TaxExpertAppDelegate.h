//
//  TaxExpertAppDelegate.h
//  TaxExpert
//
//  Created by Sara Bury on 22/02/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TaxExpertViewController;

@interface TaxExpertAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TaxExpertViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TaxExpertViewController *viewController;

@end

