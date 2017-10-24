//
//  ViewController.h
//  BunchOfJunk
//
//  Created by Hongbo Niu on 2017-10-23.
//  Copyright © 2017 Udemy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

//Strong or weak only for Objects, not primitive type;
@property (nonatomic, strong) NSString *name;
@property (nonatomic) int age;

@end

