//
//  IGCViewController.m
//  IGCMacros
//
//  Created by gia-vt on 03/02/2018.
//  Copyright (c) 2018 gia-vt. All rights reserved.
//

#import "IGCViewController.h"

#import <IGCMacros/IGCMacros.h>

@interface IGCViewController ()

@end

@implementation IGCViewController

- (void)viewDidLoad {
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    // Sample usage
    UIFont *font = FONT(@"HelveticaNeue", 20);
    
    UIAlertController *controller = ALERT(@"Test", @"Some Message");
    
    if (SYSTEM_VERSION_GREATERTHAN_OR_EQUALTO(@"10.0")) {
        DLog(@"is iOS 10");
    }
    
    [NOTIFICATION_CENTER postNotificationName:@"IGCTestNotification" object:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
