//
//  Person.h
//  BunchOfJunk
//
//  Created by Hongbo Niu on 2017-10-23.
//  Copyright © 2017 Udemy. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BackPack;
@interface Person : NSObject
@property (nonatomic, strong) BackPack *backPack;

-(void)initData;
@end
