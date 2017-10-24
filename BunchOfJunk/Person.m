//
//  Person.m
//  BunchOfJunk
//
//  Created by Hongbo Niu on 2017-10-23.
//  Copyright © 2017 Udemy. All rights reserved.
//

#import "Person.h"
#import "BackPack.h"
@implementation Person
-(void)initData{
    self.backPack = [[BackPack alloc]init];
    self.backPack.owner = self;
}
@end
