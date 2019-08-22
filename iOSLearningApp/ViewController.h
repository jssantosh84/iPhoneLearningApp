//
//  ViewController.h
//  iOSLearningApp
//
//  Created by santosh jogur on 20/08/19.
//  Copyright © 2019 santosh jogur. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface ViewController : UIViewController<UIWebViewDelegate, UIActionSheetDelegate> {
    UIWebView    *theWebView;
    NSString    *urlString;
    UIActivityIndicatorView  *whirl;

}

-(void) updateToolbar;

@property (nonatomic, retain) NSString *urlString;
@end

