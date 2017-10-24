//
//  School.m
//  BunchOfJunk
//
//  Created by Hongbo Niu on 2017-10-23.
//  Copyright © 2017 Udemy. All rights reserved.
//

#import "School.h"
#import "Person.h"
@implementation School
-(void)initData{
    self.student1 = [[Person alloc]init];
    [self.student1 initData];
    
    //This dummy pulled a prank
    self.student1 = nil;
}
@end
