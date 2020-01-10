//
//  LoginViewController.m
//  Combination
//
//  Created by rimi on 16/7/8.
//  Copyright © 2016年 HA. All rights reserved.
//

#import "LoginViewController.h"

@interface LoginViewController ()
@property (strong, nonatomic) IBOutlet UITextField *userName;
@property (strong, nonatomic) IBOutlet UITextField *userPassword;

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}
- (IBAction)btnClicked:(UIButton *)sender {
    if ([self.userName.text isEqualToString:@"yoo"]&[self.userPassword.text isEqualToString:@"310"]) {
        [self performSegueWithIdentifier:@"123" sender:nil];
    }
    else {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"Error" message:@"Incorrect Username or Password" preferredStyle:UIAlertControllerStyleAlert];
        UIAlertAction *action = [UIAlertAction actionWithTitle:@"Submit" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
            NSLog(@"Did Selected");
        }];
        [alert addAction:action];
        [self presentViewController:alert animated:true completion:nil];
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


@end
