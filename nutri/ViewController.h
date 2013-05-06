//
//  ViewController.h
//  nutri
//
//  Created by J Berber on 04/05/13.
//  Copyright (c) 2013 Canilu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (IBAction)authButtonAction:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *authButton;
@property (weak, nonatomic) IBOutlet UIButton *inbutton;

@end
