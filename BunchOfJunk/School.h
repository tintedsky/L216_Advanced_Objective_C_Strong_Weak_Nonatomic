//
//  School.h
//  BunchOfJunk
//
//  Created by Hongbo Niu on 2017-10-23.
//  Copyright © 2017 Udemy. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Person;
@interface School : NSObject
@property (nonatomic, strong) Person* student1;
-(void)initData;
@end
