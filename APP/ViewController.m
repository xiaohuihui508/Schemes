//
//  ViewController.m
//  APP
//
//  Created by 程辉 on 2019/6/27.
//  Copyright © 2019 CY. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
    UILabel *lb = [[UILabel alloc] init];
    lb.backgroundColor = [UIColor redColor];
    lb.textAlignment = NSTextAlignmentCenter;
    lb.text = kServerAddress;
    [self.view addSubview:lb];
    lb.frame = CGRectMake(100, 100, 200, 30);
    
    
}


@end
