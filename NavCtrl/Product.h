//
//  Product.h
//  ASSIGNMENT3
//
//  Created by Aditya Narayan on 2/26/16.
//  Copyright © 2016 Aditya Narayan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Product : NSObject
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *logo;

- (id) initWithName:(NSString*)name andUrl:(NSString*)url andLogo:(NSString*)logo;
@end
