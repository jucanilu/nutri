//
//  AppDelegate.h
//  nutri
//
//  Created by J Berber on 04/05/13.
//  Copyright (c) 2013 Canilu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

extern NSString *const FBSessionStateChangedNotification;
- (BOOL)openSessionWithAllowLoginUI:(BOOL)allowLoginUI;
- (void) closeSession;


@end
